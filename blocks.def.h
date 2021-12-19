static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "~/.local/bin/statusbar/pkgs", 60, 0},
    {"", "~/.local/bin/statusbar/ram", 5, 0},
    {"", "~/.local/bin/statusbar/battery", 5, 0},
    {"", "~/.local/bin/statusbar/time", 0, 0},
    {"", "~/.local/bin/statusbar/date", 60, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
