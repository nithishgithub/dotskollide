/*
  Copyright (C) 2015 Othon Insauste
  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.
 
  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:
  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  Othon Insauste othonic@gmail.com
*/
#ifndef TGAMESTATEMAINMENU_CLASS
#define TGAMESTATEMAINMENU_CLASS

#include "GameDefines.h"
#include "GGameState.h"
#include "menu/GRocketEventHandler.h"
#include "TonatiuhDefines.h"


class TGameStateMainMenu: public GGameState ,
					GRocketEventHandler
{



private:

public:
	
	TGameStateMainMenu(void);
	virtual ~TGameStateMainMenu(void);
	virtual int VGameStateId();
	virtual void VInit() ;
	virtual void VFinish() ;
	virtual void VUpdate(int deltaMs);
	virtual void VRender(irr::IrrlichtDevice* device);
	virtual void OnKeyDown(irr::EKEY_CODE keycode);
	virtual void OnKeyUp(irr::EKEY_CODE keycode);
	virtual void OnMouseDown(int x, int y);
	virtual void OnMouseUp(int x, int y);
	virtual void OnMouseMove(int x, int y);
	virtual void ProcessRocketEvent(const Rocket::Core::String& value);
	virtual void VOnGetFocus(int param);
	virtual void VOnLostFocus();

	
};


#endif