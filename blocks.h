//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "$HOME/.local/dot/myscript/redshift_status.sh",					360,		0},
	{" ", "$HOME/.local/dot/myscript/sync_status.sh",					360,		0},
	{" ", "$HOME/.local/dot/myscript/docker_status.sh",					360,		0},
	{" ", "$HOME/.local/dot/myscript/ssid.sh",						15,		0},
	{" ", "$HOME/.local/dot/myscript/soundcard.sh",						0,		12},
	{" ", "$HOME/.local/dot/myscript/light.sh",						0,		10},
	{" ", "$HOME/.local/dot/myscript/battery.sh",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
