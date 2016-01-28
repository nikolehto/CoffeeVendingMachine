#ifndef MENUSTATE_H
#define MENUSTATE_H

class Context;

class MenuState {

	public:
		virtual bool choose(Context& con)=0;
};

#endif
