//==============================================================================
#include "CApp.h"

//==============================================================================
bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    //--------------------------------------------------------------------------
    // Entity 1
    //--------------------------------------------------------------------------
    if(Entity1.OnLoad("./entity1.bmp", 64, 64, 8) == false) {
        return false;
    }

    //--------------------------------------------------------------------------
    // Entity 2
    //--------------------------------------------------------------------------
    if(Entity2.OnLoad("./entity2.bmp", 64, 64, 8) == false) {
        return false;
    }

    Entity2.X = 100;

    CEntity::EntityList.push_back(&Entity1);
    CEntity::EntityList.push_back(&Entity2);

    return true;
}

//==============================================================================
