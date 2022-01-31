//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "echo 🕉",        0,                      0},
//    {"🎵", "mpc | sed -n 1p",        5,                      0},
    {"", "stat-battery",        5,                      0},
    {"",          "stat-weather",        3600,                   0},
    {"",          "stat-temp",        3600,                   0},
    {"☔",   "stat-rain",           3600,                   0},
    {"",          "stat-moon",           0,                      0},
    {"",          "stat-wifi",           10,                     0},
    {"",          "stat-volume",         0,                     10},
    {"🔆", "xbacklight | awk '{print int($1)}'",  0 ,   11},
	{"💾", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	      2,	  	0},
    {"🖥", "stat-cpu",  2 ,   0},
	{"📅", "stat-timedate",		60,		                0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
