## BWMF Version 5.0 ##
* Moved most of the framework (map markers, team colors, assign gear, and radios) to the POTATO mod
* Expanded each faction to company strength, and configured them for the new marker, team color, and radio systems
* Tweaked base AI settings to higher min values
* Tweaked the respawn script to work with the new setup
* Reduced base bleed rate from 5x to 1.5x
* (Temporarily) removed MSV from the framework, don't worry they should be back by 5.1

## BWMF Version 4.4 ##
* Complete overhaul of the loadouts
* Updated spectate (hopefully fixing the issue where people never reach spectate)
* Changed assign gear, so you can add launcher specific optics
* Changed briefings to be side specific, and updated their naming convention
* Updated showing the OrBat to build using an array (looped string concatenation is the devil)
* Fixed numerous issues with markers

## BWMF Version 4.3 ##
* Respawn
* Updated spectate
* Radio re-init
* Auto-add units to Zeus (does not work for initial spawn)

## BWMF Version 4.2 ##
* Soviet's Loadouts
* Lots of framework cleanup
* New SQM
* setTeamColors
* Handle incompatible attachments
* Easy setting to disable vehicle gear
* Easy setting to disable optics
* Auto Credits from description.ext
* Radio Channels on briefing
* Loadout error logging
* Replace old RH scopes
* ALiVE updates
* Removed local for future 1.54 compatibility
* Gear fallback
* GUI Cleanup
* DAC Removal

## BWMF Version 4.1 - Forked from F3 3-1-1 ##

* New gear loadouts based on .hpp
* Increased Blufor to company level
* Added Russian company
* New group markers based on drawicon3d
* Several other performance improvements, cleanup, etc.

I cut out F2/BAF changelogs to save space.If people are interested they can be found at https://github.com/ferstaberinde/F3

# F3 README #

* Version: 3-1-1
* Codebase: https://github.com/ferstaberinde/F3
* Developer: Please see credits section below.
* Publishers: Fer (alanr@ferstaberinde.com)
* Description: MP mission framework for Arma 3.


## README CONTENTS ##

01. VERSION HISTORY
02. CREDITS
03. COPYRIGHT STATEMENT
04. TERMS OF USE
05. LEGAL DISCLAIMER
06. DISTRIBUTING SIMULATION CONTENT CREATED WITH THE SOFTWARE
07. SUPPORT INFORMATION
08. INSTALLATION
09. NOTES
10. CHANGE HISTORY


## 01. VERSION HISTORY ##

### F3 Version History ###

Version | Date | Notes

* 3-1-1     | 26 JUL 2014 | Patch release - Various improvements (see change history).
* 3-1-1 RC1 | 23 JUL 2014 | Internal release - Various improvements (see change history).
* 3-1-0     | 17 JUN 2014 | Patch release - Various improvements (see change history).
* 3-1-0 RC6 | 16 JUN 2014 | Internal release - Various improvements (see change history).
* 3-1-0 RC5 | 11 JUN 2014 | Internal release - Various improvements (see change history).
* 3-1-0 RC4 | 03 JUN 2014 | Internal release - Various improvements (see change history).
* 3-1-0 RC3 | 29 MAY 2014 | Internal release - Various improvements (see change history).
* 3-1-0 RC2 | 28 MAY 2014 | Internal release - Various improvements (see change history).
* 3-1-0 RC1 | 24 MAY 2014 | Internal release - Various improvements (see change history).
* 3-0-9A    | 12 FEB 2014 | Patch release - Various improvements (see change history).
* 3-0-9     | 09 FEB 2014 | Patch release - Various improvements (see change history).
* 3-0-8     | 28 DEC 2013 | Patch release - Various improvements (see change history).
* 3-0-7     | 14 SEP 2013 | Patch release - Various improvements (see change history).
* 3-0-6     | 20 AUG 2013 | Patch release - Various improvements (see change history).
* 3-0-5     | 17 AUG 2013 | Patch release - Various improvements (see change history).
* 3-0-4     | 08 AUG 2013 | Patch release - Various improvements (see change history).
* 3-0-3     | 25 JUN 2013 | Patch release - Various improvements (see change history).
* 3-0-2     | 25 MAR 2013 | Patch release - Various improvements (see change history).
* 3-0-1     | 17 MAR 2013 | Patch release - Various improvements (see change history).
* 3-0-0     | 10 MAR 2013 | First alpha release to community (see change history).


