#ifndef __SHOP_H__
#define __SHOP_H__

#include "user.h"
#include "product.h"

struct Shop {

	UserArray users;
	ProductArray products;
	User * loggedInUser;

	void runCommand(char command);

};

Shop newShop();
void deleteShop(Shop & shop);

#endif //!__SHOP_H__
