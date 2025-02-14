DOS-Sier
========

Struggling to adapt yourself in Unix systems? Came from Windows and now you complain that it is not the chaos it was before?<br>
Then your problems are resolved! With <b>DOS-Sier</b> you can enter a wrong path and it will automatically detect the correct for you.

Building
--------

You can do this with a one line command, but it is resumed as a `make` command.<br>
The manual way, however, is:
```shell
git submodule update
$CC lib/fcaseopen/fcaseopen.c main.c -I lib/fcaseopen -o dos-sier
```

When automatically building, the binary will be provided inside `bin` folder.<br>
It can easily be installed by moving it to a `$PATH` directory, such as:
```shell
su -c "mv ./bin/dos-sier /usr/bin
```

Why?
----

It all started when seeing this meme in a Linux forum:
<p align="center">
    <a href="/.media/screenshot/dos-sier_meme_reason.png">
        <img src="/.media/screenshot/dos-sier_meme_reason.png" width="256" title="Meme reason">
    </a>
</p>

So I have decided that it would be fun to make a "simple" script for it, as it works:
<p align="center">
    <a href="/.media/screenshot/dos-sier_example_1.jpg">
        <img src="/.media/screenshot/dos-sier_example_1.jpg" width="192" title="DOS-Sier CD example">
    </a>
</p>

Well, jokes aside, this is just a demonstration of the [fcaseopen](https://github.com/SimplyCEO/fcaseopen) application (written by Keith Bauer, adapted by SimplyCEO).<br>
It's logic is mainly used in the `OpenGTA` engine to locate the directories of given game files.

