#ifndef NONEMPTYSTATE_H
#define NONEMPTYSTATE_H

#include "MenuState.h"

class Context;

class NonemptyState: public MenuState {
	
	public:
		bool choose(Context& con);
		
	private:
		void display();
};

#endif
