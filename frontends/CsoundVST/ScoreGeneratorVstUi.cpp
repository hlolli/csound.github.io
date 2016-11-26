// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "ScoreGeneratorVstUi.h"

Fl_Tabs *mainTabs=(Fl_Tabs *)0;

Fl_Group *scriptGroup=(Fl_Group *)0;

Fl_Text_Editor *scriptTextEdit=(Fl_Text_Editor *)0;

Fl_Group *runtimeMessagesGroup=(Fl_Group *)0;

Fl_Browser *runtimeMessagesBrowser=(Fl_Browser *)0;

Fl_Group *aboutGroup=(Fl_Group *)0;

Fl_Text_Display *aboutTextDisplay=(Fl_Text_Display *)0;

Fl_Button *newButton=(Fl_Button *)0;

Fl_Button *newVersionButton=(Fl_Button *)0;

Fl_Button *openButton=(Fl_Button *)0;

Fl_Button *saveButton=(Fl_Button *)0;

Fl_Button *saveAsButton=(Fl_Button *)0;

Fl_Button *generateButton=(Fl_Button *)0;

Fl_Double_Window* make_window(ScoreGeneratorVstFltk *scoreGeneratorVstFltk) {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(609, 431, "ScoreGeneratorVST");
    w = o;
    o->color((Fl_Color)48);
    o->labelsize(12);
    o->user_data((void*)(scoreGeneratorVstFltk));
    o->align(FL_ALIGN_TEXT_OVER_IMAGE|FL_ALIGN_INSIDE);
    { Fl_Tabs* o = mainTabs = new Fl_Tabs(4, 40, 601, 385);
      o->color(FL_LIGHT1);
      o->selection_color(FL_LIGHT3);
      o->labelsize(10);
      { Fl_Group* o = scriptGroup = new Fl_Group(4, 65, 601, 360, "Script");
        o->box(FL_THIN_UP_BOX);
        o->color(FL_LIGHT1);
        o->selection_color(FL_DARK1);
        o->labelfont(1);
        o->labelsize(12);
        o->hide();
        { Fl_Text_Editor* o = scriptTextEdit = new Fl_Text_Editor(9, 70, 591, 350);
          o->box(FL_THIN_DOWN_BOX);
          o->labelsize(12);
          o->textfont(4);
          o->textsize(11);
          Fl_Group::current()->resizable(o);
        }
        o->end();
      }
      { Fl_Group* o = runtimeMessagesGroup = new Fl_Group(4, 65, 601, 360, "Messages");
        o->box(FL_THIN_UP_BOX);
        o->color(FL_LIGHT1);
        o->selection_color(FL_DARK1);
        o->labelfont(1);
        o->labelsize(12);
        o->hide();
        { Fl_Browser* o = runtimeMessagesBrowser = new Fl_Browser(9, 70, 591, 350);
          o->box(FL_THIN_DOWN_BOX);
          o->labelsize(12);
          o->textfont(4);
          o->textsize(11);
        }
        o->end();
      }
      { Fl_Group* o = aboutGroup = new Fl_Group(4, 65, 601, 360, "About");
        o->box(FL_THIN_UP_BOX);
        o->color(FL_LIGHT1);
        o->selection_color(FL_DARK1);
        o->labelfont(1);
        o->labelsize(12);
        { Fl_Text_Display* o = aboutTextDisplay = new Fl_Text_Display(9, 70, 591, 350);
          o->box(FL_THIN_DOWN_BOX);
          o->color(FL_LIGHT3);
          o->labelsize(12);
          o->textfont(8);
          o->textsize(11);
          o->align(FL_ALIGN_CENTER);
        }
        o->end();
      }
      o->end();
      Fl_Group::current()->resizable(o);
    }
    { Fl_Button* o = newButton = new Fl_Button(4, 4, 100, 26, "&New");
      o->tooltip("Create a blank orchestra and score");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x4006e);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onNew, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = newVersionButton = new Fl_Button(104, 4, 100, 26, "&Version");
      o->tooltip("Save the current score and orchestra to a new automatically generated filenam\
e");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x40076);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onNewVersion, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = openButton = new Fl_Button(204, 4, 100, 26, "&Open..");
      o->tooltip("Open an existing orchestra or score");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x4006f);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onOpen, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = saveButton = new Fl_Button(304, 4, 100, 26, "Sa&ve");
      o->tooltip("Save the current orchestra and score");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x40076);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onSave, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = saveAsButton = new Fl_Button(404, 4, 100, 26, "Save &as...");
      o->tooltip("Save current orchestra or score to a new filename");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x40061);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onSaveAs, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    { Fl_Button* o = generateButton = new Fl_Button(505, 4, 100, 26, "&Generate");
      o->tooltip("Perform the current orchestra and score");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_THIN_DOWN_BOX);
      o->shortcut(0x40070);
      o->color(FL_LIGHT1);
      o->selection_color((Fl_Color)46);
      o->labelfont(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)onGenerate, (void*)(scoreGeneratorVstFltk));
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
    }
    o->end();
  }
  return w;
}