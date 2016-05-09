/***************************************************************
 * Name:      GUIwithSplitWindowMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Morgan ()
 * Created:   2016-05-03
 * Copyright: Morgan ()
 * License:
 **************************************************************/

#include "GUIwithSplitWindowMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(GUIwithSplitWindowFrame)
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

//(*IdInit(GUIwithSplitWindowFrame)
const long GUIwithSplitWindowFrame::ID_PANEL1 = wxNewId();
const long GUIwithSplitWindowFrame::ID_SPLITTERWINDOW1 = wxNewId();
const long GUIwithSplitWindowFrame::idMenuQuit = wxNewId();
const long GUIwithSplitWindowFrame::idMenuAbout = wxNewId();
const long GUIwithSplitWindowFrame::HungerHappy = wxNewId();
const long GUIwithSplitWindowFrame::ThirstHappy = wxNewId();
const long GUIwithSplitWindowFrame::PainHappy = wxNewId();
const long GUIwithSplitWindowFrame::TiredHappy = wxNewId();
const long GUIwithSplitWindowFrame::PhysicalHappy = wxNewId();
const long GUIwithSplitWindowFrame::HungerSad = wxNewId();
const long GUIwithSplitWindowFrame::ThirstSad = wxNewId();
const long GUIwithSplitWindowFrame::PainSad = wxNewId();
const long GUIwithSplitWindowFrame::TiredSad = wxNewId();
const long GUIwithSplitWindowFrame::PhysicalSad = wxNewId();
const long GUIwithSplitWindowFrame::HungerDisgust = wxNewId();
const long GUIwithSplitWindowFrame::ThirstDisgust = wxNewId();
const long GUIwithSplitWindowFrame::PainDisgust = wxNewId();
const long GUIwithSplitWindowFrame::TiredDisgust = wxNewId();
const long GUIwithSplitWindowFrame::PhysicalDisgust = wxNewId();
const long GUIwithSplitWindowFrame::PhysicalSubject = wxNewId();
const long GUIwithSplitWindowFrame::WalkHappy = wxNewId();
const long GUIwithSplitWindowFrame::MovieHappy = wxNewId();
const long GUIwithSplitWindowFrame::ReadHappy = wxNewId();
const long GUIwithSplitWindowFrame::GetItOnHappy = wxNewId();
const long GUIwithSplitWindowFrame::ActivityHappy = wxNewId();
const long GUIwithSplitWindowFrame::WalkSad = wxNewId();
const long GUIwithSplitWindowFrame::MovieSad = wxNewId();
const long GUIwithSplitWindowFrame::ReadSad = wxNewId();
const long GUIwithSplitWindowFrame::GetItOnSad = wxNewId();
const long GUIwithSplitWindowFrame::ActivitySad = wxNewId();
const long GUIwithSplitWindowFrame::WalkDisgust = wxNewId();
const long GUIwithSplitWindowFrame::MovieDisgust = wxNewId();
const long GUIwithSplitWindowFrame::ReadDisgust = wxNewId();
const long GUIwithSplitWindowFrame::GetItOnDisgust = wxNewId();
const long GUIwithSplitWindowFrame::ActivityDisgust = wxNewId();
const long GUIwithSplitWindowFrame::ActivitySubject = wxNewId();
const long GUIwithSplitWindowFrame::FamilyHappy = wxNewId();
const long GUIwithSplitWindowFrame::FriendHappy = wxNewId();
const long GUIwithSplitWindowFrame::SignificantOtherHappy = wxNewId();
const long GUIwithSplitWindowFrame::PersonHereHappy = wxNewId();
const long GUIwithSplitWindowFrame::RelationshipHappy = wxNewId();
const long GUIwithSplitWindowFrame::FamilySad = wxNewId();
const long GUIwithSplitWindowFrame::FriendSad = wxNewId();
const long GUIwithSplitWindowFrame::SignificantOtherSad = wxNewId();
const long GUIwithSplitWindowFrame::PersonHereSad = wxNewId();
const long GUIwithSplitWindowFrame::RelationshipSad = wxNewId();
const long GUIwithSplitWindowFrame::FamilyDisgust = wxNewId();
const long GUIwithSplitWindowFrame::FriendDisgust = wxNewId();
const long GUIwithSplitWindowFrame::SignificantOtherDisgust = wxNewId();
const long GUIwithSplitWindowFrame::PersonHereDisgust = wxNewId();
const long GUIwithSplitWindowFrame::RelationshipDisgust = wxNewId();
const long GUIwithSplitWindowFrame::RelationshipSubject = wxNewId();
const long GUIwithSplitWindowFrame::MusicSubject = wxNewId();
const long GUIwithSplitWindowFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GUIwithSplitWindowFrame,wxFrame)
    //(*EventTable(GUIwithSplitWindowFrame)
    //*)
END_EVENT_TABLE()

