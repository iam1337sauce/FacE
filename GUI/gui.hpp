/***************************************************************
 * Name:      FacEMain.h
 * Purpose:   Defines Application Frame
 * Author:    Morgan ()
 * Created:   2016-05-09
 * Copyright: Morgan ()
 * License:
 **************************************************************/

#ifndef FACEMAIN_H
#define FACEMAIN_H

//(*Headers(FacEFrame)
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class FacEFrame: public wxFrame
{
    public:

        FacEFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~FacEFrame();

    private:

        //(*Handlers(FacEFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Select(wxCommandEvent& event);
        void OnButton2Select(wxCommandEvent& event);
        void OnButton3Select(wxCommandEvent& event);

        //*)

        //(*Identifiers(FacEFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_PANEL1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(FacEFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxButton* Button2;
        wxButton* Button3;
        wxStatusBar* StatusBar1;
        //*)
int face;
        DECLARE_EVENT_TABLE()
};

#endif // FACEMAIN_H