## 02. CREDITS ##

### F3 Credits ###

* Contributors: Head | Harakka | Fer | Wolfenswan | Cam | turowicz | CaseMonster | Black Mamba | DarkTatka | Tigershark | cptnnick | Linux
* Documentation: Fer | Wolfenswan | Dogface | Cam
* Producers: Fer | Wolfenswan
* Special Thanks: Arctor | BasterActual | batboyx2 | cptnnick | Dogface | Draakon | Landyacht | Linux | nolux | Pabstmirror | Snippers | Zerith
* Special thanks to everyone at: Folk ARPS | Basterd ArmA | Black sh33p | Bourbon Warfare | Phantactical | Pointfire | Project Awesome | Team One Tactical | The Company

### F2 Credits ###

* Contributors: Headspace | kevb0 | Lor | Ricardo | Wolf | ViperMaul | Xiathorn | zx64 | Norrin | white angel | Fer | Strango | beta | Mike84 | b3rt | Henk | Redkid | Macolik | kungtotte | Tigershark | LoneStar | Nullkigan | Harakka | Wolfenswan | DarkTatka | Black Mamba | Head | Mike
* Documentation: Fer | Messiah2 | Xiathorn
* Producers: Fer
* Special Thanks: Dancingcuban | Firebird | Stranglove | Ferrard Carson | Bodge
* Special thanks to everyone at: ShackTactical | Folk | ARPS | Folk ARPS

### BAS f Credits ###

* Contributors: Fer | Kronzky | Rom | Raedor | Kegetys | eJay | burningtrees | Redkid Joker | Headspace | ViperMaul | zx64 | kevb0 | Mandoble | Red Barron | Jaxobs | Awoihjaweohr | FLEXCopMNPD | Jefke
* Translators: Donnervogel | Serclaes | Messiah2 | Gaia | FireflyPL | Kanotson | Varry | W0lle | Nikita Kaspersky | Rainbow | JanMasterson
* Documentation: Fer | Kegetys | Serclaes | Messiah2
* Producers: Fer
* Special Thanks: Dux | kevb0 | Tigershark | Dslyecxi | Rhodite | Opteryx | henk | bluedingo | broileri | Fullforce | Tyger
* Special thanks to everyone at: TimeZone Warriors | ShackTactical


## 03. COPYRIGHT STATEMENT ##

F3 is composed of many components. Each component is (c) 2007/2008/2009/2010/2011/2012/2013/2014 its respective contributor(s). All rights reserved.



## 04. TERMS OF USE ##

F3 (hereafter 'Software') contains files to be used in the PC CD-ROM simulators "Arma 3". To use the Software you must agree to the following conditions of use:

1. The term 'Software' specifically excludes the file 'mission.sqm'.

2. The contributors of individual components of the Software (hereafter 'The Contributors') grant to you a personal, non-exclusive license to use the Software for the purpose of designing, developing, testing, and distributing non-commercial simulation content for ArmA 3.

3. The commercial exploitation of any game content created using the Software without written permission from The Contributors is expressly prohibited.

4. Reverse-engineering, or other conversion of the Software for use with any game except ArmA 3 without written permission from The Contributors is expressly prohibited.

5. The Software may only be re-distributed in its entirety, complete with this "ReadMe" document.



## 05. LEGAL DISCLAIMER ##

The Software is distributed without any warranty; without even the implied warranty of merchantability or fitness for a particular purpose. The Software is not an official addon or tool. Use of the Software (in whole or in part) is entirely at your own risk.



## 06. DISTRIBUTING SIMULATION CONTENT CREATED WITH THE SOFTWARE ##

Please note that you do NOT require permission from The Contributors to distribute simulation content (e.g. missions) created with the Software. However, The Contributors do ask that you credit the Software in any release documentation.



