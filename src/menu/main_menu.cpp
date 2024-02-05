#include "menu/main_menu.hpp"

menu::MainMenu::MainMenu()
{
	std::cout << "\nMain menu Constructor() called\n";
}

menu::MainMenu::~MainMenu()
{
	std::cout << "Main menu ~Destructor() called\n";
}

void menu::MainMenu::init()
{
	// TODO: Test when this will Fire
	// TODO: Initialize the window and menu systems
	std::cout << "Main menu init() called\n";
}

void menu::MainMenu::update()
{
	// TODO: Check if the user is Moving up or down in the menu
	std::cout << "Main menu update() called\n";

	if (current_option != next_option)
	{
		menu_manager.switch_menu()
	}

}

void menu::MainMenu::draw()
{
	// TODO: Draw the textures as needed.
	std::cout << "Main menu draw() called\n";
}
