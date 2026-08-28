# Samsara Reincarnation
![SamsaraReincarnationLogo](https://github.com/user-attachments/assets/0dcf57a3-fc0a-4b47-ad69-14daccae1680)
### Original mod created by TerminusEst13, currently led by Shiny Metagross
Samsara Reincarnation is a gameplay modification for GZDoom, UZDoom, Zandronum, and LZDoom that brings the protagonists of classic and obscure retro shooters into the Doom engine. Originally developed by [TerminusEst13](https://doomwiki.org/wiki/TerminusEst13) in 2012, this fork has seen many contributions from different users over the years and is considered to be the de facto successor of Samsara by the wider Doom community.

Samsara Reincarnation has significantly more content and polish than the original release of Samsara, featuring over thirty heroes compared to the original eight, more settings, hundreds of bugfixes, extended compatibility features, and much more. Some of the heavy hitters in the retro FPS scene are playable in this mod, such as Doomguy, Duke Nukem, Caleb, Gordon Freeman, and James Bond, and more esoteric and historically important characters are also given representation like Fred Chexter and Petton Everhail. In addition to the characters, there are plenty of gameplay modifiers and settings that allow the user to customize their experience, such as starting the game with certain weapons or picking between different blood settings. Players can choose to have a streamlined experience with quality-of-life improvements, or they can play with the vanilla settings or a mixture of both features.

## Features
- Over thirty characters to choose from; certain characters have alternate classes that differ from the original
- Many clientside and serverside settings that change how the game looks or plays
- An in-game Compendium that allows the user to learn more about the characters and the mod options
- Near-universal support for different IWADs; GZDoom users can play other IWADs such as Harmony (2009) or Hacx
- Support for [Samsara ReMixer](https://github.com/Samsara-Reincarnation/Samsara-ReMixer), an addon that adds the enemies from the represented characters' games

## Installation + How to Run
To run Samsara Reincarnation, you will need the latest versions of GZDoom, UZDoom, Zandronum, or LZDoom. The recommended source port for singleplayer is [GZDoom v4.14.2](https://github.com/ZDoom/gzdoom/releases/tag/g4.14.2), and [Zandronum](https://zandronum.com/download) should be used for multiplayer games. UZDoom and LZDoom have been tested and confirmed to work with Samsara Reincarnation, but the target source port will still be GZDoom for stability.

Loading Samsara Reincarnation should be done with a Doom WAD launcher, as it allows easy management and control over what files get loaded and the order they're in. The [Samsara Reincarnation Launcher](https://github.com/ShinyMetagross/Samsara-Reincarnation-Launcher) was designed specifically for that purpose, but other launchers such as ZDL can be used as well. The file order when loading Samsara Reincarnation should be the mapset first, then Samsara, followed by any other mods if desired.

### Supported IWADs
- Doom (doom.wad, doom2.wad, tnt.wad, plutonia.wad, [WadFusion](https://github.com/Owlet7/wadfusion)/[WadSmoosh](https://jp.itch.io/wadsmoosh) also supported)
- Heretic (heretic.wad)
- Hexen (hexen.wad, hexdd.wad)
- Strife (strife.wad, Veteran Edition also supported)
- Chex Quest 3 (chex3.wad, v2.0 not yet supported)

There are additional IWADs that can only work with GZDoom, UZDoom, or LZDoom:
- Hacx (hacx.wad)
- Harmony (harm1.wad, Harmony Compatible needs doom2.wad and a separate patch)
- Chex Quest 1 (chex.wad)
- DOOM CE (v3.11.1, Doom 64 CE requires the remaster's WAD)
- Rise of the Wool Ball (ROTWB.wad)
- The Adventures of Square (square1.pk3)
- REKKR: Sunken Land (REKKRSL.iwad, Sunken Land is a commercial game that needs to be purchased, the regular version of REKKR requires a separate patch)

There are also [compatibility patches](https://github.com/Samsara-Reincarnation/Samsara-Patches) for certain PWADs that are unable to function correctly with Samsara Reincarnation. [Freedoom](https://freedoom.github.io/) and [Blasphemer](https://github.com/Blasphemer) can also be used as substitutes for Doom and Heretic, respectively.

## Philosophy
Samsara Reincarnation can be considered a far cry from both its ancestor and other gameplay mods in the Doom engine. As it has been developed with accuracy in accordance to how the characters played, there can be some game balancing issues when played competitively or on certain PWADs that don't follow the traditional gameplay formula set by Doom. That said, some characters may receive QOL improvements should their gameplay style be considered too advanced or archaic, and it's ultimately up to the developer of the character to decide what option works best for porting them over to Doom.

If anyone finds Samsara Reincarnation to be too unbalanced in competitive multiplayer or have trouble loading the mod on their machines, the repository for [Samsara Classic](https://github.com/Samsara-Reincarnation/Samsara-Classic), another fork of Samsara that's conservative in nature, is available. Unlike Reincarnation, Classic strives to match the original release of the mod closer while adding bugfixes from Reincarnation when applicable.

## How to Contribute
Rather than contributing directly to the repository, it is highly advised to do a pull request, where one developer from the Samsara team may look over the changes made and decide if they should be added. Internally, development can be best described as sporadic, so please be patient in getting a pull request reviewed.

There are also bug reports that can be filled out in case an issue or suggestion should be filled out, but it should be mentioned like before, the development team may not always be available to respond. Any suggestions for new characters will be automatically denied.
