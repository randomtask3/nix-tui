#include "nixos_menu.hpp"

int main(int argc, char **argv) {

    system("clear");
    NixosMenu nixos_menu("nixos"); 

    nixos_menu.print_menu();
    
    return 0;
}