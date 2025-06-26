=== AverageDanmakufuFinal ===
ver 1.2 (bugfixes, improvements)

below is a list of oddities (or just a todo list) i'll probably fix in the future:
(- means will fix sometime, + means fixed, x means probably not gonna be fixed, ~ means kinda fixed, ? means unsure how to fix)

+ player shots delete a bit too quickly at the top-left of the szcreen before UM (was too lazy to port the original binhacks from khang's initial UM version)
+ the enemy distortion effect looks a bit weird at the edges of the original player field
~ lasers that bounce (shimmy non 4 and tsukasa's ex spell 2) don't have their bounce bounds corrected, this is fixed in this patch by editing the patterns to spawn enemies to create more lasers, but with ecl patches this wouldn't work
x thprac doesn't work on some stages/bosses (crashes, or doesn't teleport), not much I can do about this one personally 
x STD distortion on TH16 stage 1 messes up the enemy distortion
- items reposition themselves at the edge of the original player field if they spawn "offscreen".
- PIV items despawn if they're "offscreen", this is most noticeable in TH16
- in WBaWC, animal spirit bounce bounds are unchanged, if they're spawned or go "offscreen", they insta despawn
- some enemies pop in/pop out (me being lazy)
- some curvy/line lasers noticeably despawn, this is more apparent if you put a ECL patch alongsidee this one
- some effects look off (hyper bg, death effect)
- add bravi's BossDisplayFixes ecl improvements to this
- add FW fullgame support
? enemy indicator disappears if the boss is too "offscreen" 
? hecatia's survival probably crashes 
? TH14's bonus ASCII text is offset a bit

& more!! (yay :sob:)

also; sometimes the HUD opacity is kinda hard to see during spells, i left the front.anm.c (and abcard.anm.c for UM) script there for you to tweak it

this also affects the HUD ASCII numbers as their opacity is tied to the first life ANM script (unsure why it works like this)
search for 0, 85 in front.anm.c and change 85 to something like 255 if you want max opacity

i recommend using truanm to recompile without extracting the ANM's images;

truanm c -g[game] front.anm.c -o front.anm -i front.anm

run this in CMD to recompile (make sure the directory is open first, and you change [game] to smth like 15 or 18)

i know this is a Jank way to configure things, but there's no clean method without custom ANM variables :superdying:

hope you enjoy the patch!
- Neo Nickz