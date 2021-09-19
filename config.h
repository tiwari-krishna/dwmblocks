//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" 🕉 ", "battery",        5,                      0},
    {"",          "weather",        3600,                   0},
    {" ☔ ",   "rain",           3600,                   0},
    {"",          "moon",           0,                      0},
    {"",          "wifi",           10,                     0},
    {"",          "volume",         0,                      10 },
//	{" 💾 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	      2,	  	0},
//    {" 🖥 ", "cpu",  2 ,   0},
	{" 📅 ", "timedate",		60,		                0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
