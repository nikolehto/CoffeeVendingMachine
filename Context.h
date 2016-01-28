#ifndef CONTEXT_H
#define CONTEXT_H
#include <list>

class MenuState;

	using namespace std;
	
class Context {

	public:
		const static int EMPTY = 1;
		const static int NONEMPTY = 2;
		const static int COFFEE = 3;
		const static int OTHER = 4;
		const static int MAIN = 5;

		Context();
		void makeChoice();
		void changeState(int to);
		
		void addPrice(double price_p);
		double getPrice() const;
		void printPrice() const;
		
		void addDrink(string drink);
		void printAndServeDrinks();
		
	private:
		MenuState *emptyState;
		MenuState *nonemptyState;
		MenuState *coffeeState;
		MenuState *otherState;
		MenuState *currentState;
		MenuState *mainState;
		double price;
		
		list<string> drinks;
};

#endif