GUIwithSplitWindowFrame::GUIwithSplitWindowFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(GUIwithSplitWindowFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1072,450));
    SplitterWindow1 = new wxSplitterWindow(this, ID_SPLITTERWINDOW1, wxPoint(80,80), wxDefaultSize, wxSP_3D, _T("ID_SPLITTERWINDOW1"));
    SplitterWindow1->SetMinSize(wxSize(20,20));
    SplitterWindow1->SetMinimumPaneSize(20);
    SplitterWindow1->SetSashGravity(0.9);
    Panel1 = new wxPanel(SplitterWindow1, ID_PANEL1, wxPoint(0,1), wxSize(850,449), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    SplitterWindow1->Initialize(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    Menu3 = new wxMenu();
    MenuItem3 = new wxMenu();
    MenuItem4 = new wxMenu();
    MenuItem5 = new wxMenuItem(MenuItem4, HungerHappy, _("Hunger"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem5);
    MenuItem6 = new wxMenuItem(MenuItem4, ThirstHappy, _("Thirst"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem6);
    MenuItem7 = new wxMenuItem(MenuItem4, PainHappy, _("Pain"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem7);
    MenuItem8 = new wxMenuItem(MenuItem4, TiredHappy, _("Tired"), wxEmptyString, wxITEM_NORMAL);
    MenuItem4->Append(MenuItem8);
    MenuItem3->Append(PhysicalHappy, _("Happy"), MenuItem4, wxEmptyString);
    MenuItem9 = new wxMenu();
    MenuItem10 = new wxMenuItem(MenuItem9, HungerSad, _("Hunger"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->Append(MenuItem10);
    MenuItem11 = new wxMenuItem(MenuItem9, ThirstSad, _("Thirst"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->Append(MenuItem11);
    MenuItem12 = new wxMenuItem(MenuItem9, PainSad, _("Pain"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->Append(MenuItem12);
    MenuItem13 = new wxMenuItem(MenuItem9, TiredSad, _("Tired"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->Append(MenuItem13);
    MenuItem3->Append(PhysicalSad, _("Sad"), MenuItem9, wxEmptyString);
    MenuItem14 = new wxMenu();
    MenuItem15 = new wxMenuItem(MenuItem14, HungerDisgust, _("Hunger"), wxEmptyString, wxITEM_NORMAL);
    MenuItem14->Append(MenuItem15);
    MenuItem16 = new wxMenuItem(MenuItem14, ThirstDisgust, _("Thirst"), wxEmptyString, wxITEM_NORMAL);
    MenuItem14->Append(MenuItem16);
    MenuItem17 = new wxMenuItem(MenuItem14, PainDisgust, _("Pain"), wxEmptyString, wxITEM_NORMAL);
    MenuItem14->Append(MenuItem17);
    MenuItem18 = new wxMenuItem(MenuItem14, TiredDisgust, _("Tired"), wxEmptyString, wxITEM_NORMAL);
    MenuItem14->Append(MenuItem18);
    MenuItem3->Append(PhysicalDisgust, _("Disgust"), MenuItem14, wxEmptyString);
    Menu3->Append(PhysicalSubject, _("Physcial"), MenuItem3, wxEmptyString);
    MenuItem19 = new wxMenu();
    MenuItem21 = new wxMenu();
    MenuItem22 = new wxMenuItem(MenuItem21, WalkHappy, _("Walk"), wxEmptyString, wxITEM_NORMAL);
    MenuItem21->Append(MenuItem22);
    MenuItem23 = new wxMenuItem(MenuItem21, MovieHappy, _("Movie"), wxEmptyString, wxITEM_NORMAL);
    MenuItem21->Append(MenuItem23);
    MenuItem24 = new wxMenuItem(MenuItem21, ReadHappy, _("Read"), wxEmptyString, wxITEM_NORMAL);
    MenuItem21->Append(MenuItem24);
    MenuItem25 = new wxMenuItem(MenuItem21, GetItOnHappy, _("Get It On"), wxEmptyString, wxITEM_NORMAL);
    MenuItem21->Append(MenuItem25);
    MenuItem19->Append(ActivityHappy, _("Happy"), MenuItem21, wxEmptyString);
    MenuItem26 = new wxMenu();
    MenuItem27 = new wxMenuItem(MenuItem26, WalkSad, _("Walk"), wxEmptyString, wxITEM_NORMAL);
    MenuItem26->Append(MenuItem27);
    MenuItem28 = new wxMenuItem(MenuItem26, MovieSad, _("Movie"), wxEmptyString, wxITEM_NORMAL);
    MenuItem26->Append(MenuItem28);
    MenuItem29 = new wxMenuItem(MenuItem26, ReadSad, _("Read"), wxEmptyString, wxITEM_NORMAL);
    MenuItem26->Append(MenuItem29);
    MenuItem30 = new wxMenuItem(MenuItem26, GetItOnSad, _("Get It On"), wxEmptyString, wxITEM_NORMAL);
    MenuItem26->Append(MenuItem30);
    MenuItem19->Append(ActivitySad, _("Sad"), MenuItem26, wxEmptyString);
    MenuItem31 = new wxMenu();
    MenuItem32 = new wxMenuItem(MenuItem31, WalkDisgust, _("Walk"), wxEmptyString, wxITEM_NORMAL);
    MenuItem31->Append(MenuItem32);
    MenuItem33 = new wxMenuItem(MenuItem31, MovieDisgust, _("Movie"), wxEmptyString, wxITEM_NORMAL);
    MenuItem31->Append(MenuItem33);
    MenuItem34 = new wxMenuItem(MenuItem31, ReadDisgust, _("Read"), wxEmptyString, wxITEM_NORMAL);
    MenuItem31->Append(MenuItem34);
    MenuItem35 = new wxMenuItem(MenuItem31, GetItOnDisgust, _("Get It On"), wxEmptyString, wxITEM_NORMAL);
    MenuItem31->Append(MenuItem35);
    MenuItem19->Append(ActivityDisgust, _("Disgust"), MenuItem31, wxEmptyString);
    Menu3->Append(ActivitySubject, _("Activities"), MenuItem19, wxEmptyString);
    MenuItem20 = new wxMenu();
    MenuItem37 = new wxMenu();
    MenuItem40 = new wxMenuItem(MenuItem37, FamilyHappy, _("Family"), wxEmptyString, wxITEM_NORMAL);
    MenuItem37->Append(MenuItem40);
    MenuItem41 = new wxMenuItem(MenuItem37, FriendHappy, _("Friend"), wxEmptyString, wxITEM_NORMAL);
    MenuItem37->Append(MenuItem41);
    MenuItem42 = new wxMenuItem(MenuItem37, SignificantOtherHappy, _("Significant Other"), wxEmptyString, wxITEM_NORMAL);
    MenuItem37->Append(MenuItem42);
    MenuItem43 = new wxMenuItem(MenuItem37, PersonHereHappy, _("Person Here (in room)"), wxEmptyString, wxITEM_NORMAL);
    MenuItem37->Append(MenuItem43);
    MenuItem20->Append(RelationshipHappy, _("Happy"), MenuItem37, wxEmptyString);
    MenuItem38 = new wxMenu();
    MenuItem44 = new wxMenuItem(MenuItem38, FamilySad, _("Family"), wxEmptyString, wxITEM_NORMAL);
    MenuItem38->Append(MenuItem44);
    MenuItem45 = new wxMenuItem(MenuItem38, FriendSad, _("Friend"), wxEmptyString, wxITEM_NORMAL);
    MenuItem38->Append(MenuItem45);
    MenuItem46 = new wxMenuItem(MenuItem38, SignificantOtherSad, _("Significant Other"), wxEmptyString, wxITEM_NORMAL);
    MenuItem38->Append(MenuItem46);
    MenuItem47 = new wxMenuItem(MenuItem38, PersonHereSad, _("Person Here (in room)"), wxEmptyString, wxITEM_NORMAL);
    MenuItem38->Append(MenuItem47);
    MenuItem20->Append(RelationshipSad, _("Sad"), MenuItem38, wxEmptyString);
    MenuItem39 = new wxMenu();
    MenuItem48 = new wxMenuItem(MenuItem39, FamilyDisgust, _("Family"), wxEmptyString, wxITEM_NORMAL);
    MenuItem39->Append(MenuItem48);
    MenuItem49 = new wxMenuItem(MenuItem39, FriendDisgust, _("Friend"), wxEmptyString, wxITEM_NORMAL);
    MenuItem39->Append(MenuItem49);
    MenuItem50 = new wxMenuItem(MenuItem39, SignificantOtherDisgust, _("Significant Other"), wxEmptyString, wxITEM_NORMAL);
    MenuItem39->Append(MenuItem50);
    MenuItem51 = new wxMenuItem(MenuItem39, PersonHereDisgust, _("Person Here (in room)"), wxEmptyString, wxITEM_NORMAL);
    MenuItem39->Append(MenuItem51);
    MenuItem20->Append(RelationshipDisgust, _("Disgust"), MenuItem39, wxEmptyString);
    Menu3->Append(RelationshipSubject, _("Relationships"), MenuItem20, wxEmptyString);
    MenuItem36 = new wxMenuItem(Menu3, MusicSubject, _("Music"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem36);
    MenuBar1->Append(Menu3, _("Speech Output"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUIwithSplitWindowFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUIwithSplitWindowFrame::OnAbout);
    //*)
}

GUIwithSplitWindowFrame::~GUIwithSplitWindowFrame()
{
    //(*Destroy(GUIwithSplitWindowFrame)
    //*)
}

void GUIwithSplitWindowFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void GUIwithSplitWindowFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

