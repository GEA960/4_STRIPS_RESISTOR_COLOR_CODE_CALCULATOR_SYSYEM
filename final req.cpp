#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

void message ()
{
	cout<<"There'ssomething i want to share you kapatid"<<endl;
    cout<<"MAHAL KA NG DIYOS KAPATID!!!!"<<endl;
	cout<<"kapit lang matatapos din ang sakunang ito at hindi tayo pababayaan ng PANGINOON"<<endl;
	cout<<"STAY AT HOME AND BE SAFE ALWAYS"<<endl;
	cout<<"MAY RASON ANG LAHAT NG NANGYAYARING ITO"<<endl;
	cout<<"2 kings 3:15-"<<endl;
	cout<<"If you're depressed then you must also have a deep-rest in the presence of God"<<endl;
	cout<<"Matthew 11:28-"<<endl;
	cout<<"Then Jesus said, 'Come to me, all of you who are weary and carry heavy burdens, and I will give you rest.."<<endl;
    
}
int main ()
	

{

loop:
	message ();
	char first_color;
	int ohms;
    int significant_figure;
    char choice;
	int first_color_equivalent;
	
	cout<<endl<<endl<<endl<<"Welcome My FRIEND to"<<"<<<<<<<<<GABS 4 STRIPS RESISTOR COLOR CODE CALCULATOR SYSYEM>>>>>>>>>>>>>>"<<endl<<endl;
	cout<<" What is a resistor?"<<endl;
    cout<<"Resistors are used in virtually all electronic circuits and many electrical ones and as their name indicates resists the flow of electricity."<<endl<<endl;
    cout<<"How to know which end of the resistor to start reading from?"<<endl;
	cout<<"Always read resistors from left to right.- resistors never start with a metallic band on the left. If you have resistor with a gold or silver band on one end, you have a 5% or 10% tolerance resistor. Position the resistor with this band on the right side and again read your resistor from left to right."<<endl;
	cout<<endl<<endl<<"<<FIRST BAND COLOR OF YOUR RESISTOR>>\n";
	cout<<"a.Black\n"<<"b.Brown\n"<<"c.Red\n"<<"d.Orange\n"<<"e.Yellow\n"<<"f.Green\n"<<"g.Blue\n"<<"h.Violet\n"<<"i.Gray\n"<<"j.White\n"<<"k.Gold\n"<<"l.Silver\n"<<"m.No color\n"; 
	cout<<"Note: the first color on your transistor is in the left side which always a non-mettalic band (gold and silver)\n"<< "Enter the first band on your resistor\n";
	cout<<"letter:";
	cin>>first_color;
	
    
	switch (first_color)
	
	{
	case 'a':	
		cout<<"Black=0";
	    first_color_equivalent=0;
		break;
	case 'b':
		cout<<"Brown=1";
	    first_color_equivalent=1;
		break;
	case 'c':
	    cout<<"Red=2";
		first_color_equivalent=2;
		break;
	case 'd':
		cout<<"Orange=3";
	    first_color_equivalent=3;
		break;
	case 'e':
		cout<<"Yellow=4";
		first_color_equivalent=4;
		break;
	case 'f':
		cout<<"Green=5";
        first_color_equivalent=5;
		break;
	case 'g':
		cout<<"Blue=6";
	    first_color_equivalent=6;
		break;
	case 'h':
		cout<<"Violet=7";
	    first_color_equivalent=7;
		break;
	case 'i':
		cout<<"Gray=8";
	    first_color_equivalent=8;
		break;
	case 'j':
		cout<<"White=9";
	    first_color_equivalent=9;
		break;
	case 'k':
		cout<<"Gold=10";
		first_color_equivalent=10;
		break;
	case 'l':
		cout<<"Silver=11";
	    first_color_equivalent=11;
		break;
	case 'm':
		cout<<"NO COLOR=12";
	    first_color_equivalent=12;
		break;
	default:
		cout<<"Invalid";
  	}
	

	char second_color;
    int second_color_equivalent;
	cout<<endl<<endl<<"<<SECOND BAND COLOR OF YOUR RESISTOR>>\n";
	cout<<"\na.Black\n"<<"b.Brown\n"<<"c.Red\n"<<"d.Orange\n"<<"e.Yellow\n"<<"f.Green\n"<<"g.Blue\n"<<"h.Violet\n"<<"i.Gray\n"<<"j.White\n"<<"k.Gold\n"<<"l.Silver\n"<<"m.No color\n"; 
	cout<<"Note: the second color on your transistor is in the side which more bands are stick together\n"<< "Enter the second band on your resistor\n";
	cout<<"number:";
	cin>>second_color;
	
	switch (second_color)
	
	{
	case 'a':
		cout<<"Black=0";
		second_color_equivalent=0;
		break;
	case 'b':
		cout<<"Brown=1";
	    second_color_equivalent=1;
		break;
	case 'c':
	    cout<<"Red=2";
		second_color_equivalent=2;
		break;
	case 'd':
		cout<<"Orange=3";
		second_color_equivalent=3;
		break;
	case 'e':
		cout<<"Yellow=4";
		second_color_equivalent=4;
		break;
	case 'f':
		cout<<"Green=5";
		second_color_equivalent=5;
		break;
	case 'g':
		cout<<"Blue=6";
		second_color_equivalent=6;
		break;
	case 'h':
		cout<<"Violet=7";
		second_color_equivalent=7;
		break;
	case 'i':
		cout<<"Gray=8";
		second_color_equivalent=8;
		break;
	case 'j':
		cout<<"White=9";
		second_color_equivalent=9;
		break;
	case 'k':
		cout<<"Gold=10";
		second_color_equivalent=10;
		break;
	case 'l':
		cout<<"Silver=11";
		second_color_equivalent=11;
		break;
	case 'm':
		cout<<"NO COLOR=12";
		second_color_equivalent=12;
		break;
	default:
		cout<<"Invalid";
  	}
	
	char multiplier_color;
    double third_color_equivalent;
     cout<<endl<<endl<<"<<THIRD BAND COLOR OF YOUR RESISTOR>>\n";
	cout<<"\na.Black\n"<<"b.Brown\n"<<"c.Red\n"<<"d.Orange\n"<<"e.Yellow\n"<<"f.Green\n"<<"g.Blue\n"<<"h.Violet\n"<<"i.Gray\n"<<"j.White\n"<<"k.Gold\n"<<"l.Silver\n"<<"m.No color\n"; 
	cout<<"Note: the third color on your transistor is in the side which more bands are stick together\n"<< "Enter the third band on your resistor\n";
	cout<<"\nEnter your letter";
	cout<<"\nletter:";
	cin>>multiplier_color;
	
	
	switch (multiplier_color)
	
	{
	case 'a':
		cout<<"Black=1";
		third_color_equivalent=1;
		break;
	case 'b':
		cout<<"Brown=10";
	    third_color_equivalent=10;
		break;
	case 'c':
	    cout<<"Red=100";
		third_color_equivalent=100;
		break;
	case 'd':
		cout<<"Orange=1000";
	third_color_equivalent=1000;
		break;
	case 'e':
		cout<<""<<"Yellow=10000";
	third_color_equivalent=10000;
		break;
	case 'f':
		cout<<" "<<"Green=100000";
		third_color_equivalent=100000;
		break;
	case 'g':
		cout<<" "<<"Blue=1000000";
		third_color_equivalent=1000000;
		break;
	case 'h':
		cout<<" "<<"Violet=10000000";
		third_color_equivalent=10000000;
		break;
	case 'i':
		cout<<" "<<"Gray=100000000";
		third_color_equivalent=100000000;
		break;
	case 'j':
		cout<<" "<<"White=1000000000";
		third_color_equivalent=1000000000;
		break;
	case 'k':
		cout<<"Gold=.1";
        third_color_equivalent=.1;
		break;
	case 'l':
		cout<<"Silver=.01";
		third_color_equivalent=.01;
		break;
	case 'm':
		cout<<"NO COLOR=.001";
		third_color_equivalent=.001;
		break;
	default:
		cout<<"Invalid";
  	}
	
	
	char fourth_color;
    double fourth_color_equivalent;
	cout<<endl<<endl<<"<<FOURTH BAND COLOR OF YOUR RESISTOR>>\n";
	cout<<"a.Black\n"<<"b.Brown\n"<<"c.Red\n"<<"d.Orange\n"<<"e.Yellow\n"<<"f.Green\n"<<"g.Blue\n"<<"h.Violet\n"<<"i.Gray\n"<<"j.White\n"<<"k.Gold\n"<<"l.Silver\n"<<"m.No color\n"; 
	cout<<"Note: the Fourth color on your transistor is the color in the side of the resistor alone\n"<< "Enter the Fourth band on your resistor\n";
	cout<<"letter:";
	cin>>fourth_color;
	
	switch (fourth_color)
	
	{
	case 'a':
		cout<<"Black=20";
		fourth_color_equivalent=20;
		break;
	case 'b':
		cout<<"Brown=1";
		fourth_color_equivalent=1;
	    break;
	case 'c':
	    cout<<"Red=2";
		fourth_color_equivalent=2;
		break;
	case 'd':
		cout<<"Orange=3";
		fourth_color_equivalent=3;
		break;
	case 'e':
		cout<<"Yellow=4";
		fourth_color_equivalent=4;
		break;
	case 'f':
		cout<<"Green=0.5";
		fourth_color_equivalent=0.5;
		break;
	case 'g':
		cout<<"Blue=0.25";
		fourth_color_equivalent=0.25;
		break;
	case 'h':
		cout<<"Violet=.10";
		fourth_color_equivalent=10;
		break;
	case 'i':
		cout<<"Gray=.05";
		fourth_color_equivalent=.05;
		break;
	case 'j':
		cout<<"White=10";
		fourth_color_equivalent=10;
		break;
	case 'k':
		cout<<"Gold=5";
		fourth_color_equivalent=5;
		break;
	case 'l':
		cout<<"Silver=10";
		fourth_color_equivalent=10;
		break;
	case 'm':
		cout<<"NO COLOR=20";
		fourth_color_equivalent=20;
		break;
	default:
		cout<<"Invalid";
  	}
double multiplier;

cout<<endl<<endl<<"Note: The significant figure are the numbers equivalent to the first band color and second band color you entered above then merged together\n"<<endl;
cout<<"example  First color= brown (1) and second color=Gold (10) then, the significant figure is [110]"<<endl<<endl;

cout<<"colors you entered:"<<endl<<"first color(significant figure 1)="<<first_color_equivalent<<endl<<"Second color(significant figure 2)="<<second_color_equivalent<<endl<<"third color equivalent(Multiplier)="<<third_color_equivalent<<endl<<"fourth color equivalent(tolerance)="<<fourth_color_equivalent<<endl;
cout<<"Enter significant figure:"<<" ";
cin>>significant_figure;

multiplier=third_color_equivalent;

ohms=significant_figure*multiplier;

cout<<"\nYOUR RESISTORS VALUE IS:"<<" "<<ohms<<" Ohms"<<" "<<"with the tolerance of:"<<" "<<"+/-"<<" "<<fourth_color_equivalent<<"%"<<endl<<endl;

cout<<"Want to know your other resistor's value Kapatid??"<<endl;

cout<<"Enter your choice <<y>> for yes and <<n>> for no"<<endl;

cin>>choice;

char y,n;
if (choice=='y')
	goto loop;
else 
	cout<<"Thank you my friend";

	
_getch ();
	return 0;
}

