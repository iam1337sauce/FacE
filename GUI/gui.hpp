/***************************************************************
 * Name:      GUIwithSplitWindowMain.h
 * Purpose:   Defines Application Frame
 * Author:    Morgan ()
 * Created:   2016-05-03
 * Copyright: Morgan ()
 * License:
 **************************************************************/

#ifndef GUIWITHSPLITWINDOWMAIN_H
#define GUIWITHSPLITWINDOWMAIN_H

//(*Headers(GUIwithSplitWindowFrame)
#include <wx/menu.h>
#include <wx/splitter.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class GUIwithSplitWindowFrame: public wxFrame
{
    public:

        GUIwithSplitWindowFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~GUIwithSplitWindowFrame();

    private:

        //(*Handlers(GUIwithSplitWindowFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnSplitterWindow1SashPosChanged(wxSplitterEvent& event);
        //*)

        //(*Identifiers(GUIwithSplitWindowFrame)
        static const long ID_PANEL1;
        static const long ID_SPLITTERWINDOW1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long HungerHappy;
        static const long ThirstHappy;
        static const long PainHappy;
        static const long TiredHappy;
        static const long PhysicalHappy;
        static const long HungerSad;
        static const long ThirstSad;
        static const long PainSad;
        static const long TiredSad;
        static const long PhysicalSad;
        static const long HungerDisgust;
        static const long ThirstDisgust;
        static const long PainDisgust;
        static const long TiredDisgust;
        static const long PhysicalDisgust;
        static const long PhysicalSubject;
        static const long WalkHappy;
        static const long MovieHappy;
        static const long ReadHappy;
        static const long GetItOnHappy;
        static const long ActivityHappy;
        static const long WalkSad;
        static const long MovieSad;
        static const long ReadSad;
        static const long GetItOnSad;
        static const long ActivitySad;
        static const long WalkDisgust;
        static const long MovieDisgust;
        static const long ReadDisgust;
        static const long GetItOnDisgust;
        static const long ActivityDisgust;
        static const long ActivitySubject;
        static const long FamilyHappy;
        static const long FriendHappy;
        static const long SignificantOtherHappy;
        static const long PersonHereHappy;
        static const long RelationshipHappy;
        static const long FamilySad;
        static const long FriendSad;
        static const long SignificantOtherSad;
        static const long PersonHereSad;
        static const long RelationshipSad;
        static const long FamilyDisgust;
        static const long FriendDisgust;
        static const long SignificantOtherDisgust;
        static const long PersonHereDisgust;
        static const long RelationshipDisgust;
        static const long RelationshipSubject;
        static const long MusicSubject;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(GUIwithSplitWindowFrame)
        wxMenu* MenuItem31;
        wxMenuItem* MenuItem8;
        wxMenu* MenuItem19;
        wxMenuItem* MenuItem33;
        wxMenuItem* MenuItem7;
        wxMenuItem* MenuItem25;
        wxMenuItem* MenuItem40;
        wxMenu* MenuItem9;
        wxMenuItem* MenuItem5;
        wxMenuItem* MenuItem49;
        wxMenuItem* MenuItem50;
        wxMenu* Menu3;
        wxMenu* MenuItem3;
        wxMenu* MenuItem20;
        wxMenuItem* MenuItem46;
        wxMenuItem* MenuItem36;
        wxMenuItem* MenuItem11;
        wxMenuItem* MenuItem29;
        wxMenu* MenuItem4;
        wxMenuItem* MenuItem15;
        wxMenu* MenuItem39;
        wxMenuItem* MenuItem22;
        wxPanel* Panel1;
        wxMenuItem* MenuItem32;
        wxMenuItem* MenuItem17;
        wxMenuItem* MenuItem13;
        wxMenuItem* MenuItem42;
        wxMenuItem* MenuItem10;
        wxMenuItem* MenuItem12;
        wxMenuItem* MenuItem24;
        wxMenuItem* MenuItem27;
        wxMenuItem* MenuItem44;
        wxMenuItem* MenuItem28;
        wxMenu* MenuItem38;
        wxStatusBar* StatusBar1;
        wxMenuItem* MenuItem6;
        wxMenu* MenuItem26;
        wxMenuItem* MenuItem35;
        wxMenu* MenuItem37;
        wxMenuItem* MenuItem23;
        wxMenuItem* MenuItem51;
        wxMenuItem* MenuItem41;
        wxMenu* MenuItem14;
        wxMenu* MenuItem21;
        wxMenuItem* MenuItem34;
        wxMenuItem* MenuItem16;
        wxSplitterWindow* SplitterWindow1;
        wxMenuItem* MenuItem43;
        wxMenuItem* MenuItem45;
        wxMenuItem* MenuItem18;
        wxMenuItem* MenuItem47;
        wxMenuItem* MenuItem30;
        wxMenuItem* MenuItem48;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // GUIWITHSPLITWINDOWMAIN_H

