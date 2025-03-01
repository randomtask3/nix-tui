#ifndef NIXOS_MENU_H
#define NIXOS_MENU_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

class NixosMenu {
    string nixos_logo;
    string menu_text;
    string config_path;

public:
    NixosMenu(string menu_type);
    string get_hostname();
    int print_menu();
    void run_command(int menu_selection, string hostname);
};

#endif //NIXOS_MENU_H