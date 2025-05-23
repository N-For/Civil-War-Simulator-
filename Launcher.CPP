#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <locale>
#include <string>
#include <SFML/Audio.hpp>

using namespace sf;


using namespace std;

void started(){
setlocale(LC_ALL,"RUS");
system("title CWS (Civil War Simulation лаунчер");
srand(time(0));
system("mode con cols=50 lines=40");
}


int main(){
//
   // PlaySound("res/music/menu.ogg", NULL, SND_ASYNC | SND_FILENAME);//это дл€ музыки фоновой

//
started();
cout<<"Ќе закрывайте это окно";
system("start CWS.exe");
int time[5];
ofstream tim_s("res/parameters/time/stat_s.dat", ios::app);
ofstream tim_m("res/parameters/time/stat_m.dat", ios::app);
ofstream tim_c("res/parameters/time/stat_c.dat", ios::app);
ofstream tim_d("res/parameters/time/stat_d.dat", ios::app);
tim_s.close();
tim_s.close();
tim_m.close();
tim_c.close();


	ifstream gvx("res/parameters/time/stat_s.dat");
	ifstream gvx1("res/parameters/time/stat_m.dat");
	ifstream gvx2("res/parameters/time/stat_c.dat");
	ifstream gvx3("res/parameters/time/stat_d.dat");
	string gen2;
	string gen3;
	string gen4;
	string gen5;
	getline(gvx,gen2);
	getline(gvx1,gen3);
	getline(gvx2,gen4);
	getline(gvx3,gen5);
    time[0]=atoi(gen2.c_str());
	time[1]=atoi(gen3.c_str());
	time[2]=atoi(gen4.c_str());
	time[3]=atoi(gen5.c_str());
while(true){
	
	Sleep(1000);
time[0]++;//cекунды


ofstream tim_s("res/parameters/time/stat_s.dat");
tim_s<<time[0];

if(time[0]==60){
	time[0]=0;
	ofstream tim_s("res/parameters/time/stat_s.dat");
	time[1]++;//минуты
	ofstream tim_m("res/parameters/time/stat_m.dat");
	tim_m<<time[1];
	if(time[1]==60){
		tim_m<<time[1];
		ofstream tim_s("res/parameters/time/stat_s.dat");
		time[1]=0;
		ofstream tim_m("res/parameters/time/stat_m.dat");
		ofstream tim_c("res/parameters/time/stat_c.dat");
		time[2]++;//часы
		tim_s<<time[0];
		tim_m<<time[1];
		tim_c<<time[2];
		if(time[2]==24){
		time[2]=0;
		time[3]++;//дни
		ofstream tim_s("res/parameters/time/stat_s.dat");
		time[2]=0;
		ofstream tim_m("res/parameters/time/stat_m.dat");
		ofstream tim_c("res/parameters/time/stat_c.dat");
		ofstream tim_d("res/parameters/time/stat_d.dat");
		tim_s<<time[0];
		tim_m<<time[1];
		tim_c<<time[2];
		tim_d<<time[3];
		}
	}
}
}
/*
sf::SoundBuffer buffer; 
buffer.loadFromFile("C://menu.ogg")// ??? ????????? ? ????? ??? ??
sf::Sound sound;
sound.setBuffer(buffer);
sound.play();
*/

//	getche(); //???? ??????? ????? ??????? ?????? ??? ????? ?? ?????????

}


