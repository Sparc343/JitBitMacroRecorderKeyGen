
#include <iostream>
#include <string>
#include <windows.h>

#include "logger.h"

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void log_error(std::string message)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    std::cout << "!ERROR! ";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |
                                      FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << message << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |
                                      FOREGROUND_BLUE);
}

void log_input(std::string key)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << key << ": ";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |
                                      FOREGROUND_INTENSITY);
}

void log_important_key(std::string key, std::string value)
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << key << ": ";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |
                                      FOREGROUND_INTENSITY);
    std::cout << value << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |
                                      FOREGROUND_BLUE);
}
