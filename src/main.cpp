using namespace std;
//static struct winsize term_size;

//static void get_terminal_size(){
    //winsize term_size;
//    ioctl(STDOUT_FILENO, TIOCGWINSZ, &term_size);
//}
//get_terminal_size();

int main(int argc, char **argv) {
    // std::cout << "Hello World \n"; // standard C++ ouput
    
    //get_terminal_size();
    struct winsize term_size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &term_size);

    initscr();
    
    WINDOW * main_window = newwin(term_size.ws_row,term_size.ws_col-1,0,1);
    refresh();

    box(main_window,0,0);
    
    mvwprintw(main_window,0,1,"Label");
    mvwprintw(main_window,1,1,"Hello World!");
    
    wrefresh(main_window); // Refreshes the screen to display output
    getch();   // Waits for user input
    endwin(); /* Closes the terminal session*/
    return 0;
}