### How To:
* Download [latest release](https://github.com/0xb4dc0d3x/dota2/releases/latest);
* Launch Dota2Patcher, select `[1] Patch sv_cheats` or desired function;
* To remove, select `[2] Revert Patch`;

**NOTICE: You need to patch after almost every update of the game client!**

## Auto Accept Founded Match
vpk-mod to automatically accept founded match.
### How To:
* Download [pak01_dir.vpk](https://github.com/0xb4dc0d3x/dota2/raw/master/pak01_dir.vpk)
* Create `\dota 2 beta\game\auto_accept\` folder
* Put pak01_dir.vpk to `auto_accept` folder
* Add `Game auto_accept` & `Mod auto_accept` to gameinfo.gi


## sv_cheats unlock
Allows you to use any cheat-protected commands in multiplayer (ex: `dota_camera_distance 1500`)

### Popular convars (cheat commands):
* `sv_cheats`: default `0`
	* `1` - Unlock convars thats have cheat flag (use it first!)
		* ex. `sv_cheats 1`
* `dota_use_particle_fow`: default `1`
	* `0` - Show hidden spells (particles) and teleports in map's fog
		* ex. `dota_use_particle_fow 0`
* `fog_enable`: default `1`
	* `0` - Remove fog
		* ex. `fog_enable 0`
* `fow_client_nofiltering`: default `0`
	* `1` - Remove anti-aliasing of fog
		* ex. `fow_client_nofiltering 1`
* `dota_camera_distance`: default `1200`
	* `*any number*` - change camera distance
		* ex. `dota_camera_distance 1500`
* `r_farz`: default `-1`
	* `18000` - Override the far clipping plane
	* You need multiply x2 of camera distance or just set `18000`
		* ex. `dota_camera_distance 1500` -> `r_farz 3000`
* `dota_range_display`: default `0`
	* `*any number*` - Displays a ring around the hero at the specified radius
		* ex. `dota_range_display 1200`
* `cl_weather`: default `0`
	* `*any number*`(1-10) - Change weather
		* ex. `cl_weather 8`

### Raw

* just copy raw list and past to console

```
sv_cheats 1; dota_use_particle_fow 0; fog_enable 0; fow_client_nofiltering 1; dota_all_vision 1; dota_camera_distance 1500; r_farz 3000;
```
