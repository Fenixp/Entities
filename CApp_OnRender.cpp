//==============================================================================
#include "CApp.h"

//==============================================================================
void CApp::OnRender() {
    //--------------------------------------------------------------------------
    // Entities
    //--------------------------------------------------------------------------
    for(int i = 0;i < CEntity::EntityList.size();i++) {
        if(!CEntity::EntityList[i]) continue;

        CEntity::EntityList[i]->OnRender(Surf_Display);
    }
    CArea::AreaControl.OnRender(Surf_Display, CCamera::CameraControl.GetX(), CCamera::CameraControl.GetY());

	SDL_Flip(Surf_Display);
	SDL_FillRect( SDL_GetVideoSurface(), NULL, 0 );
}

//==============================================================================