## 07. SUPPORT INFORMATION ##

The online manual can be found at:

* http://www.ferstaberinde.com/f3/EN/ (English language version)


## 08. INSTALLATION ##

To begin using the Software, move the F3.Altis folder into one of the following directories:

* \My Documents\Arma 3\MPMissions\
* \My Documents\Arma 3 Other Profiles\YourPlayerName\MPMissions\

Access the online manual (see SUPPORT INFORMATION above) and follow the instructions contained therein.


## 09. NOTES ##

We hope you will enjoy making and updating missions for Arma 3 with F3!

Fer :) (alanr@ferstaberinde.com) (on behalf of all F3 / F2 / BAS f contributors)


## 10. CHANGE HISTORY ##

### F3 Change History ###

Version | Date

3-1-1 | 26 JUL 2014

* Added Medical Systems Support component:
 * Incorporates F3 Simple Wounding System
 * Adds support for AGM medical supplies.
* Updated AI Caching component:
 * Workaround for vehicles being frozen if moving and cached at the same time.
 * Caching completely run server side using global commands.
 * New variable to set aggressiveness of caching.
* Updated F3 Folk ARPS Platoons component:
 * Added Heavy MG attachment.
 * Added Heavy AT attachment.
 * Added Mortar attachment.
 * Added Medium SAM attachment.
 * Added Heavy SAM attachment.
 * Added Sniper Team attachment.
 * Attachments are now led by the spotter.
* Updated F3 Folk ARPS Assign Gear component:
 * Tweaked MAT loadouts (gunner now starts with rocket in tube).
 * Added support for unit types in new attachments.
* Updated F3 Folk ARPS Assign Gear Clothing component:
 * Component allows units to wear uniforms from any side or faction.
 * Added new FIA uniforms, made various other tweaks.
 * Changed CSAT small bag to correct camo.
* Updated F3 Folk ARPS Group IDs component: added support for unit types in new attachments.
* Updated F3 Folk ARPS Group Markers component: added support for unit types in new attachments.
* Updated F3 Spectator Script:
 * Revised code to reduce load on CPU.
 * Virtual men no longer have visible name tags.
* Updated Name Tags component:
 * Height above unit determined by stance.
 * Offset for passenger name tags fixed.
* Updated ORBAT Notes component:
 * Now lists all groups with playable units (not just player groups).
 * Highlights player group (highlight colour determined by side).
* Updated Radio Systems Support component:
 * Improved support for spectators in TFR.
 * Other minor tweaks.
* Fixed Mission Conditions component:
 * Lightning set correctly.
 * All Intel values in editor set to manual/0.
* Fixed PreMount component:
 * Fixed issue where component would not slot turrets properly for vehicles with multiple turrets.

3-1-1 RC1 | 23 JUL 2014

* Please see change history for release v3-1-1.

3-1-0 | 17 JUN 2014

* Please change history for internal releases v3-1-0 RC1 through v3-1-0 RC6.

3-1-0 RC6 | 16 JUN 2014

* Added Admin Briefing component:
 * Lists endings and allows admin to invoke them by clicking a link.
* Updated E&E Check component:
 * Allows passing of side instead of array.
 * Groups/units are now passed as an array of strings to prevent script-errors.
 * Optional boolean (last parameter): toggle if to check playable units only (default: true).
* Updated the F3 Simple Wounding System component:
 * Made the release action created on yourself so its always around.
 * Tweaked SetDowned.
 * Added longer delay before system starts to allow for desync'd players..
* Updated F3 Spectator Script component:
 * Modified the freecam to use correct height in follow-mode.
* Fixed typo in AI Skill Selector component.
* Fixed error in Radio Systems Support component.

3-1-0 RC5 | 11 JUN 2014

* Added Radio Systems Support component (replaces ACRE support component):
 * Supports ACRE and TFR systems via single mission parameter.
 * All radios cleared to avoid duplication of radio items.
 * Optional: radio frequencies split based on unit's side.
 * Spectator chat correctly handled for all players.
 * Radios assigned based on assignGear calls (from unit init).
 * ACRE only: vehicles filled with radios, depending on size.
 * New component works separately from the F3 Folk ARPS Assign Gear Script component  for locality purposes.
