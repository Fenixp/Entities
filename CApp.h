//==============================================================================
// SDL Tutorial 1
//==============================================================================
#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL.h>

#include "CAnimation.h"
#include "CEntity.h"
#include "CEvent.h"
#include "CSurface.h"

//==============================================================================
class CApp : public CEvent {
    private:
        bool            Running;

        SDL_Surface*    Surf_Display;

    private:
        CEntity         Entity1;
        CEntity         Entity2;

    public:
        CApp();

        int OnExecute();

    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);

            void OnExit();

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

//==============================================================================

#endif
