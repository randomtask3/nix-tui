#include "nixos_menu.hpp"

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
    
    if (menu_type == "nixos"){
        menu_text = 
            "NixOS Management Menu:\n" 
            "  (1)  -->  nixos-rebuild --flake\n"
            "  (2)  -->  nix-flake-update\n"
            "  (3)  -->  nix-collect-garbage\n"
            "  (4)  -->  Quit\n\n"
            "Enter option from 1 to 4 [1]: ";
    }
}

string NixosMenu::print_menu() {
    bool valid_input = false;
    string input_char;
    
    while (valid_input == false){
        //system("clear");
        cout << nixos_logo + menu_text;
        cin >> input_char;
        //cin.get(input_char);
        cout << input_char << "\n";

        if (input_char == "1" || input_char == "2" || input_char == "3" || input_char == "4" ) {
            //valid_input = true;
            cout << "test1\n";
            cin.ignore();
        } else {
            cout << "test2\n";
            cout << "\n" << "Invalid selection, press Enter to continue\n";  
        }
    }
    return input_char;
}