* Updated Fireteam Member Markers component:
 * Team colours are now assigned in arrays at top of script (easier to modify, same functionality).
* Updated Join Group Action component: new notifications.
* Updated ORBAT Notes component:
 * ORBAT lists vehicles, crew and any loaded elements.
 * ORBAT lists individual medics (under their element leader).
* Fixed F3 Spectator Script component:
 * Fixed issues for players joining into spectator mode during a no-respawn mission.
 * Fixed various tags and camera issues.
* Fixed several components for use with JIP/respawn:
 * Fireteam Member Markers component.
 * F3 Folk ARPS Group Markers component (specifically for specialist markers).
 * Join Group Action component.

3-1-0 RC4 | 03 JUN 2014

* Fixed AI Skill Selector component: removed references to precursor component.
* Fixed F3 Folk ARPS Platoons component: incorrect group names for some FIA groups.
* Fixed F3 Folk ARPS Assign Gear Clothing component: incorrect uniforms for FIA drivers.
* Fixed F3 Simple Wounding System component: typo with variable name.
* Fixed F3 Spectator Script component: tags and camera issues.

3-1-0 RC3 | 29 MAY 2014

* Updated F3 Folk ARPS Platoons component:
 * Added CO/DC driver (repair) slots (all factions).
 * Added UAV Operator slots to FIA.
* Updated MapClick Teleport component: added HALO option.
* Updated Mission Conditions Selector component:
 * Night option now features full moon.
 * Other options adjusted (better dawn/dusk etc.).
* Fixed ReadMe File Template component: removed ArmA 2 references.
* Fixed F3 Folk ARPS Assign Gear Script component: incomplete lists of classes in headers.
* Fixed F3 Spectator Script component: minor issues.
* Fixed F3 Simple Wounding System component: minor issues.

3-1-0 RC2 | 28 MAY 2014

* Updated F3 Folk ARPS Platoons component:
 * Ground vehicle drivers and selected helicopter crew members are now able to repair vehicles.
 * Ground vehicle commanders have rangefinders.
 * Fixed AAF DC group assignment.
* Updated Safe Start component:
 * Changed frequency and duration of notifications.
 * Changed name of parameter variable.
* Fixed ACRE Support component: script path(s).
* Fixed Debug Mode component: string paths (several were still referring to f\common)
* Fixed F3 Folk ARPS Assign Gear Script component:
 * Removed blank between assignGear and ; in unit INIT lines.
 * Removed nul = for unit INIT assignGear call.
* Fixed F3 Folk ARPS JIP Reinforcement Options component: paths (were still referring to f\common).
* Fixed F3 Folk ARPS Group Markers component: markers work for JIP players.
* Fixed Mission Conditions Selector component: issue with overcast implementation.
* Fixed PreMount component:
 * Fixed incorrect function calls in modules for CSAT.
 * Made more robust.
* Fixed E&E and Casualties Cap components: ensured code spawned happens globally.
* Fixed SP Editor issues (various).

3-1-0 RC1 | 24 MAY 2014

* Restructured folders and files:
 * Nearly all components now rest within their own sub-folder.
* Added AI Skill Selector component:
 * Replaces the old AI Skill Selector (A&D and Coop) component.
 * Allows the skill levels of all three combatant sides to be set individually via mission parameters.
* Added F3 Folk ARPS Assign Gear Attachments component:
 * Works with F3 Folk ARPS Assign Gear Script component.
* Added F3 Folk ARPS Assign Gear Clothes component:
 * Works with F3 Folk ARPS Assign Gear Script component.
* Added F3 Simple Wounding System.
* Added F3 Premount component:
 * Mission makers can quickly and easily mount multiple groups in multiple vehicles.
 * Mission makers can control use of crew seats and group cohesion across vehicles.
 * Pre-placed modules support easy mounting of squads from pre-placed platoons.
