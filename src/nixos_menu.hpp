#ifndef NIXOS_MENU_H
#define NIXOS_MENU_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class NixosMenu {
    string nixos_logo;
    string menu_text;

    public:
        NixosMenu(string menu_type);
        void print_menu();
};

void printNixos();
void printMainMenu();

#endif //NIXOS_MENU_H