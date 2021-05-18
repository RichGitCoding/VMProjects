
#include <iostream>
#include <vector>
#include <gtkmm.h>
//#include "Mywindow.h"
using namespace std;

class Mywindow : public Gtk::Window
{
	public:
		/*Mywindow()
		{
			//set defaults, title 
			set_title("Welcome to Richard's Gussing game");
			set_default_size(800, 500);
			
			//create vbox
			Gtk::Box *MainVBox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
			add(*MainVBox);
			
			
			//create label 
			Gtk::Label *Mylabel(new Gtk::Label("\n\nWhat is his name?\n\n"));
			MainVBox->pack_start(*Mylabel);
			//Mylabel.show();
			
			//add image
			Gtk::Image *Myimage(new Gtk::Image{"peter.png"});
			MainVBox->add(*Myimage);
			Myimage->show();
			
			//add button boxes
			//Gtk::VButtonBox *VBox = Gtk::manage(new Gtk::VButtonBox(Gtk::BUTTONBOX_END,Gtk::BUTTONBOX_DEFAULT_SPACING));
			//add(*VBox);
			//MainVBox->pack_start(*VBox);
			Gtk::Box *Hbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL,0));
			MainVBox->pack_start(*Hbox, Gtk::PACK_SHRINK,0);
			
			Gtk::Box *Vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
			Hbox->add(*Vbox);
			
			Gtk::Box *Vbox1 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
			Hbox->add(*Vbox1);
			//VBox->add("Cancel", 0);//Gtk::RESPONSE_CANCEL);
			
			//add buttons
			Gtk::Button *Ok = Gtk::manage(new Gtk::Button("ok"));
			Vbox->add(*Ok);
			
			Ok->set_size_request(370,3);
			Gtk::Button *Cancel = Gtk::manage(new Gtk::Button("Cancel"));
			Vbox->add(*Cancel);
			
			//add entry
			Gtk::Entry *user = Gtk::manage(new Gtk::Entry());
			user->set_text("Your answer here");
			user->set_max_length(50);
			Vbox1->add(*user);
			user->set_size_request(430,3);
			user->show();

			MainVBox->show_all();
		}*/
		Mywindow();
		void OK_BUTTON_CLICKED(Gtk::Entry*);
		void CANCEL_BUTTON_CLICKED();
		
};	


