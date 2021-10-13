#include <iostream>
using namespace std;

struct IceCream
{
	string name, flavour, size;
	float basePrice, onePrice, twoPrice, threePrice;
};

//function prototype
void line(int n);

int main() 
{
	IceCream ice[3];
	/*ice[3].size = "One Scoop", "Two Scoops", "Three Scoops";*/

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter icecream name: ";
		cin >> ice[i].name;
		cout << "Enter icecream flavour: ";
		cin >> ice[i].flavour;
		cout << "Enter icecream base price: ";
		cin >> ice[i].basePrice;

		ice[i].onePrice = ice[i].basePrice;
		ice[i].twoPrice = ice[i].basePrice + 2;
		ice[i].threePrice = ice[i].basePrice + 3.5;
		line(30);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nPricelist for " << ice[i].name << ", flavour " << ice[i].flavour << " is $" << ice[i].basePrice << " for one scoop, $" << ice[i].twoPrice << " for two scoops, and $" << ice[i].threePrice << " for three scoops.\n";
		line(30);
	}

}

void line(int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "-";
	}
	cout << "\n";
}