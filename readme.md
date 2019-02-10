# About ghck.c 
This is an attempt at copying the C code written by Dr. Willis in
Mamoru Oshii's "Ghost in the Shell" (the cyberpunk anime from 1995).

## Errors
When analysing the scene frame-by-frame, we can see Dr. Willis actually
repeats three times the same piece of code. However, some mistakes slept
into the second iteration :
 - The first one occurs on line 15, where "(void)GetCpath(drive, dum);"
   is truncated to "(drive, dum);" (the first parenthesis is cut in half)
 - The second one affects the lines 20 to 21, which are replaced by the
   lines 11 to 14. However this is quite useful, because we can read more
   characters here thanks to a different indentation.
  
## The glitch
At some point a "glitch" makes another screen pop up for a few frames.
This is very interesting, because it shows the same code under another
angle. Althought being barely readable, it is possible to fill in some
blanks using to this secondary output.

## Final result
The reconstructed file is actually quite incomplete : on most of the
lines, the first 10 to 20 characters arent' visible. However, we can
guess it deals with images manipulation considering the "LOADPIC" string
line 32 and the &Col_r[i], &Col_g[i] and &Col_b[i] arrays line 41
