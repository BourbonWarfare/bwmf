# Scripts

The aim of this folder is to build up a useful repository of scripts that MMs
can use to help add fun and interesting twists to their missions. 

# Set up

Uncomment the line `// call compileScript ["scripts\setup.sqf"]` in `init.sqf`

## Change the script settings

Each script will follow the same setup. 
You will find a folder named for the script, and inside the folder 2 files:
`settings.sqf`. This is where you can change the settings for the script. 
`fn_main.sqf`. This is the main function for the script. 

### settings.php

In here you will need to change the SCRIPT define to the name you wish to use for
your script. 

Look for `#define SCRIPT template` and change template to the name of your script.

Add your settings. 

Declare any mission namespace variables you need. 

Examples are available in the template folder.

## Remove any scripts that you do not wish to use.

Simply delete any script folders that you do not wish to use.

# Adding Scripts

The idea is too keep the scripts as simple as possible. The idea is that you 
should be able to add everything you need for that script into the two defined
files.

If you feel like you need to add another file, it's possible that what
you are trying to achieve is something that should be a split into a number of 
separate scripts. 

Settings should be defined in a way that makes the script as flexible as possible
within reason. 

Follow the template folder for reference.
