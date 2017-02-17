#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

void openChrome(char *url){
	char site[200] = "\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\" ";
	strcat(site, url);
	system(site);
	//int check = MessageBox(0,"Opening Chrome\n","Welcome Message",0);
	//printf("%d",check);
}

void openDiscord(void){
	system("\"C:\\Users\\Rou\\AppData\\Local\\Discord\\Update.exe --processStart Discord.exe\"");
}

void openOverwatch(void){
	system("\"C:\\Program Files (x86)\\Overwatch\\Overwatch Launcher.exe\"");
}

void openTelegram(void){
	system("\"C:\\Users\\Rou\\AppData\\Roaming\\Telegram Desktop\\Telegram.exe\"");
}
