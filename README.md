# PvZ-GW-Map-Loader
Level loader for Plants vs. Zombies: Garden Warfare on PC.

# How to Use It
Download the latest release and inject it with a DLL injector of your choice or copy it into the games install folder named "dinput8.dll".
You must be the host of a garden ops lobby for the load level button to work.

In the "Level Name" text box, input a LevelData's asset name. (filter by `type:leveldata` in Frosty Editor for Gw1 and copy the file path)

In the "Inclusion Options" text box, input a level's layer inclusion options. (search for `Description_Win32` in Frosty Editor for Gw1, select the level you entered click Categories->(0)->Mode to see the gamemodes available, may not all work)

## Example:
* Level Name: _pvz/Levels/Sandbox/Level_Suburbia2/Level_Suburbia2
* Inclusion Options: GameMode=RushLarge0;TOD=Day;ZDebugMode=AllLevelLoaded

## How to use Offline
Without Internet you wont be able to create a garden ops lobby through the menu.
Add this option to the games launch options on EA app(manage->view properties)->advanced launch options:
`-GameTime.MaxSimFps -1 -level _pvz/Levels/Desert/Level_COOP_Desert/Level_COOP_Desert -Game.DefaultLayerInclusion GameMode=Coop0`
Then load into a level using the menu as normal.
This is also faster than loading manually but wont load your save data so will need a mod to unlock everything.
# Credits
PvZ-GW-Map-Loader utilizes the following open source projects:
* [minhook](https://github.com/TsudaKageyu/minhook)
* [imgui](https://github.com/ocornut/imgui)
