#include <Windows.h>
HANDLE STDOUTPUTHANDLE;
#define BLUE FOREGROUND_BLUE
#define RED FOREGROUND_RED
#define GREEN FOREGROUND_GREEN
#define fancc(p, c) SetConsoleTextAttribute ( STDOUTPUTHANDLE, c ); std::cout << p; SetConsoleTextAttribute (STDOUTPUTHANDLE, RED | BLUE | GREEN);
#define init_fancc  STDOUTPUTHANDLE=GetStdHandle(STD_OUTPUT_HANDLE);
