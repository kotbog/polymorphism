#include "Shop.h"

Shop::Shop() 
{
	this->Name = "";
}

Shop::~Shop() 
{
}

Shop::Shop(string name) {
	if(!name.empty())
		this->Name = name;
}

void Shop::addShop(ShopItem& item) {
	this->shops.push_back(item);
}
void Shop::checkGood(string name) {
	cout << name;
	for (int i = 0; i < this->shops.size(); i++) {
		if (this->shops[0].isExist(name)) {
			cout << "333" << endl;
		}
	}
}