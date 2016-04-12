#ifndef MAINMENU_H
#define MAINMENU_H
#include <SFML/Graphics.hpp>
//#include "MainMenu.cpp"
//Cyber Pong main menu
class MainMenu
{
private:
    int selectedItemIndex;
    sf::Font font;
    static const int Max_Items = 3;
     sf::Text menu[Max_Items];
public:
    MainMenu(int width, int height);
    ~MainMenu();
    void draw(sf::RenderWindow &window);
    void move_up();
    void move_down();

};
#endif // MAINMENU_H
