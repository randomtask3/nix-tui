#include "main.hpp"

int main(int argc, char **argv) {

    NixosMenu nixos_menu("nixos"); 

    string test = nixos_menu.print_menu();
    
    return 0;
}