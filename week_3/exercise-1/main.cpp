#include <iostream>
#include <cstring>

#include "header/shop.h"

int main(void) {

	Shop shop = newShop();

	User admin;
	strcpy(admin.name, "admin");
	strcpy(admin.password, "admin");

	admin.isAdmin = true;

	shop.users.add(admin);

	char command;
	while (true) {
		std::cin >> command;
		std::cin.ignore();
		shop.runCommand(command);
	}

	deleteShop(shop);

	return 0;
}
