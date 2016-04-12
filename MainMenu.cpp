#include <iostream>
#include "MainMenu.h"

//menu constructor
MainMenu::MainMenu(int width, int height)
{
    if(!font.loadFromFile("fonts/arial.ttf"))
    {
        //Handle font error
    }
    //menu list
    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Green);
    menu[0].setString("Play");
    //divide the width by 2 and height by the max number of items on list
    menu[0].setPosition(sf::Vector2f(width/2, height/(Max_Items + 1) * 1));

    menu[1].setFont(font);
    menu[1].setColor(sf::Color::Green);
    menu[1].setString("Options");
    //divide the width by 2 and height by the max number of items on list
    menu[1].setPosition(sf::Vector2f(width/2, height/(Max_Items + 1) * 2));

    
    menu[2].setFont(font);
    menu[2].setColor(sf::Color::Green);
    menu[2].setString("Exit");
    //divide the width by 2 and height by the max number of items on list
    menu[2].setPosition(sf::Vector2f(width/2, height/(Max_Items + 1) * 3));
}
//menu destructor
MainMenu::~MainMenu()
{
}

//draw main menu list
void MainMenu::draw(sf::RenderWindow &window)
{
    for(int i = 0; i < Max_Items; i++)
    {
	window.draw(menu[i]);
    }
}

			
    
    
    
