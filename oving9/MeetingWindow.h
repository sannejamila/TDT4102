#pragma once
#include "AnimationWindow.h"
#include "Person.h"

using namespace std;

class MeetingWindow : public AnimationWindow{
    public:
        static constexpr int pad = 30;
        static constexpr int btnW = 70;
        static constexpr int btnH = 40;
        static constexpr int  fieldW = 300;
        static constexpr int fieldH = 35;
        static constexpr int fieldPad = 60;
        MeetingWindow(int x, int y, int w, int h, const string& title);
    private:
        static void cb_quit(Fl_Widget*, void* pw);
        static void cb_new_person(Fl_Widget*, void* pw);
        Fl_Button quitBtn;
        Fl_Button personNewBtn;
        Fl_Input personName;
        Fl_Input personEmail;
        vector<shared_ptr<Person>> people;
        void newPerson();

};