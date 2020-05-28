#pragma once
#include <iostream>
#include "Good.h"
#include <list>

using namespace std;
/*
struct Item
{
	Good* item;
	Item* next; // �������� �� ��������� �������
};
*/


class ShopItem
{
public:
	ShopItem();
	~ShopItem();
	ShopItem(string);
	void addGood(Good* item); // ������ �����
	void showGoods(); // �������� ������
	void DeleteItem(string data);
	void deleteList(); // �������� ���� ������
	//Item* operator[] (string name);
	float totalPrice();
	bool isExist(string name);
	string getStreet();
	friend ostream& operator << (ostream&, ShopItem&);
	ShopItem& operator= (const ShopItem& str);
	bool operator == (const ShopItem& item);
	ShopItem& operator - (string name);
	static int getShopsCounter();
	static int decrCounter();
private:
	string street;
	// Item* first;
	list<Good*> lst;
	list<Good*>::iterator pLst;
	int goodsCounter;
	static int allShopsCounter;
};

