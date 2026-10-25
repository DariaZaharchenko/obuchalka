#include <iostream>
#include <clocale>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
	system("chcp 65001 > nul");

	const DZaharchenko::MenuItem* current = &DZaharchenko::MAIN;
	do {
		current = current->func(current);
	} while (true);

	return 0;

}
