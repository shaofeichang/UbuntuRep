#ifndef PRINTF_C_H__
#define PRINTF_C_H__

#include <windows.h>
#include <stdio.h>
#define fg_blue			FOREGROUND_BLUE
#define fg_red			FOREGROUND_RED
#define fg_green		FOREGROUND_GREEN
#define fg_intensity	FOREGROUND_INTENSITY
void set_std_color(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);;
	SetConsoleTextAttribute(hConsole, color);
}
void set_std_color_light(int color) {
	set_std_color(color | FOREGROUND_INTENSITY);
}

#define printfc(color,m,...); \
	set_std_color_light(color); \
	printf(m, __VA_ARGS__); \
	set_std_color(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // default color

#endif