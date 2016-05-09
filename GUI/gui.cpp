/***************************************************************
 * Name:      FacEMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Morgan ()
 * Created:   2016-05-09
 * Copyright: Morgan ()
 * License:
 **************************************************************/

#include "FacEMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(FacEFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(FacEFrame)
const long FacEFrame::ID_BUTTON1 = wxNewId();
const long FacEFrame::ID_BUTTON2 = wxNewId();
const long FacEFrame::ID_BUTTON3 = wxNewId();
const long FacEFrame::ID_PANEL1 = wxNewId();
const long FacEFrame::ID_MENUITEM1 = wxNewId();
const long FacEFrame::idMenuAbout = wxNewId();
const long FacEFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FacEFrame,wxFrame)
    //(*EventTable(FacEFrame)
    //*)
END_EVENT_TABLE()

FacEFrame::FacEFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(FacEFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(152,96), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Career"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_LEFT|wxALIGN_BOTTOM, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Family"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Relationships"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer1->Add(Button3, 1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    Panel1->SetSizer(BoxSizer1);
    BoxSizer1->Fit(Panel1);
    BoxSizer1->SetSizeHints(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

 /*   Button11 = new wxButton(Panel1, ID_BUTTON11, _("Happy about current occupation"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button11->Hide();
    BoxSizer1->Add(Button11, 1, wxALL|wxALIGN_LEFT|wxALIGN_BOTTOM, 5);
    Button22= new wxButton(Panel1, ID_BUTTON22, _("Happy about new job"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button22->Hide();
    BoxSizer1->Add(Button22, 1, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5);

*/
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&FacEFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&FacEFrame::OnAbout);
    //*)
}

FacEFrame::~FacEFrame()
{
    //(*Destroy(FacEFrame)
    //*)
}

void FacEFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void FacEFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void FacEFrame::OnButton1Select(wxCommandEvent& event)
{
    if (face=0){ //0 is correlating to happy
        Button1 = new wxButton(Panel1, ID_BUTTON1, _("Happy with current occupation"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
        Button2 = new wxButton(Panel1, ID_BUTTON2, _("Happy about new job"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
        Button3 = new wxButton(Panel1, ID_BUTTON3, _("Happy about future career"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    }
    if (face=1){ //1 is disgust
        Button1 = new wxButton(Panel1, ID_BUTTON1, _(" with current occupation"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
        Button2 = new wxButton(Panel1, ID_BUTTON2, _(" about new job"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
        Button3 = new wxButton(Panel1, ID_BUTTON3, _(" about future career"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    }
    if (face=2){ //1 is sad
        Button1 = new wxButton(Panel1, ID_BUTTON1, _(" with current occupation"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
        Button2 = new wxButton(Panel1, ID_BUTTON2, _(" about new job"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
        Button3 = new wxButton(Panel1, ID_BUTTON3, _(" about future career"), wxPoint(0,0), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    }
    else {
        std::string str = "Make a selection with facial expression";
    }

}
