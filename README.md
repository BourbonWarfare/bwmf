# BWMF

A mission framework from the members of Bourbon Warfare.

<p align="center">
    <a href="https://github.com/BourbonWarfare/bwmf/issues">
        <img src="https://img.shields.io/github/issues/BourbonWarfare/bwmf" alt="Potato Issues">
    </a>
    <a href="https://discord.gg/sW8CT2m">
        <img src="https://img.shields.io/discord/681656029758488619?color=%237289da&label=Discord&logo=discord&style=flat-square" alt="Bourbon Warfare Discord">
    </a>
    <a href="http://www.bourbonwarfare.com/">
        <img src="https://img.shields.io/badge/Website-Bourbon%20Warfare-red" alt="Bourbon Warfare Website">
    </a>
</p>

## BWMF Version 5.6 ##
* Loadouts - Add description for new supply box and vehicle loadout systems (check `Loadouts.cfg`)
* Unit Renaming:
	* Forward Air Controller (FAC) -> Joint Fires Observer (JFO)
  * Mortar Team Spotter -> Mortar Team Loader
  * Medium Machine Gun Spotter -> Medium Machine Gun Assistant Gunner
  * Medium AT Team Spotter -> Medium AT Team Assistant Gunner
  * Medium SAM Team Spotter -> Medium SAM Team Assistant Gunner
* Unit marker for JFO
* Loadout changes:
	* Base Riflemen: +1 TQ, +1 PK Blister (2 uses of pk)
	* All Medics: + naloxone, +bottle of painkillers (2 for SM, 4 for PM)
	* Base Artillery: +ACE plotting board

## BWMF Version 5.5 ##
* Doubled Spectator slots (mostly for TvTs)
* Added dedicated Zeus slots for all sides (Game Master modules are pre-attached)
* Loadout Additions + Reworks
Adds several new loadouts while updating some old loadouts and removing redundant duplicates.

* Notepad + Custom Macro removal
Adds the notepad item to the leadership tools macro in common.hpp
Cleans added loadouts of custom tools macro, replaced with base tools macro

## BWMF Version 5.4 ##
* Loadouts overhaul

## BWMF Version 5.3 ##
* Rework framework to use Potato units
* Rework MSV to be compatible with all standard loadouts
* Update base medical loadouts (Add splints remove morphine on GI, addition of adenosine for medics)
* Addition of FAC, Artillery, HAT, HMG, and Logistics teams
* Addition of dedicated slots for weapons team leads, medics (Squad, Pl, Coy), Rifleman 2, executive officers (Pl, Coy), vehicle crews (Leader, Gunner, Driver), and aircrews (Pilot, Crew Chief, Gunner)
* Many minor fixes to issues discovered in the process of the update

## BWMF Version 5.2 ##
* Moved to Advanced Medical
* Add group names for slotting

## BWMF Version 5.1 ##
* Moved the rest of the framework (respawn and spectate) to the POTATO mod
* Added MSV back (thanks Raeth)
* Removed vehicles from the framework
* Added medical markers to JIP medics
* Updated to expanded/slightly more correct map markers
* Added 3rd platoon to the shortrange net (Respawn Platoon)

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
