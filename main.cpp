#include <iostream>
#include "LifeGame.h"
using namespace std;
int main() {
	cout << "Game 'LIFE'. OOP variant." << endl;
	LifeGame g(5, 5);
	g.start_func(1, 2, true);
	g.start_func(1, 3, true);
	g.start_func(3, 4, true);
	//g.start_func(3, 5, true);
	//g.start_func(3, 3, true);

	//g.start_func(2, 2, true);
	//g.start_func(1, 3, true);

	g.go();
	/*g.print();//все в одно объединить
	g.step();
	g.print();
	g.step();
	g.print();
	g.step();
	g.print();
	g.step();*/

	return 0;
}
