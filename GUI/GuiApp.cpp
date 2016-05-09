/***************************************************************
 * Name:      GUIwithSplitWindowApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Morgan ()
 * Created:   2016-05-03
 * Copyright: Morgan ()
 * License:
 **************************************************************/

#include "GUIwithSplitWindowApp.h"

//(*AppHeaders
#include "GUIwithSplitWindowMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(GUIwithSplitWindowApp);

bool GUIwithSplitWindowApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	GUIwithSplitWindowFrame* Frame = new GUIwithSplitWindowFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
