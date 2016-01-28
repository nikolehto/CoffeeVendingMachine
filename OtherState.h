#ifndef OTHERSTATE_H
#define OTHERSTATE_H

#include "MenuState.h"

class Context;

class OtherState: public MenuState {
	
	public:
		bool choose(Context& con);
		
	private:
		void display();
};



#endif
