//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "$HOME/.local/bin/vpn_status.sh",						5,		0},
	{" ", "$HOME/.local/bin/torupdo.sh",						5,		0},
	{" ", "$HOME/.local/bin/ssid.sh",						5,		0},
	{" ", "$HOME/.local/bin/volume.sh",						0,		10},
	{" ", "$HOME/.local/bin/light.sh",						0,		10},
	{" ", "$HOME/.local/bin/battery.sh",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
