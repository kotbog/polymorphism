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
	ShopItem::incrCounter();
}
void Shop::showAll() {
	cout << "Number of shops: " << ShopItem::getShopsCounter() << endl;
	for (int i = 0; i < shops.size(); i++) {
		cout << shops[i];
	}
}
ShopItem* Shop::searchObj(string street) {
	for (int i = 0; i < this->shops.size(); i++) {
		if (this->shops[i].getStreet() == street) {
			return &(this->shops[i]);
		}
	}
	return NULL;
}
void Shop::checkGood(string name) {
	for (int i = 0; i < this->shops.size(); i++) {
		if (this->shops[i].isExist(name)) {
			cout << this->shops[i];
		}
	}
}
void Shop::deleteShop(ShopItem* item) {
	for (int i = 0; i < this->shops.size(); i++) {
		if (shops[i] == *item) {
			shops.erase(shops.begin() + i);
			ShopItem::decrCounter();
			return;
		}
	}
}