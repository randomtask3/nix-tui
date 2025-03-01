#include "nixos_menu.hpp"

// Constructor that sets variables to be used by other methods
NixosMenu::NixosMenu(string menu_type){
    nixos_logo = 
                "          __         ____      __ \n"
                "         /  \\        \\   \\    /  \\ \n"
                "         \\   \\        \\   \\  /   / \n"
                "          \\   \\        \\   \\/   / \n"
                "      _____\\   \\________\\      / \n"
                "     /                   \\    /     /\\        ___           __    __                       _______         ________ \n"
                "    /_____________________\\   \\    /  \\      |   \\         |  |  /  \\                     /       \\       /  ____  \\ \n"
                "           /   /           \\   \\  /   /      |    \\        |  |  \\__/                    /  _____  \\     /  /    \\  \\ \n"
                "          /   /             \\   \\/   /       |     \\       |  |   __   ___        ___   /  /     \\  \\   /  /      \\_/ \n"
                " ________/   /               \\  /   /_____   |  |\\  \\      |  |  |  |  \\  \\      /  /  /  /       \\  \\  | | \n"
                "/           /                 \\/          \\  |  | \\  \\     |  |  |  |   \\  \\    /  /   |  |       |  |  \\  \\ \n"
                "\\______    /\\                 /   ________/  |  |  \\  \\    |  |  |  |    \\  \\  /  /    |  |       |  |   \\  \\_____ \n"
                "      /   /  \\               /   /           |  |   \\  \\   |  |  |  |     \\  \\/  /     |  |       |  |    \\_____  \\ \n"
                "     /   /\\   \\             /   /            |  |    \\  \\  |  |  |  |      \\    /      |  |       |  |          \\  \\ \n"
                "    /   /  \\   \\___________/___/_______      |  |     \\  \\ |  |  |  |      /    \\      |  |       |  |           \\  \\ \n"
                "    \\  /    \\   \\                     /      |  |      \\  \\|  |  |  |     /  /\\  \\     \\  \\       /  /   _        | | \n"
                "     \\/     /    \\_________    ______/       |  |       \\     |  |  |    /  /  \\  \\     \\  \\_____/  /   / \\      /  / \n"
                "           /      \\        \\   \\             |  |        \\    |  |  |   /  /    \\  \\     \\         /    \\  \\____/  / \n"
                "          /   /\\   \\        \\   \\            |__|         \\___|  |__|  /__/      \\__\\     \\_______/      \\________/ \n"
                "         /   /  \\   \\        \\   \\ \n"
                "         \\__/    \\___\\        \\__/ \n"
                "\n"
                "=====================================================================================================================\n\n";

    // Update to take an input
    config_path = "/home/nick/NixOS";
    
    if (menu_type == "nixos"){
        menu_text = 
            "NixOS Management Menu:\n\n" 
            "  (1)  -->  nixos-rebuild --flake\n"
            "  (2)  -->  nix-flake-update\n"
            "  (3)  -->  nix-collect-garbage\n"
            "  (4)  -->  Quit\n\n"
            "Enter option from 1 to 4: ";
    }
}

string NixosMenu::get_hostname() {
    
    char hostname[1024];
    gethostname(hostname, 1024);

    return hostname;
}

// Menu for user input to determine shell command run
int NixosMenu::print_menu() {
    int menu_selection;

    system("clear");
    cout << nixos_logo + menu_text;
    
    while (true){
        cin >> menu_selection;
 
        if (menu_selection == 1 || menu_selection == 2 || menu_selection == 3 || menu_selection == 4 ) {
            break;
        } else {
            cout << "Invalid, try again: ";
        }
    }
    return menu_selection;
}

// Rus selected shell command
void NixosMenu::run_command(int menu_selection, string hostname) {
    system("clear");
    string temp;

    switch (menu_selection) {
        case 1:
            temp = "sudo nixos-rebuild switch --flake " + config_path + "#" + hostname;
            system(temp.c_str());
            break;
        case 2:
            temp = "cd " + config_path + ": sudo nix flake update";
            system(temp.c_str());
            break;
        case 3:
            temp = "sudo nix-collect-garbage";
            system(temp.c_str());
            break;
        case 4:
            exit(0);
            break;
    }
}