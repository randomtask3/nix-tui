#include "main.hpp"

int main(int argc, char **argv) {
    string host_name;
    int menu_selection;

    NixosMenu nixos_menu("nixos");

    host_name = nixos_menu.get_hostname();
    while (true) {
        menu_selection = nixos_menu.print_menu();
        nixos_menu.run_command(menu_selection, host_name);

        cout << "\n" << "Press ENTER to return to menu";
        cin.ignore();cin.ignore();
    } 

    return 0;
}