//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "song_Info",						5,		0},
	{" ", "vpn",						5,		0},
	{" ", "ssid",						5,		0},
	{" ", "volume",						0,		10},
	{" ", "light.sh",						0,		10},
	{" ", "battery",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