Mywindow::Mywindow()
{
	//set defaults, title 
	set_title("Welcome to Richard's Gussing game");
	set_default_size(800, 500);
	
	//create vbox
	Gtk::Box *MainVBox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	add(*MainVBox);
	
	//add menubar
	Gtk::MenuBar *imagemenubar = Gtk::manage(new Gtk::MenuBar());
	MainVBox->pack_start(*imagemenubar,Gtk::PACK_SHRINK,0);
	
	//add items to menu bar
	Gtk::MenuItem *famhints= Gtk::manage(new Gtk::MenuItem("_FamilyHint",true));
	imagemenubar->append(*famhints);
	
	Gtk::MenuItem *friendhints= Gtk::manage(new Gtk::MenuItem("_FriendHint",true));
	imagemenubar->append(*friendhints);
	
	Gtk::MenuItem *pethint= Gtk::manage(new Gtk::MenuItem("_PetHints",true));
	imagemenubar->append(*pethint);
	
	//add submenu for them
	Gtk::Menu *famsubmenu = Gtk::manage(new Gtk::Menu());
	famhints->set_submenu(*famsubmenu);
	
	Gtk::Menu *friendsubmenu = Gtk::manage(new Gtk::Menu());
	friendhints->set_submenu(*friendsubmenu);
	
	Gtk::Menu *petsubmenu = Gtk::manage(new Gtk::Menu());
	pethint->set_submenu(*petsubmenu);
	
	
	
	//items to submenu fam
	Gtk::MenuItem *famsubmenuitem_New = Gtk::manage(new Gtk::MenuItem("_Lois",true));
	famsubmenu->append(*famsubmenuitem_New);
	Gtk::MenuItem *famsubmenuitem_New2 = Gtk::manage(new Gtk::MenuItem("_Chris",true));
	famsubmenu->append(*famsubmenuitem_New2);
	Gtk::MenuItem *famsubmenuitem_New3 = Gtk::manage(new Gtk::MenuItem("_Stewie",true));
	famsubmenu->append(*famsubmenuitem_New3);
	
	//items to submenu friend
	Gtk::MenuItem *friendsubmenuitem_New = Gtk::manage(new Gtk::MenuItem("_Cleveland",true));
	friendsubmenu->append(*friendsubmenuitem_New);
	Gtk::MenuItem *friendsubmenuitem_New2 = Gtk::manage(new Gtk::MenuItem("_Joe",true));
	friendsubmenu->append(*friendsubmenuitem_New2);
	Gtk::MenuItem *friendsubmenuitem_New3 = Gtk::manage(new Gtk::MenuItem("_Quagmire",true));
	friendsubmenu->append(*friendsubmenuitem_New3);
	
	//items to submenu pet
	Gtk::MenuItem *petsubmenuitem_New = Gtk::manage(new Gtk::MenuItem("_Brian",true));
	petsubmenu->append(*petsubmenuitem_New);
	Gtk::MenuItem *petsubmenuitem_New2 = Gtk::manage(new Gtk::MenuItem("_Meg",true));
	petsubmenu->append(*petsubmenuitem_New2);
	
	
	
	
	//create label 
	Gtk::Label *Mylabel(new Gtk::Label("\n\nWhat is his name?\n\n"));
	MainVBox->pack_start(*Mylabel);
	//Mylabel.show();
	
	//add image
	Gtk::Image *Myimage(new Gtk::Image{"peter.png"});
	MainVBox->add(*Myimage);
	Myimage->show();
	
	//add button boxes
	//Gtk::VButtonBox *VBox = Gtk::manage(new Gtk::VButtonBox(Gtk::BUTTONBOX_END,Gtk::BUTTONBOX_DEFAULT_SPACING));
	//add(*VBox);
	//MainVBox->pack_start(*VBox);
	Gtk::Box *Hbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL,0));
	MainVBox->pack_start(*Hbox, Gtk::PACK_SHRINK,0);
	
	Gtk::Box *Vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	Hbox->add(*Vbox);
	
	Gtk::Box *Vbox1 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	Hbox->add(*Vbox1);
	//VBox->add("Cancel", 0);//Gtk::RESPONSE_CANCEL);
	
	//add buttons
	Gtk::Button *Ok = Gtk::manage(new Gtk::Button("Ok"));
	Vbox->add(*Ok);
	
	Ok->set_size_request(370,3);
	Gtk::Button *Cancel = Gtk::manage(new Gtk::Button("Cancel"));
	Vbox->add(*Cancel);
	
	//add entry
	Gtk::Entry *user = Gtk::manage(new Gtk::Entry());
	user->set_text("Your answer here");
	user->set_max_length(50);
	Vbox1->add(*user);
	user->set_size_request(430,3);
	user->show();
	/*
	//add menubar
	Gtk::MenuBar *imagemenubar = Gtk::manage(new Gtk::MenuBar());
	MainVBox->pack_start(*imagemenubar,Gtk::PACK_SHRINK,0);
	
	//add items to menu bar
	Gtk::MenuItem *famhints= Gtk::manage(new Gtk::MenuItem("_FamilyHint",true));
	imagemenubar->append(*famhints);
	
	//add submenu for it
	Gtk::Menu *famsubmenu = Gtk::manage(new Gtk::Menu());
	famhints->set_submenu(*famsubmenu);
	
	//items to submenu
	Gtk::MenuItem *famsubmenuitem_New = Gtk::manage(new Gtk::MenuItem("_Lois",true));
	famsubmenu->append(*famsubmenuitem_New);
	
	
	Gtk::MenuItem *friendhints= Gtk::manage(new Gtk::MenuItem("_FriendHint",true));
	imagemenubar->append(*friendhints);
	
	Gtk::MenuItem *pethint= Gtk::manage(new Gtk::MenuItem("_PetHints",true));
	imagemenubar->append(*pethint);
	*/
	
	//get responses
	user->grab_focus();
	user->signal_activate().connect(sigc::bind<Gtk::Entry*>(sigc::mem_fun(*this,&Mywindow::OK_BUTTON_CLICKED),user));
	
	Ok->signal_clicked().connect(sigc::bind<Gtk::Entry*>(sigc::mem_fun(*this,&Mywindow::OK_BUTTON_CLICKED),user));
	Cancel->signal_clicked().connect(sigc::mem_fun(*this,&Mywindow::CANCEL_BUTTON_CLICKED),user);
	
	MainVBox->show_all();
}






