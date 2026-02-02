#include <iostream>
#include <Windows.h>
#include "LeaverDynamicLibrary.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;

    Leaver::Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;

    return EXIT_SUCCESS;
}