rem^ & del /q mission.sqm.oldBackup & del /q Thumbs.db & del /q README.md & del /A:H /q .* & del /q .* & rmdir /s /q .git &@cscript //nologo //e:vbscript "%~f0" & del "%~f0" & exit /b

Wscript.Echo "begin."
set objShell = CreateObject("WScript.Shell")
set objFSO = CreateObject("Scripting.FileSystemObject")
set objSuperFolder = objFSO.GetFolder(objShell.CurrentDirectory)
call ShowSubfolders (objSuperFolder)
call RemoveUnusedLoadouts
Wscript.Echo "end."

WScript.Quit 0

sub CleanFile(fString)
    Wscript.Echo "Cleaning: " & fString & "..."
    script = objFSO.OpenTextFile(fString).ReadAll

    set objRegEx = CreateObject("VBScript.RegExp")
    objRegEx.Global = True
    objRegEx.IgnoreCase = True
    objRegEx.Pattern = "\/\/.*"
    script = objRegEx.Replace(script, "")

    objRegEx.Pattern = "(\r\n|\r|\n)(\s*(\r\n|\r|\n))+"
    script = objRegEx.Replace(script, vbCr & vbLf)

    objFSO.OpenTextFile(fString, 2).Write(script)
end sub

sub RemoveUnusedLoadouts()
    loadouts = objFSO.OpenTextFile(objShell.CurrentDirectory & "\CfgLoadouts.hpp").ReadAll
    set objFolder = objFSO.GetFolder(objShell.CurrentDirectory & "\Loadouts")
    set colFiles = objFolder.Files
    for Each objFile in colFiles
        loadoutName = objFile.name
        if ((InStr(loadouts, objFile.name) <> 0) Or (objFile.name = "undef.hpp") Or (objFile.name = "undef_side_gear.hpp")) then
            Wscript.Echo "Loadout: " & objFile.name & " used, leaving in mission folder"
        else
            Wscript.Echo "Loadout: " & objFile.name & " not used, deleting from mission folder"
            objFSO.DeleteFile(objFSO.GetAbsolutePathName(objFile))
        end if
    next
end sub

sub ShowSubFolders(fFolder)
    set objFolder = objFSO.GetFolder(fFolder.Path)
    set colFiles = objFolder.Files
    for Each objFile in colFiles
        if UCase(objFSO.GetExtensionName(objFile.name)) = "SQF" or UCase(objFSO.GetExtensionName(objFile.name)) = "HPP" or UCase(objFSO.GetExtensionName(objFile.name)) = "EXT" Then
            call CleanFile (objFSO.GetAbsolutePathName(objFile))
        end if
    next

    for Each Subfolder in fFolder.SubFolders
        ShowSubFolders(Subfolder)
    next
end sub