void Mywindow::OK_BUTTON_CLICKED(Gtk::Entry *user)
{
	std::string name="Peter";
	std::string guess=user->get_text();
	
	//check to see if equal
	if(name==guess)
	{
		//msdia, not dialogue
		Gtk::MessageDialog win{"Smart banana!! You got it right.",true,Gtk::MESSAGE_WARNING,Gtk::BUTTONS_OK,false};
		win.set_transient_for(*this);
		win.run();
		hide();
	}
	else if(name!=guess)
	{
		Gtk::MessageDialog loss{"Not so smart banana!! You got it wrong.",true,Gtk::MESSAGE_WARNING,Gtk::BUTTONS_OK,false};
		loss.set_transient_for(*this);
		loss.run();
		//hide();
	}
	else
	{
		Gtk::MessageDialog whatm{"Um what?",true,Gtk::MESSAGE_WARNING,Gtk::BUTTONS_OK,false};
		whatm.run();
	}
	 
}
void Mywindow::CANCEL_BUTTON_CLICKED()
{
	hide();
}
/*
Mywindow::Mywindow()
{
	//set defaults, title 
	set_title("Welcome to Richard's Gussing game");
	set_default_size(800, 500);
	
	//create vbox
	Gtk::Box *MainVBox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	add(*MainVBox);
	
	
	//create label 
	Gtk::Label *Mylabel(new Gtk::Label("\n\nWhat is his name?\n\n"));
	MainVBox->pack_start(*Mylabel);
	//Mylabel.show();
	
	//add image
	Gtk::Image *Myimage(new Gtk::Image{"peter.png"});
	MainVBox->add(*Myimage);
	Myimage->show();
	
	//add button boxes
	//Gtk::VButtonBox *VBox = Gtk::manage(new Gtk::VButtonBox(Gtk::BUTTONBOX_END,Gtk::BUTTONBOX_DEFAULT_SPACING));
	//add(*VBox);
	//MainVBox->pack_start(*VBox);
	Gtk::Box *Hbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL,0));
	MainVBox->pack_start(*Hbox, Gtk::PACK_SHRINK,0);
	
	Gtk::Box *Vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	Hbox->add(*Vbox);
	
	Gtk::Box *Vbox1 = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	Hbox->add(*Vbox1);
	//VBox->add("Cancel", 0);//Gtk::RESPONSE_CANCEL);
	
	//add buttons
	Gtk::Button *Ok = Gtk::manage(new Gtk::Button("ok"));
	Vbox->add(*Ok);
	
	Ok->set_size_request(370,3);
	Gtk::Button *Cancel = Gtk::manage(new Gtk::Button("Cancel"));
	Vbox->add(*Cancel);
	
	//add entry
	Gtk::Entry *user = Gtk::manage(new Gtk::Entry());
	user->set_text("Your answer here");
	user->set_max_length(50);
	Vbox1->add(*user);
	user->set_size_request(430,3);
	user->show();

	MainVBox->show_all();
}
*/
/*
Mywindow::Mywindow()
{
	//set defaults, title 
	set_title("Welcome to Richard's Gussing game");
	set_default_size(800, 500);
	
	//create vbox
	Gtk::Box *MainVBox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL,0));
	add(*MainVBox);
	
	
	
	
	Gtk::Label *label = Gtk::manage(new Gtk::Label("hi"));
	MainVBox->pack_start(*label);
	MainVBox->show_all();
};*/

int main(int argc, char *argv[])
{
	//general window app
	auto app = Gtk::Application::create(argc, argv, "");
	Mywindow window;
	//Mywindow.set_title("Welcome to my game");
	app->run(window);
	return 0;
}