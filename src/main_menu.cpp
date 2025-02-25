#include "functions.hpp"
#include <iostream>
#include <string>

using namespace std;
string menu_text;
string test;

void printMainMenu() {

    menu_text = 
        "  (1)  -->  nixos-rebuild --flake\n"
        "  (2)  -->  nix-flake-update\n"
        "  (3)  -->  nix-collect-garbage\n"
        "  (4)  -->  Quit\n\n"
        "Enter option from 1 to 4 [1]: ";
    cout << menu_text;

    if (cin.get() == '\n') {
        cout << "enter";
    }
}