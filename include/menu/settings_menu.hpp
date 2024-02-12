#pragma once

#include <iostream>

#include "core/menu_manager.hpp"
#include "menu/i_menu.hpp"
#include "menu/main_menu.hpp"

namespace menu
{
	class SettingsMenu : public menu::IMenu
	{
	public:
		SettingsMenu();
		~SettingsMenu();

		void init() override;
		void update(MenuManager& menu_manager) override;
		void draw() override;
	};
}