@echo off

REM file name of the built PK3, feel free to edit - Stolen from COG lol
set pk3name="SamsaraReincarnation_v2.2.1-Dev-Build"



REM !!! DO NOT EDIT ANYTHING BEYOND THIS POINT !!!!
REM !!! DO NOT EDIT ANYTHING BEYOND THIS POINT !!!!
REM !!! DO NOT EDIT ANYTHING BEYOND THIS POINT !!!!

if exist %pk3name%.pk3 del %pk3name%.pk3
7za.exe a -r -x!.git\ -x!.github\ -x!.vscode\ -x!*.gitattributes -x!*.gitignore -x!src\ -x!psd\ -x!resources\ -xr!*.bat -xr!README.md -xr!*.pk3 -xr!*.dbs -xr!*.exe -xr!*.dll -xr!*.bak -xr!*.backup* -xr!*.workspace -xr!*.psd -xr!*.blend -xr!*.lnk -xr!*.wl6 -xr!*.autosave* -xr!*.ps1* -ssw -tzip -mx7 .\%pk3name%.pk3 "*"
