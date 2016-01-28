#ifndef EMPTYSTATE_H
#define EMPTYSTATE_H

#include "MenuState.h"

class Context;

class EmptyState: public MenuState {
	
	public:
		bool choose(Context& con);
		
	private:
		void display();
};

#endif
