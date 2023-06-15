#include <iostream>

using namespace std;

// Aggregation

// And the monoblock contains all the components and it is 
// independent of the case, everything that it needs to work is just a keyboard and a mouse, etc.

class Monoblock
{
private:
	char name2[30];
	char monitor2[30];
	char mouse2[30];
	char keyboard2[30];
	char earphone2[30];
	char motherboard2[30];
	char videoCard2[30];
	char ram2[30];
	char powerUnit2[30];
public:

	Monoblock(
		const char name2[],
		const char monitor2[],
		const char mouse2[],
		const char keyboard2[],
		const char earphone2[],
		const char motherboard2[],
		const char videoCard2[],
		const char ram2[],
		const char powerUnit2[])
	{
		strcpy_s(this->name2, name2);
		strcpy_s(this->monitor2, monitor2);
		strcpy_s(this->mouse2, mouse2);
		strcpy_s(this->keyboard2, keyboard2);
		strcpy_s(this->earphone2, earphone2);
		strcpy_s(this->motherboard2, motherboard2);
		strcpy_s(this->videoCard2, videoCard2);
		strcpy_s(this->ram2, ram2);
		strcpy_s(this->powerUnit2, powerUnit2);
	}

	Monoblock()
	{

	}

	void info()
	{
		cout << this->name2 << endl;
		cout << this->monitor2 << endl;
		cout << this->mouse2 << endl;
		cout << this->keyboard2 << endl;
		cout << this->earphone2 << endl;
		cout << this->motherboard2 << endl;
		cout << this->videoCard2 << endl;
		cout << this->ram2 << endl;
		cout << this->powerUnit2 << endl;
	}
};

// Composition

// The computer cannot start without the components that are in the case; 
// it depends on this; there will be no case with components - it will not turn on

class Case
{
private:
	char motherboard[30];
	char videoCard[30];
	char ram[30];
	char powerUnit[30];

public:
	Case(const char motherboard[],
		const char videoCard[],
		const char ram[],
		const char powerUnit[])
	{
		strcpy_s(this->motherboard, motherboard);
		strcpy_s(this->videoCard, videoCard);
		strcpy_s(this->ram, ram);
		strcpy_s(this->powerUnit, powerUnit);
	}

	Case()
	{

	}

	void info1()
	{
		cout << "Motherboard: " << this->motherboard << endl;
		cout << "Videocard:" << this->videoCard << endl;
		cout << "RAM:" << this->ram << endl;
		cout << "Powerutil:" << this->powerUnit << endl;
		cout << endl;
	}
};

class Ñomputer
{
private:
	char name[30];
	char monitor[30];
	char mouse[30];
	char keyboard[30];
	char earphone[30];
	Case my_comp;
public:
	Ñomputer(
		const char name[],
		const char monitor[],
		const char mouse[],
		const char keyboard[],
		const char earphone[],
		const char motherboard[],
		const char videoCard[],
		const char ram[],
		const char powerUnit[])
	{
		strcpy_s(this->name, name);
		strcpy_s(this->monitor, monitor);
		strcpy_s(this->mouse, mouse);
		strcpy_s(this->keyboard, keyboard);
		strcpy_s(this->earphone, earphone);
		my_comp = Case(motherboard, videoCard, ram, powerUnit);
	}

	Ñomputer()
	{

	}

	~Ñomputer()
	{
		cout << "Computer: " << name << "was deleted!" << endl;
	}

	void info2()
	{
		cout << "Name comp: " << name << endl;
		cout << "Monitor: " << monitor << endl;
		cout << "Mouse: " << mouse << endl;
		cout << "Keyboard: " << keyboard << endl;
		cout << "Earphone: " << earphone << endl;
		cout << endl;
		my_comp.info1();
	}
};


int main()
{
	/*Ñomputer my_c1("Comp1",
		"Monitor HP M24fwa FHD",
		"Viper V2 Pro",
		"Red Dragon",
		"Hyper X", "ATX12v",
		"GeForce RTX 4090",
		"32 gb",
		"Vinga 400W");


	my_c1.info2();*/

	Monoblock mon1(
		"Comp2",
		"Monitor HP M24fwa FHD",
		"Viper V2 Pro",
		"Red Dragon",
		"Hyper X", "ATX12v",
		"GeForce RTX 4090",
		"32 gb",
		"Vinga 400W");

	mon1.info();
}