@echo off
setlocal

rem delete git/backup files
del /q mission.sqm.bak
del /q README.md
del /q .*

rem remove comments from sqf files
call :FindReplace "\/\/.*" "" *.sqf

rem remove empty lines from sqf files (and force onto one line)
call :FindReplace "[\s]*[\r\n]" "" *.sqf

rem remove comments from ext files
call :FindReplace "\/\/.*" "" *.ext

rem remove empty lines from ext files (and force onto one line)
call :FindReplace "[\s]*[\r\n]" "" *.ext

rem remove comments from hpp files
call :FindReplace "\/\/.*" "" *.hpp

rem remove non included loadouts
for %%a in ("Loadouts\*") do (
  findstr /irc:"[ \t]*#include[ ]*\"Loadouts\\%%~nxa\"" CfgLoadouts.hpp || del /q %%a
)

rem remove empty lines from hpp files (and force onto one line)
call :FindReplace "[\s]*[\r\n]" "" *.hpp

rem delete cleanup file
(goto) 2>nul & del "%~f0"

exit /b 
:FindReplace <findstr> <replstr> <file>
set tmp="%temp%\tmp.txt"
If not exist %temp%\_.vbs call :MakeReplace
for /f "tokens=*" %%a in ('dir "%3" /s /b /a-d /on') do (
  <%%a cscript //nologo %temp%\_.vbs "%~1" "%~2">%tmp%
  if exist %tmp% move /Y %tmp% "%%~dpnxa">nul
)
del %temp%\_.vbs
exit /b

:MakeReplace
>%temp%\_.vbs echo with Wscript
>>%temp%\_.vbs echo set args=.arguments
>>%temp%\_.vbs echo Set objRegEx = CreateObject("VBScript.RegExp")
>>%temp%\_.vbs echo objRegEx.Global = True
>>%temp%\_.vbs echo objRegEx.IgnoreCase = True
>>%temp%\_.vbs echo objRegEx.Pattern = args(0)
>>%temp%\_.vbs echo .StdOut.Write objRegEx.Replace(.StdIn.ReadAll, args(1))
>>%temp%\_.vbs echo end with