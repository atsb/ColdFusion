# ColdFusion!
[![ColdFusion! Icon](https://github.com/atsb/ColdFusion/blob/master/src/coldfusion_icon.png)](https://github.com/atsb/ColdFusion)

Original Fusion webpage: http://s91291220.onlinehome.us//doom/fusion.htm

# what is it
ColdFusion is a doom source port taken from the original Fusion source port by David Wood.  Its goal is to be historically accurate to Fusion while running on modern systems.

# what works
Everything :)

# building
Use the appropriate makefile or project file(s) for your system (only 64bit is supported):

macOS, BSD, GNU/Linux, Unix - Use the CMake file provided.

For Windows - use the Visual Studio project files.

# how to get it
In the Releases tab, there is a release binary which is a 'download and play' zip.  It does NOT include any wads, but if you have the full game, then you just need to copy your wad and play.  If you want the demo, find 'doom1.wad' on the net, it's publicly available under shareware.

# where is the data?

1. Transmaps are saved (for UNIX) in HOME as a hidden file.  On Windows, they are saved in the location of the binary as a non-hidden file.
2. Config files (.cfg) are saved (for UNIX) in HOME (.config/coldfusion.cfg).  MacOS places them in ~/Library/Application Support/coldfusion.cfg and Windows has them in the same location as the binary.
3. WAD files are to always be placed in the same location as the binary, for all platforms.
4. Save games (.dsg) are saved in HOME for both UNIX and MacOS as a hidden file (.coldfusion_savX.dsg).  For Windows they are saved in the same location as the binary as a non-hidden file.

# accessibility

ColdFusion 1.01 supports those who cannot tolerate flickering lights, strobing and other harsh lighting effects.
Makesfiles and Projects have 'acc' in the name which will build with -DACCESSIBILITY which removes the following:
1. Flickering lights, strobing effects, slow glow and slow flickers are removed
2. Chaingun animated sprite when firing is removed

============================

ORIGINAL FUSION README BELOW

============================

// This is the Fusion Release, v1.0 copyright David Gary Wood 1999
// Assorted bits of documentation and code copyright Len Pitre 2002

8/31/2002

L. Pitre: Actually got up the incentive to do a release. It's as done
as it's going to get. How to use it: Put it in your Doom directory,
in general it's going to work just like Boom or MBF. Indeed, you could
rename the EXE to boom.exe or mbf.exe and batch files/editors/Windows
wouldn't even notice. (The odds of Fusion not working on Boom-friendly
system is about 1/1000, at a guess.)

Demos of the special effects available, like the low-grav linedef and
the new codepointers, in textdemo.zip 

For more info on this release, please visit
http://archonrealm.tripod.ca/fusion.htm 

============================

Thanks!

Enjoy it :)
