# jwine

Executes an .exe executable of the same name in the same folder with LC_ALL=ja_JP.UTF-8 through wine.

This essentially does the same thing as `alias jwine='LC_ALL=ja_JP.UTF-8 wine'` and then `jwine Game.exe`, but it is an executable that can be dropped into any folder. If your Windows executable is named `Game.exe`, then rename the Linux executable to `Game`. Double click on it and enjoy! The program expects wine to be installed into `/usr/bin/wine`.

I've poured my blood and sweat into this project!
