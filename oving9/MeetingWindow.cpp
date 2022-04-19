#include "MeetingWindow.h"

MeetingWindow::MeetingWindow(int x, int y, int w, int h, const string& title) : 
    AnimationWindow{x,y,w,h, title}, quitBtn{w - 3*pad, pad, btnW, btnH, "Quit"}, 
    personNewBtn{fieldPad, 4*pad + fieldH, btnW, btnH, "Add person"},
    personName{fieldPad, pad, fieldW, fieldH, "Name "}, 
    personEmail{fieldPad, 2*pad + fieldH, fieldW, fieldH, "Email "}
    {

        add(quitBtn);
        quitBtn.callback(cb_quit, this);

        add(personName);
        add(personEmail);
        add(personNewBtn);
        personNewBtn.callback(cb_new_person, this);
    }

void MeetingWindow::cb_quit(Fl_Widget*, void* pw){
    static_cast<MeetingWindow*>(pw)->hide();
}

void MeetingWindow::newPerson(){
    string read_name = personName.value();
    string read_email = personEmail.value();
    people.emplace_back(new Person{read_name, read_email});

}

void MeetingWindow::cb_new_person(Fl_Widget*, void* pw){
    static_cast<MeetingWindow*>(pw)->newPerson();
}