* Added Respawn Templates component:
 * Replaces Respawn INIT component.
* Added MapClick Teleport component:
 * Replaces the Mission Maker Teleport component.
 * Can also be used by players in-game.
 * Mission makers can restrict usage by number of uses and/or time.
 * Mission makers can restrict usage to group leaders.
* Added support for OPFOR and Independent FIA platoons to following components:
 * Briefing Template component.
 * F3 Folk ARPS Assign Gear Script component.
 * F3 Folk ARPS Group IDs component.
 * F3 Folk ARPS Group Markers component.
* Updated Authorised Crew Check component:
 * Now incorporates Authorised Crew Type Check component.
 * Mission maker can now control access to passenger seats as well.
* Updated Buddy Team colours component:
 * Fixed bug with teams that begin in vehicles.
* Updated Casualties Cap component:
 * Now incorporates Casualties Cap (Advanced) components.
* Updated Dynamic View Distance component:
 * Mission makers can now control view distances for vehicle passengers.
* Updated F3 Folk ARPS Assign Gear Script component:
 * Backpacks parameter renamed to Loadouts.
 * Added UAV operator loadout to all factions.
 * Changed default AT for AAF faction to RPG32.
 * Replaced all binoculars with rangefinders.
 * Fixed issues with respawn and JIP.
 * F3 Folk ARPS Assign Gear component is now called using f_fnc_assignGear (omitting the folk).
 * Uniform types (e.g. light, crew, diver etc.) for each unit type can now assigned in the faction's assignGear file.
 * Added new uniform types: ghillie suits and special forces (AAF don't have a dedicated AAF loadout, FIA use CTRG).
 * Backpack loadouts have been moved into their own file.
 * Attachments are now assigned as local variables, can be assigned as a per-type basis.
 * Added options for handgun attachments.
 * Tweaks to improve perfomance when loading vehicles with assignGear.
* Updated F3 Folk ARPS Group IDs component:
 * Reworked to tidy up code and bring up to standard.
* Updated F3 Folk ARPS JIP Reinforcement Options component:
 * Fixed component for respawn and JIP.
 * Uses RespawnTemplate instead of a EventHandler.
 * Added optional removal of old player corpses.
 * Added optional enforcement of old gear.
 * Added JIP menu allows joining no group or staying in old group if it still has members.
* Updated F3 Folk ARPS Platoons component:
 * Added UAV operator to each CO/DC team for NATO, AAF and CSAT.
* Updated F3 Spectator Script component:
 * Full sized map.
 * FOV Zoom.
 * Tag names for players.
 * Completely overhauled camera * now much smoother.
 * Revamped tags.
* Updated Mission Conditions Selector component:
 * All relevant files moved to f/missionConditions.
 * Split f_setMissionConditions.sqf into three files: fn_setFog, fn_setDate, fn_setWeather.
 * Updated component to take advantage of BIS improvements in weather system and sychronisation.
 * Updated component to allow usage of new setFog array.
 * Updated component to allow smooth time transitions when changing the date.
* Update Multiplayer Ending Controller component:
 * Component is now called using ["ending"] call f_fnc_mpEnd and needs only to be called on the server.
 * Updated to take advantage of Arma 3 improvements.
 * Component now accepts optional second parameter: true (default) displays "mission completed" type of ending, false "mission failed".
* Updated Safe Start component.

3-0-9A | 12 FEB 2014

* Updated AI Caching component.

3-0-9 | 09 FEB 2014

* Added AI Caching component.
* Updated F3 Folk ARPS Group Markers component:
 * Functions are now defined in cfgFunctions via description.ext.
 * Fixed bug where marker was frozen despite the group still having members.
* Updated F3 Folk ARPS Assign Gear Script component:
 * Added uniform randomisation.
 * MAT teams now use NLAWs or RPGs.
 * Rifleman (AT) loadout tweaked.
 * Rifleman (AT), MAT loadouts work when backpacks are disabled.
 * Added mini grenades to many loadouts.
 * Expanded engineer detachment.
 * Split engineer role into two specialisms: demo and mines (both types have repair kits and mine detectors).
 * Adjusted loadouts and outfits to reflect changes introduced in A3 1.10.
* Updated Name Tags component:
 * Added optional display of unit group (defined by setGroupID / F3 Folk ARPS Group IDs component).
 * Added optional feature to display distance in metres.
 * Added optional feature to display type of mounted vehicle for driver/gunner/commander.
 * Drawing of name tags is now its own function defined in cfgFunctions.
 * Fixed issue where name tag height for units in buildings would be incorrect.
 * Fixed issue where name tags would display for enemy/neutral units in vehicles.
 * Misc. improvements and tweaks.
* Updated F3 Folk ARPS Platoons component:
 * Added tank and attack helo groups to AAF.
 * Temporarily removed JIP groups (for all factions).
* Updated Mission Conditions component to adjust fog values.
* Updated Buddy Team Colours component.
* Updated Automatic Body Removal component.
* Fixed ACRE Support component issue with spectator script.
* Misc. typo fixes in various components.

3-0-8 | 28 DEC 2013

* Moved README.md to the F3 folder.
* Added BIS debug console for logged-in admins.
* Added Safe Start component.
* Added new F3 Spectator component.
* Overhauled F3 Name Tag component
* Overhauled F3 Automatic Body Removal Component
* Overhauled F3 Set AI Skill Component
* Updated Briefing Template component to reflect new faction names.
* Updated Mission Observers component to use BIS Splendid Camera.
* Updated F3 Folk ARPS Platoons component to reflect new faction names.
* Updated F3 Folk ARPS Assign Gear Script component to reflect new faction names.
* Updated F3 Folk ARPS Group IDs to reflect new faction names.
* Updated F3 Folk ARPS Assign Gear scripts to improve weight-distribution in fire teams and reduce overall weight
* Expanded F3 Folk ARPS Platoons component to include FIA platoon.
* Expanded F3 Folk ARPS Assign Gear Script component to support FIA platoon.
* Expanded F3 Folk ARPS Assign Gear Script component to offer more variety for backpacks and vests
* Expanded Briefing Template component to support FIA platoon.
* Expanded F3 Folk ARPS Group IDs to support FIA platoon.
* Expanded F3 Folk ARPS Group Markers to support FIA platoon.
* Expanded F3 Folk ARPS JIP Reinforcement Options to support FIA platoon.
* Re-enabled more weather parameter options in Mission Conditions Selector component.
* Removed now obsolete old F2 name tag component
* Removed obsolete F2 Tripwire Action entry in init.sqf
* Removed unnecessary references to Stratis in mission.sqm
* Disabled Weather synchronization in F3 Missions Conditions selector component for perfomance reasons
* Fixed minor bug in F3 Folk ARPS Platoons component.
* Fixed bugs in F3 Mission Conditions Selector introduced by A3 1.02.110.424

3-0-7 | 14 SEP 2013

* Changed default terrain to Altis.
* Added Fireteam Member Markers component.
* Added Buddy Team Colours component.
* Partially re-enabled weather parameter in Mission Conditions Selector component.
* Expanded F3 Folk ARPS Platoons component:
 * INDEPENDENT platoon can now be helibourne or mechanised.
 * BLUFOR platoon now has 1 x tank.
 * OPFOR platoon now has 1 x tank.
* Implemented new functions-based approach to parameters, gear etc.
* Updated F3 Folk ARPS Assign Gear Script component to support new NVG classnames.
* Removed ShackTactical Fireteam Member Markers component.

3-0-6 | 20 AUG 2013

* Updated Multiplayer Ending Controller component to use new BIS endings.
* Updated F3 Folk ARPS Assign Gear Script component (various fixes/changes).
* Fixed additional unsassigned variable errors.
* Removed unused files and references.

3-0-5 | 17 AUG 2013

* Migrated ACRE Support component (inc. pre-set frequencies, see F3 wiki for details).
* Expanded F3 Folk ARPS Platoons component:
 * BLUFOR platoon can now be helibourne or mechanised.
 * OPFOR platoon can now be helibourne or mechanised.
 * INDEPENDENT platoon can now be helibourne.
* Fixed additional unsassigned variable errors.
* Removed Kegetys Spectator Script component.
* Removed unused files and references.

3-0-4 | 08 AUG 2013

* Fixed "no entry 'bin\config.bin/CfgWeapons.'." error.
* Fixed various unsassigned variable errors.
* Fixed medic markers in F3 Folk ARPS Group Markers component.
* Fixed time of day parameter in Mission Conditions Selector component.
* Disabled weather parameter in Mission Conditions Selector component.
* Added new options to Casualties Cap component.
* Added new options to Casualties Cap (Advanced) component.

3-0-3 | 25 JUN 2013

* Quick updates to reflect key ArmA 3 Beta content and changes.
* Updated all F3 Folk ARPS components to include Green faction.
* Updated all F3 Folk ARPS components to reflect Blue/Red/Green faction names.
* Updated F3 Folk ARPS Platoons component to include new/upgraded vehicles.
* Updated ORBAT Notes component (group names are now clickable and zoom map to group marker).
* Updated F3 Folk ARPS JIP Reinforcement Options component (JIP group does not follow player).
* Updated F3 Folk ARPS JIP Reinforcement Options component (JIP option more visible).
* Fixed F3 Common Local Variables component (prevented double-counts of vehicle crew).

3-0-2 | 25 MAR 2013

* Updated to reflect revised OPFOR uniform classnames.
* Updated to reflect revised name for Ifrit.
* Development of Mission Conditions Selector component (new functionality not yet enabled).

3-0-1 | 17 MAR 2013

* Fixed diver attachment bug with F3 Folk ARPS Assign Gear Script component.
* Fixed ranks and typos with F3 Folk ARPS Platoons component.
* Missle cam no longer on by default in Kegetys Spectator Script component.
* Updated F3 Folk ARPS Assign Gear Script component to include backpack options by parameter (off/light/heavy).
* Updated F3 Folk ARPS Assign Gear Script component so Rifelman (AT) role has a launcher.

3-0-0 | 10 MAR 2013

* Migrated Naming Your Mission component.
* Migrated Mission Header component.
* Migrated Respawn Settings component.
* Migrated Respawn INIT component.
* Migrated (and renamed) Briefing Template component.
* Migrated ReadMe File Template component.
* Migrated Debug Mode component.
* Migrated Disable Saving and Auto Saving component.
* Migrated (and renamed) F3 Common Local Variables component.
* Migrated Join Group Action component.
* Migrated Kegetys Spectator Script component.
* Migrated Mission Observers component.
* Migrated Multiplayer Ending Controller component.
* Migrated ORBAT Notes component.
* Migrated Sample Markers component.
* Migrated ShackTactical Fireteam Member Markers component.
* Migrated AI Skill Selector (A&D) component.
* Migrated AI Skill Selector (coop) component.
* Migrated Authorised Crew Check component.
* Migrated Authorised Crew Type Check component.
* Migrated Automatic Body Removal component.
* Migrated Casualties Cap component.
* Migrated Casualties Cap (Advanced) component.
* Migrated Dynamic View Distance component.
* Migrated Group E&E Check component.
* Migrated Mission Maker Teleport component.
* Migrated Name Tags component.
* Migrated (and renamed) F3 Folk ARPS Platoons component.
* Migrated (and renamed) F3 Folk ARPS Assign Gear Script component.
* Migrated (and renamed) F3 Folk ARPS Group IDs component.
* Migrated (and renamed) F3 Folk ARPS Group Markers component.
* Migrated (and renamed) F3 Folk ARPS JIP Reinforcement Options component.
* Part-migrated Mission Conditions Selector component.
* Removed Disable BIS Conversations component.
* Removed Preplaced Game Logics component.
* Removed ACRE Support component.
* Removed Automatic Body Removal (FIFO) component.
* Removed Construction Interface (COIN) Presets component.
* Removed Trip Flare component.
* Removed Gear Snippets component.
* Added Loading Screen component.
