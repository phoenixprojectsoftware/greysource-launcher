/*
	This CPP is part of the "Grey Source Launcher." Written by Sabian Roberts (https://github.com/sabian-heatwave) for the video game "CORRIDORS".
	Copyright © 2020 The Phoenix Project.
	The Phoenix Project follows the "Half Life 1 SDK License" https://github.com/valvesoftware/halflife/blob/master/LICENSE
*/
#include <iostream>
#include <windows.h>
using namespace std;

void main() {
	string GREYSOURCEBUILD = "CORR2003";
	string TYPEOFGREYSOURCEBUILD = "Propietary";
	string HALFLIFEBUILD = "1.1.2.2";
	string VALVEEXEDATE = "15:17:55 Jul 24 2019 (8308)";
	string COPYRIGHT = "Copyright © 2020 The Phoenix Project. This program follows the Half-Life 1 SDK License.";
	string GAME = "CORRIDORS";
	string RELEASE = "2020";
	string GAMEDIR = "PhoenixCORRIDORS";

	system("TITLE Grey Source Launcher");
	cout << COPYRIGHT << "\n";
	cout << "USING DIR " << GAMEDIR << "\n";
	cout << "Game: " << GAME << "\n";
	cout << "Release date: " << RELEASE << "\n";
	cout << "hl.exe build: " << HALFLIFEBUILD << "\n";
	cout << "Grey Source build: " << GREYSOURCEBUILD << "\n";
	cout << "Type of GS build: " << TYPEOFGREYSOURCEBUILD << "\n";
	cout << "EXE Date: " << VALVEEXEDATE << "\n";
	int result = system("CORRIDORS\\hl.exe -game PhoenixCORRIDORS");
	string SAFE = "It is now safe to close this window.";
	cout << SAFE << "\n";
	system("pause");
}
