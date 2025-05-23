#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <locale>
#include <string>

int a=0;
int d[100];
//константы игры
double boezapas =0;
int terit[100];
int lic_sila=0;
int opit;
int stat_sila_a;
int stat_volna;
int lvl_p;
int sila_armii=0;
float sila_razvet=0;
int i1;
int i2;
int i3;
bool susha =true;
bool boevoi_dux=true;
int gen=0;
int cart=0;
int gen_cart[4];
int coin=0;
int gen_lvl[4];///уровень
int gen_sc[4];//наименование
	int bild_g;
	int dec_g;
//константы игры
using namespace std;
void started(){
srand(time(0));
setlocale(LC_ALL,"RUS");
system("title CWS (Civil War Simulation)");
system("mode con cols=70 lines=30");
system("start res/activate.exe");
int ntk[100];
}
void relod(){
	//
	ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
	string geny;
	gvu.close();
	ifstream gvu3("res/parameters/gamelogic/player.dat");
	getline(gvu3,geny);
	lvl_p=atoi(geny.c_str());
	if(lvl_p==0){
	ofstream  gvu("res/parameters/gamelogic/player.dat");
	gvu<<"1";
	gvu.close();
	}
	//
	
	ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
	string geny1;
	gvh.close();
	ifstream gvu9("res/parameters/gamelogic/player_o.dat");
	getline(gvu9,geny1);
	opit=atoi(geny.c_str());
	
	//
	
	
	
	
	
		string gen2;
	string gen3;
	string gen4;
	string gen5;
	ofstream  gv("res/parameters/gamelogic/gen1.dat", ios::app);
	ofstream  gv1("res/parameters/gamelogic/gen2.dat", ios::app);
	ofstream  gv2("res/parameters/gamelogic/gen3.dat", ios::app);
	ofstream  gv3("res/parameters/gamelogic/gen4.dat", ios::app);
	//
	gv.close();
	gv1.close();
	gv2.close();
	gv3.close();
	//
	ifstream gvx("res/parameters/gamelogic/gen1.dat");
	ifstream gvx1("res/parameters/gamelogic/gen2.dat");
	ifstream gvx2("res/parameters/gamelogic/gen3.dat");
	ifstream gvx3("res/parameters/gamelogic/gen4.dat");
	getline(gvx,gen2);
	getline(gvx1,gen3);
	getline(gvx2,gen4);
	getline(gvx3,gen5);
	gen_cart[0]=atoi(gen2.c_str());
	gen_cart[1]=atoi(gen3.c_str());
	gen_cart[2]=atoi(gen4.c_str());
	gen_cart[3]=atoi(gen5.c_str());
//LVL
	ofstream  gvg("res/parameters/gamelogic/gen_l1.dat", ios::app);
	ofstream  gvg1("res/parameters/gamelogic/gen_l2.dat", ios::app);
	ofstream  gvg2("res/parameters/gamelogic/gen_l3.dat", ios::app);
	ofstream  gvg3("res/parameters/gamelogic/gen_l4.dat", ios::app);
	//
	gvg.close();
	gvg1.close();
	gvg2.close();
	gvg3.close();

//
ifstream  LSV("res/parameters/gamelogic/gen_l1.dat", ios::app);
ifstream  LSV1("res/parameters/gamelogic/gen_l2.dat", ios::app);
ifstream  LSV2("res/parameters/gamelogic/gen_l3.dat", ios::app);
ifstream  LSV3("res/parameters/gamelogic/gen_l4.dat", ios::app);
	
	string lvl01;
	string lvl02;
	string lvl03;
	string lvl04;
	

	getline(LSV, lvl01);
	getline(LSV1,lvl02);
	getline(LSV2,lvl03);
	getline(LSV3,lvl04);

gen_lvl[0]=atoi(lvl01.c_str());
gen_lvl[1]=atoi(lvl02.c_str());
gen_lvl[2]=atoi(lvl03.c_str());
gen_lvl[3]=atoi(lvl04.c_str());


}
void loading(){
int load1=0;
int load2=3;
int load3=6;
int load4=0;
while (load1<=100){
load4=load2 + rand() % load3;
load1=load1+load4;
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#            loading : "<<load1<<"                                            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                              v 0.4  pre-relis      #"<<endl;
cout<<"######################################################################"<<endl;
Sleep(700);
system("cls");
}
if(load1>100){
load1=100;
}
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                          Loading : "<<load1<<"                              #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                   STARTED                                          #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                              v 0.4  pre-relis      #"<<endl;
cout<<"######################################################################"<<endl;
Sleep(1500);
system("cls");
}
void game(){

Sleep (1500);
system("cls");
cout<<"1";
Sleep(400);
cout<<"0";
Sleep(350);
cout<<"6";
Sleep(350);
cout<<" л";
Sleep(350);
cout<<"е";
Sleep(350);
cout<<"т";
Sleep(350);
cout<<" н";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"з";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"д";
Sleep(350);
cout<<" н";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"ч";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"л";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"с";
Sleep(350);
cout<<"ь";
//

Sleep(350);
cout<<" В";
Sleep(350);
cout<<"е";
Sleep(350);
cout<<"л";
Sleep(350);
cout<<"и";
Sleep(350);
cout<<"к";
Sleep(350);
cout<<"а";
Sleep(350);
cout<<"я";
//

Sleep(350);
cout<<" В";
Sleep(350);
cout<<"о";
Sleep(350);
cout<<"й";
Sleep(350);
cout<<"н";
Sleep(350);
cout<<"а";
//


Sleep(450);
cout<<" 1";
Sleep(350);
cout<<"9";
Sleep(350);
cout<<"1";
Sleep(350);
cout<<"4";
Sleep(550);
cout<<"-";
Sleep(350);
cout<<"1";
Sleep(350);
cout<<"9";
Sleep(350);
cout<<"1";
Sleep(350);
cout<<"8";
//
Sleep(350);
cout<<" Г";

Sleep(350);
cout<<"о";

Sleep(350);
cout<<"д";

Sleep(350);
cout<<"о";

Sleep(350);
cout<<"в\n";
Sleep(2500);
system("cls");
//
Sleep(350);
cout<<"О";
Sleep(350);
cout<<"на";
Sleep(350);
cout<<" у";
Sleep(350);
cout<<"нес";
Sleep(350);
cout<<"ла";
Sleep(350);
cout<<" мно";
Sleep(350);
cout<<"го ";
Sleep(350);
cout<<" жи";
Sleep(350);
cout<<"з";
Sleep(350);
cout<<"ней";
Sleep(2000);
system("cls");
//

Sleep(350);
cout<<"И ";
Sleep(350);
cout<<"на ";
Sleep(550);
cout<<"её ";
Sleep(350);
cout<<"закат ";
Sleep(350);
cout<<"пали ";
Sleep(550);
cout<<"могучие ";
Sleep(350);
cout<<"империи ";
Sleep(2500);
system("cls");
//

Sleep(450);
cout<<"Германская ";
Sleep(750);
cout<<"Астро-Венгерская ";
Sleep(950);
cout<<"Российская ";
Sleep(650);
cout<<"и ";
Sleep(350);
cout<<"Османская ";
Sleep(2050);
system("cls");
//



/*
cout<<"######################################################################"<<endl;
*/
}

void f_game(){
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                      БЫСТРЫЙ БОЙ                                   #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#               Параметры быстрой схватки                            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                   Ресурсы                                          #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#          Количество начальных ресурсов                             #"<<endl;
cout<<"#       1)хардкор  2)стандарт 3)расширенное 4)максимальное           #"<<endl;
cout<<"#      Начало с      Ресурсы   минимальное    вариант для            #"<<endl;
cout<<"#   отрицательными   На нуле   колличество    новичков.              #"<<endl;
cout<<"#  показателями                ресурсов     Высокий боезапас         #"<<endl;
cout<<"#   ресурсов.                                                        #"<<endl;
cout<<"#  Отрицательный                                                     #"<<endl;
cout<<"#   показатель                                                       #"<<endl;
cout<<"#   боевого духа                                                     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                       Внимание!                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#  Характеристики выбранных ранее генералов плюсуются к вашему счету #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    PS     Выбрать генерала можно в опциях игры                     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"->";
cin>>d[0];
boezapas=-3;
lic_sila=-3;
sila_armii=-3;
sila_razvet=-3;
if(d[0]==1){
boezapas=-3;
sila_armii=-5;
sila_razvet=-2;
boevoi_dux=false;	
}else if(d[0]==2){
boezapas=0;
lic_sila=0;
sila_armii=0;
sila_razvet=0;
}else if(d[0]==3){
boezapas=1;
sila_armii=1;
sila_razvet=0;
}else if(d[0]==4){
boezapas=2;
sila_armii=4;
sila_razvet=3;
}else{
	system("cls");
	cout<<"ERROR 19-02,выбран стандартный вариант";
boezapas=0;
lic_sila=0;
sila_armii=0;
sila_razvet=0;
Sleep(2000);
}
//
if(gen==1){
	
	if(gen_lvl[0]==1){
boezapas =boezapas-3;
lic_sila=3;
sila_armii=sila_armii+5;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[0]==2){
boezapas =boezapas-1;
lic_sila=3;
sila_armii=sila_armii+4;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[0]==3){
boezapas =boezapas-0;
lic_sila=3;
sila_armii=sila_armii+6;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[0]==4){
boezapas =boezapas+2;
lic_sila=3;
sila_armii=sila_armii+8;
sila_razvet=sila_razvet+4;
}	
	if(gen_lvl[0]==5){
boezapas =boezapas+5;
lic_sila=3;
sila_armii=sila_armii+10;
sila_razvet=sila_razvet+5;
}

}else if(gen==2){
	if(gen_lvl[1]==1){
boezapas =boezapas-0;
lic_sila=3;
sila_armii=sila_armii+4;
sila_razvet=sila_razvet+2;
}	
	if(gen_lvl[1]==2){
boezapas =boezapas+2;
lic_sila=3;
sila_armii=sila_armii+5;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[1]==3){
boezapas =boezapas+4;
lic_sila=3;
sila_armii=sila_armii+8;
sila_razvet=sila_razvet+4;
}	
	if(gen_lvl[1]==5){
boezapas =boezapas+7;
lic_sila=3;
sila_armii=sila_armii+9;
sila_razvet=sila_razvet+4;
}	
	if(gen_lvl[1]==5){
boezapas =boezapas+10;
lic_sila=3;
sila_armii=sila_armii+10;
sila_razvet=sila_razvet+5;
}
}else if(gen==3){
	if(gen_lvl[2]==1){
boezapas =boezapas-3;
lic_sila=3;
sila_armii=sila_armii+2;
sila_razvet=sila_razvet+0;
}	
	if(gen_lvl[2]==2){
boezapas =boezapas-1;
lic_sila=3;
sila_armii=sila_armii+4;
sila_razvet=sila_razvet+2;
}	
	if(gen_lvl[2]==3){
boezapas =boezapas+2;
lic_sila=3;
sila_armii=sila_armii+5;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[2]==4){
boezapas =boezapas+4;
lic_sila=3;
sila_armii=sila_armii+10;
sila_razvet=sila_razvet+4;
}	
	if(gen_lvl[2]==5){
boezapas =boezapas+5;
lic_sila=3;
sila_armii=sila_armii+10;
sila_razvet=sila_razvet+5;
}
}else if(gen==4){
if(gen_lvl[3]==1){
boezapas =boezapas+0;
lic_sila=3;
sila_armii=sila_armii+2;
sila_razvet=sila_razvet+0;
}	
	if(gen_lvl[3]==2){
boezapas =boezapas+2;
lic_sila=3;
sila_armii=sila_armii+3;
sila_razvet=sila_razvet+1;
}	
	if(gen_lvl[3]==3){
boezapas =boezapas+4;
lic_sila=3;
sila_armii=sila_armii+4;
sila_razvet=sila_razvet+2;
}	
	if(gen_lvl[3]==4){
boezapas =boezapas+5;
lic_sila=3;
sila_armii=sila_armii+6;
sila_razvet=sila_razvet+3;
}	
	if(gen_lvl[3]==5){
boezapas =boezapas+8;
lic_sila=3;
sila_armii=sila_armii+10;
sila_razvet=sila_razvet+4;
}
}
system("pause");
system("cls");
//начало игры

bool game_s=true;
/*
int terit[100];
int lic_sila=0;
int sila_armii=0;
int sila_razvet=0;
boezapas
*/
system("mode con cols=70 lines=42");
lic_sila=0;
int sh[1000];


terit[0]=0;
terit[1]=0;
terit[2]=0;
terit[3]=0;
terit[4]=0;
terit[5]=0;
terit[6]=0;
terit[7]=0;
sh[80]=0;
sh[100]=4;
cout<<"\nКакой режим вы хотите запустить? \n1)Захват базы \n2)Контроль ключевых точек\n3)Оборона базы";
cout<<"\n ->";
//

ofstream  reg("res/parameters/gamelogic/reg.dat", ios::app);
reg.close();
ifstream reg1("res/parameters/gamelogic/reg.dat");
string tag4;
getline(reg1,tag4);
i3=atoi(tag4.c_str());


//
cin>>sh[1000];
int cik=0;
game_s=true;
system("cls");/*

game_s=true;*/
if(i3==1){
if(sh[1000]==3){
	
	terit[0]=1;	
	terit[1]=1;	
	terit[2]=1;	
	terit[3]=1;	
	terit[4]=1;	
	terit[5]=1;	
	terit[6]=1;	
	terit[7]=1;	
	terit[8]=1;	
	terit[9]=1;	
	terit[10]=1;	
	terit[11]=1;	
	terit[12]=1;
	game_s=true;
	system("cls");
	
ofstream oborona("res/parameters/gamelogic/ob.dat", ios::app);
oborona.close();
ifstream oborona1("res/parameters/gamelogic/ob.dat");
string tag5;
getline(oborona1,tag5);
int h12=atoi(tag5.c_str());
//
while(game_s==true){
	if(sh[0]!=4){	
	}else{
	cik++;
	}
	if(sh[100]!=4 ){
	}else{
	if(sh[80]==0){
	if(terit[0]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
		if(sh[80]==0){
	if(terit[1]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[2]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[3]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[4]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[5]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[6]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}
		if(sh[80]==0){
	if(terit[7]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
//

		if(sh[80]==0){
	if(terit[8]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
		if(sh[80]==0){
	if(terit[9]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
		if(sh[80]==0){
	if(terit[10]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
		if(sh[80]==0){
	if(terit[11]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
		if(sh[80]==0){
	if(terit[12]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}

//

}
}
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                Волна:"<<cik<<"#"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#____________________________________________________________________#"<<endl;
cout<<"#          #                   #               #                     #"<<endl;
cout<<"#          #                   #               #       3             #"<<endl;
cout<<"#          #                   #               #                     #"<<endl;
cout<<"#          #                   #      2        #######################"<<endl;
cout<<"#          #        1          #               #         #   #       #"<<endl;
cout<<"#-->       #                   #               #    4    # 5 #  6    #"<<endl;
cout<<"#-->       #                   #################         #   #       #"<<endl;
cout<<"#          #                                   #         #   #       #"<<endl;
cout<<"#          #                                   #######################"<<endl;
cout<<"########################                       #                     #"<<endl;
cout<<"#           #          #########################                     #"<<endl;
cout<<"#           #          #                       #         10          #"<<endl;
cout<<"#           ###        #                       #                     #"<<endl;
cout<<"#     7       #    8   #          9            #                     #"<<endl;
cout<<"#         #####        #####             #############################"<<endl;
cout<<"#         #             #  #             #           #               #"<<endl;
cout<<"######################### 1#             #  13       #               #"<<endl;
cout<<"#                       # 1#             #           #               #"<<endl;
cout<<"#                       #  #             #           #     Ш т а б   #"<<endl;
cout<<"#         11            #  ###########################               #"<<endl;
cout<<"#                       ####     12                  #               #"<<endl;
cout<<"#__________________________#_________________________#_______________#"<<endl;
cout<<"#                        ресурсы                                     #"<<endl;
cout<<"#  боезапас->"<<boezapas<<"; отряды ->"<<lic_sila<<"; сила армии->"<<sila_armii<<"; сила разведки "<<sila_razvet<<"       #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"\nВыбрать действие 1)Захват территории ; 2)Послать разведку 3)создать отряд \n4)Посмотреть захваченные территории\n5)Купить войска за монеты 6)Купить разведку за монеты";


cout<<"\n->";
cin>>sh[0];
if(sh[0]==5){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 2 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14++){
coin=coin-1;
sila_armii=sila_armii+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}
//


if(sh[0]==6){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 4 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg12=gg12*2;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
gg12=gg12/2;
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14=gg14+2){
coin=coin-2;
sila_razvet=sila_razvet+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}


//финал

if(cik==100){
	opit=opit+200;
	game_s=false;
	coin=coin+250;
system("pause");
system("cls");
cout<<"Победа !";

//

ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
	
	//



//


//



}

if(terit[0]==2 && terit[1]==2  && terit[2]==2  && terit[3]==2  && terit[4]==2  && terit[5]==2  && terit[6]==2  && terit[7]==2  && terit[8]==2  && terit[9]==2  && terit[10]==2  && terit[11]==2  && terit[12]==2 ){
cout<<"\nВраг штурмует штаб !";
Sleep(2500);
int wt=1 + rand() % 3;
	if(wt==2){
	cout<<"\nПротивник уничтожил ваш штаб\n";
	game_s=false;
	if(cik>=25 && cik <=35){
		opit=opit+30;
		//
		
		
ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
		
		//
		
		
		
		
		
		coin=coin+50;
	}else if(cik>=36 && cik<=50){
		opit=opit+60;
		
ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
		
	coin=coin+100;
	}else if(cik>=51 && cik<=69){
		//
		opit=opit+100;
		
ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
		
		//
		coin=coin+150;
	}else if(cik>=70 && cik<=99){
		opit=opit+200;
		ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
		
		coin=coin+200;
	}
	}else{
		cout<<"Оборона устояла, срочно отбейте сектора!\n";
	}
	system("pause");
	system("cls");
}

//финал
//просмотр территории
if(sh[0]==4){
	cout<<"\nЗахваченные территории ->";
	//

	
	//
	if(terit[0]==1){
		cout<<"1,";
	}
		
	if(terit[1]==1){
		cout<<"2,";
	}
		
	if(terit[2]==1){
		cout<<"3,";
	}
		
	if(terit[3]==1){
		cout<<"4,";
	}
		
	if(terit[4]==1){
		cout<<"5,";
	}
		
	if(terit[5]==1){
		cout<<"6,";
	}
		
	if(terit[6]==1){
		cout<<"7,";
	}
		
	if(terit[7]==1){
		cout<<"8,";
	}
			if(terit[8]==1){
		cout<<"9,";
	}
		if(terit[9]==1){
		cout<<"10,";
	}
		if(terit[10]==1){
		cout<<"11,";
	}
		if(terit[11]==1){
		cout<<"12,";
	}
		if(terit[12]==1){
		cout<<"13,";
	}
	cout<<endl;
	
	
}
//территории просмотр
if(sh[0]==3){
	if(boezapas<=0){
	cout<<"\nСлишком мало ресурсов!";
	}else{
	cout<<"\nСоздание новых боевых единиц";
	cout<<"\nКакой отряд создать?";
	cout<<"1)Отряд пехоты СТ(0.3);2)Танк СТ(0.5)3)Артиллерия СТ(0.7);\n4)Самолет СТ(1)";
	cout<<"\n->";
	cin>>sh[1];
	if(sh[1]==1){
	lic_sila++;
	boezapas=boezapas-0.3;	
	sh[2]++;//пехота;
	if(sh[2]==4){
	sh[2]=0;
	sila_armii++;
	lic_sila=lic_sila-4;
	}
	}

	if(sh[1]==2){
	lic_sila++;
	boezapas=boezapas-0.5;	
	sh[3]++;//танк;
	if(sh[3]==3){
	sh[3]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}
	
	
	if(sh[1]==3){
	lic_sila++;
	boezapas=boezapas-0.7;	
	sh[4]++;//артиллерия;
	if(sh[4]==2){
	sh[4]=0;
	sila_armii++;
	lic_sila=lic_sila-2;
	}
	}
	
	if(sh[1]==4){
	lic_sila++;
	boezapas=boezapas-1;	
	sh[5]++;//самолет;
	if(sh[5]==1){
	sh[5]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}





}
}


if(sh[0]==2){
	if(sila_razvet>0){
if(sh[80]==0){
sh[0]=0;
	cout<<"\nВыберите территорию";
	cout<<"\n->";
	cin>>sh[10];
	sila_razvet--;
	if(sh[10]==1){
	if(terit[0]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[0]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==2){
	if(terit[1]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[1]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==3){
	if(terit[2]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[2]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==4){
	if(terit[3]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[3]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==5){
	if(terit[4]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[4]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==6){
	if(terit[5]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[5]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==7){
	if(terit[6]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[6]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
//

if(sh[10]==9){
if(terit[8]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
if(terit[8]==0){
	cout<<"\nЭто ничейная территория";
	}
}

	if(sh[10]==10){
	if(terit[9]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[9]==0){
	cout<<"\nЭто ничейная территория";
	}
}

	if(sh[10]==11){
	if(terit[10]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[10]==0){
	cout<<"\nЭто ничейная территория";
	}
}

	if(sh[10]==12){
	if(terit[11]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[11]==0){
	cout<<"\nЭто ничейная территория";
	}
}

	if(sh[10]==13){
	if(terit[12]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[12]==0){
	cout<<"\nЭто ничейная территория";
	}
}

	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}

//
	
	
cout<<"\n";	
}
}else{
	cout<<"\nРазведка слишком слаба ";
}
}

if(sh[0]==4){
	
}else{
	h12++;
	ofstream oborona("res/parameters/gamelogic/ob.dat");
	oborona<<h12;
	oborona.close();
	cik++;
	sh[20]=0;
	int yt=1 + rand () % 2;
sh[30]=1 +rand() % 13;
sh[40]=0;
sh[66]=1+rand( )% 2;
if(sh[20]==0){
if(sh[40]==0){
	//
	for(int ty=0; ty<yt;yt=1 + rand () % 2){
	if(sh[30]==9){
	if(terit[8]==0){
	terit[8]=2;
	}
	if(sila_armii>0){
	if(terit[8]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[8]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[8]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[8]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[8]=2;
}
}	//

	if(sh[30]==10){
	if(terit[9]==0){
	terit[9]=2;
	}
	if(sila_armii>0){
	if(terit[9]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[9]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[9]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[9]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[9]=2;
}
}
	//
	
		if(sh[30]==11){
	if(terit[10]==0){
	terit[10]=2;
	}
	if(sila_armii>0){
	if(terit[10]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[10]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[10]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[10]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[10]=2;
}
}
//

	if(sh[30]==12){
	if(terit[11]==0){
	terit[11]=2;
	}
	if(sila_armii>0){
	if(terit[11]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[11]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[11]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[11]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[11]=2;
}
}
	
	//
	
		if(sh[30]==13){
	if(terit[12]==0){
	terit[12]=2;
	}
	if(sila_armii>0){
	if(terit[12]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[12]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[12]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[12]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[12]=2;
}
}
	
	//
	if(sh[30]==0){
	if(terit[0]==0){
	terit[0]=2;
	}
	if(sila_armii>0){
	if(terit[0]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[0]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[0]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[0]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[0]=2;
}
}
	
	if(sh[30]==1){
	if(terit[1]==0){
	terit[1]=2;
	}
	if(sila_armii>0){
	if(terit[1]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[1]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[1]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[1]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[1]=2;
}
}
	if(sh[30]==2){
	if(terit[2]==0){
	terit[2]=2;
	}
	if(sila_armii>0){
	if(terit[2]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);

if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[2]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[2]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[2]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[2]=2;
}
}
	
	if(sh[30]==3){
	if(terit[3]==0){
	terit[3]=2;
	}
	if(sila_armii>0){
	if(terit[3]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[3]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[3]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[3]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[3]=2;
}
}

	
	if(sh[30]==4){
	if(terit[4]==0){
	terit[4]=2;
	}
	if(sila_armii>0){
	if(terit[4]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[4]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[4]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[4]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[4]=2;
}
}
	
	if(sh[30]==5){
	if(terit[5]==0){
	terit[5]=2;
	}
	if(sila_armii>0){
	if(terit[5]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
	cout<<"\nНам удалось отстоять территорию";
	terit[5]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[5]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[5]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[5]=2;
}
}

	
	if(sh[30]==6){
	if(terit[6]==0){
	terit[6]=2;
	}
	if(sila_armii>0){
	if(terit[6]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[6]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[6]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[6]=2;
}
}
//
	if(sh[30]==7){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}
//


	if(sh[30]==8){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}	
}
}
}
	
}



if(sh[0]==1){
//конец врага


cout<<"\nКакую территорию атаковать?";
cout<<"->";
cin>>sh[50];
if(sila_armii>0){
sila_armii--;
sh[60]=1+rand()%2;


if(sh[50]==1){
	if(terit[0]==0){
	cout<<"\nТерритория захвачена";
	terit[0]=1;
	}
	if(terit[0]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[0]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[0]=2;
		}
	}

}
//



if(sh[50]==9){
	if(terit[8]==0){
	cout<<"\nТерритория захвачена";
	terit[8]=1;
	}
	if(terit[8]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[8]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[8]=2;
		}
	}

}



if(sh[50]==10){
	if(terit[9]==0){
	cout<<"\nТерритория захвачена";
	terit[9]=1;
	}
	if(terit[9]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[9]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[9]=2;
		}
	}

}



if(sh[50]==11){
	if(terit[10]==0){
	cout<<"\nТерритория захвачена";
	terit[10]=1;
	}
	if(terit[10]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[10]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[10]=2;
		}
	}

}



if(sh[50]==12){
	if(terit[11]==0){
	cout<<"\nТерритория захвачена";
	terit[11]=1;
	}
	if(terit[11]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[11]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[11]=2;
		}
	}

}



if(sh[50]==13){
	if(terit[12]==0){
	cout<<"\nТерритория захвачена";
	terit[12]=1;
	}
	if(terit[12]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[12]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[12]=2;
		}
	}

}





//

if(sh[50]==2){
	if(terit[1]==0){
	cout<<"\nТерритория захвачена";
	terit[1]=1;
	}
	if(terit[1]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[1]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[1]=2;
		}
	}

}

if(sh[50]==3){
	if(terit[2]==0){
	cout<<"\nТерритория захвачена";
	terit[2]=1;
	}
	if(terit[2]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[2]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[2]=2;
		}
	}

}

if(sh[50]==4){
	if(terit[3]==0){
	cout<<"\nТерритория захвачена";
	terit[3]=1;
	}
	if(terit[3]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[3]=2;
		}
	}

}

if(sh[50]==5){
	if(terit[4]==0){
	cout<<"\nТерритория захвачена";
	terit[4]=1;
	}
	if(terit[4]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[4]=2;
		}
	}

}

if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}

if(sh[50]==6){
	if(terit[5]==0){
	cout<<"\nТерритория захвачена";
	terit[5]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[5]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[5]=2;
		}
	}

}

if(sh[50]==7){
	if(terit[6]==0){
	cout<<"\nТерритория захвачена";
	terit[6]=1;
	}
	if(terit[6]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[6]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[6]=2;
		}
	}

}
if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}



}else{
	cout<<"\nАрмия Слишком мала для наступления";
}
}
system("pause");
system("cls");

}//цикл

}
}else if(i3==0){
	a=a+3;
	cout<<"\nДанный режим не был куплен в магазине\nКупите и возращайтесь\n";
}
//
a=a+3;

//
if(sh[1000]==1){
cout<<"\nКакую карту запустить?1)Царицын 2)Якутск";
cout<<"\n->";
cin>>sh[900];
game_s=true;
if(sh[900]==1){
	game_s=true;
	system("cls");
while(game_s==true){
	if(sh[100]!=4 ){
	}else{
	if(sh[80]==0){
	if(terit[0]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
		if(sh[80]==0){
	if(terit[1]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[2]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[3]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[4]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[5]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[6]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}
		if(sh[80]==0){
	if(terit[7]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
}
}

cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#____________________________________________________________________#"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#   ШТАБ      #                         #      #                     #"<<endl;
cout<<"#             #       1                 #   2  #           3         #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"###############                         #      #                     #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#             #                         #      #                     #"<<endl;
cout<<"#             ###########################      #######################"<<endl;
cout<<"#    4        #                 #              #  8                  #"<<endl;
cout<<"#             #                 #              #                     #"<<endl;
cout<<"#             #                 #              #     #################"<<endl;
cout<<"#             #                 #              #     #               #"<<endl;
cout<<"#             #                 #              #     #               #"<<endl;
cout<<"###############     6           #              #     #               #"<<endl;
cout<<"#             #                 ######################   ВРАГ        #"<<endl;
cout<<"#             #                 #                    #               #"<<endl;
cout<<"#     5       #                 #        7           #               #"<<endl;
cout<<"#             #                 #                    #               #"<<endl;
cout<<"#_____________#_________________#____________________#_______________#"<<endl;
cout<<"#                        ресурсы                                     #"<<endl;
cout<<"#  боезапас->"<<boezapas<<"; отряды ->"<<lic_sila<<"; сила армии->"<<sila_armii<<"; сила разведки "<<sila_razvet<<"       #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"\nВыбрать действие 1)Захват территории ; 2)Послать разведку 3)создать отряд \n4)Посмотреть захваченные территории\n5)Купить войска за монеты 6)Купить разведку за монеты";

if(terit[0]==1 && terit[1]==1 && terit[2]==1 && terit[3]==1 && terit[4]==1 && terit[5]==1 && terit[6]==1 && terit[7]==1){
if(sila_armii==4 && boezapas==10){
cout<<"\nХотите начать штурм на шттаб врага ?";
cin>>sh[71];

//
if(sh[71]==1){
sh[75]=1 + rand() % 3;
if(sh[75]==2){
cout<<"\nМы захватили вражеский штаб";
sh[80]=1;
game_s=false;
coin=coin+50;
//
opit=opit+40;
ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}

//
}else{
cout<<"\nШтурм неудачен";
}	
}
Sleep(3000);
}
}
if(sh[80]==1){
sh[0]=0;
}else{
cout<<"\n->";
cin>>sh[0];

//

//
if(sh[0]==5){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 2 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14++){
coin=coin-1;
sila_armii=sila_armii+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}
//


if(sh[0]==6){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 4 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg12=gg12*2;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
gg12=gg12/2;
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14=gg14+2){
coin=coin-2;
sila_razvet=sila_razvet+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}



//
}
//просмотр территории
if(sh[0]==4){
	cout<<"\nЗахваченные территории ->";
	if(terit[0]==1){
		cout<<"1,";
	}
		
	if(terit[1]==1){
		cout<<"2,";
	}
		
	if(terit[2]==1){
		cout<<"3,";
	}
		
	if(terit[3]==1){
		cout<<"4,";
	}
		
	if(terit[4]==1){
		cout<<"5,";
	}
		
	if(terit[5]==1){
		cout<<"6,";
	}
		
	if(terit[6]==1){
		cout<<"7,";
	}
		
	if(terit[7]==1){
		cout<<"8,";
	}
	
	
	
}
//территории просмотр
if(sh[0]==3){
	if(boezapas<=0){
	cout<<"\nСлишком мало ресурсов!";
	}else{
	cout<<"\nСоздание новых боевых единиц";
	cout<<"\nКакой отряд создать?";
	cout<<"1)Отряд пехоты СТ(0.3);2)Танк СТ(0.5)3)Артиллерия СТ(0.7);\n4)Самолет СТ(1)";
	cout<<"\n->";
	cin>>sh[1];
	if(sh[1]==1){
	lic_sila++;
	boezapas=boezapas-0.3;	
	sh[2]++;//пехота;
	if(sh[2]==4){
	sh[2]=0;
	sila_armii++;
	lic_sila=lic_sila-4;
	}
	}

	if(sh[1]==2){
	lic_sila++;
	boezapas=boezapas-0.5;	
	sh[3]++;//танк;
	if(sh[3]==3){
	sh[3]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}
	
	
	if(sh[1]==3){
	lic_sila++;
	boezapas=boezapas-0.7;	
	sh[4]++;//артиллерия;
	if(sh[4]==2){
	sh[4]=0;
	sila_armii++;
	lic_sila=lic_sila-2;
	}
	}
	
	if(sh[1]==4){
	lic_sila++;
	boezapas=boezapas-1;	
	sh[5]++;//самолет;
	if(sh[5]==1){
	sh[5]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}





}
}


if(sh[0]==2){
	if(sila_razvet>0){
if(sh[80]==0){
sh[0]=0;
	cout<<"\nВыберите территорию";
	cout<<"\n->";
	cin>>sh[10];
	sila_razvet--;
	if(sh[10]==1){
	if(terit[0]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[0]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==2){
	if(terit[1]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[1]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==3){
	if(terit[2]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[2]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==4){
	if(terit[3]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[3]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==5){
	if(terit[4]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[4]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==6){
	if(terit[5]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[5]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==7){
	if(terit[6]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[6]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
	
cout<<"\n";	
}
}else{
	cout<<"\nРазведка слишком слаба ";
}
}
if(sh[0]==1){
sh[20]=0;
sh[30]=1 +rand() % 8;
sh[40]=0;
sh[66]=1+rand( )% 2;
if(sh[20]==0){
if(sh[40]==0){
	
	if(sh[30]==0){
	if(terit[0]==0){
	terit[0]=2;
	}
	if(sila_armii>0){
	if(terit[0]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[0]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[0]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[0]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[0]=2;
}
}
	
	if(sh[30]==1){
	if(terit[1]==0){
	terit[1]=2;
	}
	if(sila_armii>0){
	if(terit[1]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[1]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[1]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[1]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[1]=2;
}
}
	if(sh[30]==2){
	if(terit[2]==0){
	terit[2]=2;
	}
	if(sila_armii>0){
	if(terit[2]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);

if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[2]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[2]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[2]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[2]=2;
}
}
	
	if(sh[30]==3){
	if(terit[3]==0){
	terit[3]=2;
	}
	if(sila_armii>0){
	if(terit[3]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[3]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[3]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[3]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[3]=2;
}
}

	
	if(sh[30]==4){
	if(terit[4]==0){
	terit[4]=2;
	}
	if(sila_armii>0){
	if(terit[4]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[4]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[4]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[4]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[4]=2;
}
}
	
	if(sh[30]==5){
	if(terit[5]==0){
	terit[5]=2;
	}
	if(sila_armii>0){
	if(terit[5]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
	cout<<"\nНам удалось отстоять территорию";
	terit[5]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[5]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[5]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[5]=2;
}
}

	
	if(sh[30]==6){
	if(terit[6]==0){
	terit[6]=2;
	}
	if(sila_armii>0){
	if(terit[6]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[6]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[6]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[6]=2;
}
}
//
	if(sh[30]==7){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}
//


	if(sh[30]==8){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}	

}
}//конец врага


cout<<"\nКакую территорию атаковать?";
cout<<"->";
cin>>sh[50];
if(sila_armii>0){
sila_armii--;
sh[60]=1+rand()%2;
if(sh[50]==1){
	if(terit[0]==0){
	cout<<"\nТерритория захвачена";
	terit[0]=1;
	}
	if(terit[0]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[0]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[0]=2;
		}
	}

}

if(sh[50]==2){
	if(terit[1]==0){
	cout<<"\nТерритория захвачена";
	terit[1]=1;
	}
	if(terit[1]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[1]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[1]=2;
		}
	}

}

if(sh[50]==3){
	if(terit[2]==0){
	cout<<"\nТерритория захвачена";
	terit[2]=1;
	}
	if(terit[2]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[2]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[2]=2;
		}
	}

}

if(sh[50]==4){
	if(terit[3]==0){
	cout<<"\nТерритория захвачена";
	terit[3]=1;
	}
	if(terit[3]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[3]=2;
		}
	}

}

if(sh[50]==5){
	if(terit[4]==0){
	cout<<"\nТерритория захвачена";
	terit[4]=1;
	}
	if(terit[4]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[4]=2;
		}
	}

}

if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}

if(sh[50]==6){
	if(terit[5]==0){
	cout<<"\nТерритория захвачена";
	terit[5]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[5]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[5]=2;
		}
	}

}

if(sh[50]==7){
	if(terit[6]==0){
	cout<<"\nТерритория захвачена";
	terit[6]=1;
	}
	if(terit[6]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[6]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[6]=2;
		}
	}

}if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}



}else{
	cout<<"\nАрмия Слишком мала для наступления";
}
}
system("pause");
system("cls");

}//цикл

}//КОНЕЦ КАРТЫ ЦАРИЦЫН
game_s=true;
system("cls");
if(sh[900]==2){
while(game_s==true){
	if(sh[100]!=4 ){
	}else{
	if(sh[80]==0){
	//дополнительные терит
		if(terit[8]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[9]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[10]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[11]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[12]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[13]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[14]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[15]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	//терит
	if(terit[0]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
		if(sh[80]==0){
	if(terit[1]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[2]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[3]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[4]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[5]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[6]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}
		if(sh[80]==0){
	if(terit[7]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
}
}

cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#____________________________________________________________________#"<<endl;
cout<<"#         #                   #             #           #            #"<<endl;
cout<<"#         #                   #    2        #           #            #"<<endl;
cout<<"#         #                   ###############           #            #"<<endl;
cout<<"#         #         1         #     3       #           #            #"<<endl;
cout<<"# штаб    #                   #             #   6       #   7        #"<<endl;
cout<<"#         #                   ###############           #            #"<<endl;
cout<<"#         #                   #   4  #   5  #           #            #"<<endl;
cout<<"#         #                   #      #      #############            #"<<endl;
cout<<"#############################################           #            #"<<endl;
cout<<"#                     #                                 ##############"<<endl;
cout<<"#                     #           9                     #            #"<<endl;
cout<<"#                     ###################################    10      #"<<endl;
cout<<"#      8               #         #   12        #        #            #"<<endl;
cout<<"#                      #         #         #####   14   #            #"<<endl;
cout<<"#                      #  11     ###########   #        ##############"<<endl;
cout<<"########################              #    13  #####    #            #"<<endl;
cout<<"#                      #              #            #    #            #"<<endl;
cout<<"#                      ##################################  враг      #"<<endl;
cout<<"#      15              #                                #            #"<<endl;
cout<<"#                      #             16                 #            #"<<endl;
cout<<"#                      #                                #            #"<<endl;
cout<<"#______________________#________________________________#____________#"<<endl;
cout<<"#                        ресурсы                                     #"<<endl;
cout<<"#  боезапас->"<<boezapas<<"; отряды ->"<<lic_sila<<"; сила армии->"<<sila_armii<<"; сила разведки "<<sila_razvet<<"       #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"\nВыбрать действие 1)Захват территории ; 2)Послать разведку 3)создать отряд \n4)Посмотреть захваченные территории \nКупить войска за монеты 6)Купить разведку за Монеты";

if(terit[0]==1 && terit[1]==1 && terit[2]==1 && terit[3]==1 && terit[4]==1 && terit[5]==1 && terit[6]==1 && terit[7]==1 && terit[8]==1 && terit[9]==1 && terit[10]==1 && terit[11]==1 && terit[12]==1 && terit[13]==1 && terit[14]==1 && terit[15]==1){
if(sila_armii==4 && boezapas==10){
cout<<"\nХотите начать штурм на шттаб врага ?";
cin>>sh[71];
if(sh[71]==1){
sh[75]=1 + rand() % 3;
if(sh[75]==2){
cout<<"\nМы захватили вражеский штаб";
sh[80]=1;
game_s=false;
coin=coin+ 50;
opit=opit+50;


}else{
cout<<"\nШтурм неудачен";
}	
}
Sleep(3000);
}
}
if(sh[80]==1){
sh[0]=0;
}else{
cout<<"\n->";
cin>>sh[0];

if(sh[0]==5){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 2 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14++){
coin=coin-1;
sila_armii=sila_armii+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}
//


if(sh[0]==6){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 4 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg12=gg12*2;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
gg12=gg12/2;
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14=gg14+2){
coin=coin-2;
sila_razvet=sila_razvet+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}


}
//просмотр территории
if(sh[0]==4){
	cout<<"\nЗахваченные территории ->";
	if(terit[0]==1){
		cout<<"1,";
	}
		
	if(terit[1]==1){
		cout<<"2,";
	}
		
	if(terit[2]==1){
		cout<<"3,";
	}
		
	if(terit[3]==1){
		cout<<"4,";
	}
		
	if(terit[4]==1){
		cout<<"5,";
	}
		
	if(terit[5]==1){
		cout<<"6,";
	}
		
	if(terit[6]==1){
		cout<<"7,";
	}
		
	if(terit[7]==1){
		cout<<"8,";
	}
	cout<<endl;
	//новые териты
		if(terit[8]==1){
		cout<<"9,";
	}
	
		if(terit[9]==1){
		cout<<"10,";
	}
	
		if(terit[10]==1){
		cout<<"11,";
	}
	
		if(terit[11]==1){
		cout<<"12,";
	}
	
		if(terit[12]==1){
		cout<<"13,";
	}
	
		if(terit[13]==1){
		cout<<"14,";
	}
	
		if(terit[14]==1){
		cout<<"15,";
	}
	
		if(terit[15]==1){
		cout<<"16,";
	}
	
	
	//новые териты
	
	
}
//территории просмотр
if(sh[0]==3){
	if(boezapas<=0){
	cout<<"\nСлишком мало ресурсов!";
	}else{
	cout<<"\nСоздание новых боевых единиц";
	cout<<"\nКакой отряд создать?";
	cout<<"1)Отряд пехоты СТ(0.3);2)Танк СТ(0.5)3)Артиллерия СТ(0.7);\n4)Самолет СТ(1)";
	cout<<"\n->";
	cin>>sh[1];
	if(sh[1]==1){
	lic_sila++;
	boezapas=boezapas-0.3;	
	sh[2]++;//пехота;
	if(sh[2]==4){
	sh[2]=0;
	sila_armii++;
	lic_sila=lic_sila-4;
	}
	}

	if(sh[1]==2){
	lic_sila++;
	boezapas=boezapas-0.5;	
	sh[3]++;//танк;
	if(sh[3]==3){
	sh[3]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}
	
	
	if(sh[1]==3){
	lic_sila++;
	boezapas=boezapas-0.7;	
	sh[4]++;//артиллерия;
	if(sh[4]==2){
	sh[4]=0;
	sila_armii++;
	lic_sila=lic_sila-2;
	}
	}
	
	if(sh[1]==4){
	lic_sila++;
	boezapas=boezapas-1;	
	sh[5]++;//самолет;
	if(sh[5]==1){
	sh[5]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}





}
}


if(sh[0]==2){
	if(sila_razvet>0){
if(sh[80]==0){
sh[0]=0;
	cout<<"\nВыберите территорию";
	cout<<"\n->";
	cin>>sh[10];
	sila_razvet--;
	//Новые Территории
	if(sh[10]==9){
	if(terit[8]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[8]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==10){
	if(terit[9]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[9]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==11){
	if(terit[10]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[10]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==12){
	if(terit[11]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[11]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==13){
	if(terit[12]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[12]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==14){
	if(terit[13]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[13]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==15){
	if(terit[14]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[14]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==16){
	if(terit[15]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[15]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
	
	//Новые Территории
	if(sh[10]==1){
	if(terit[0]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[0]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


	if(sh[10]==2){
	if(terit[1]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[1]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==3){
	if(terit[2]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[2]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==4){
	if(terit[3]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[3]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==5){
	if(terit[4]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[4]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==6){
	if(terit[5]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[5]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==7){
	if(terit[6]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[6]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
	
cout<<"\n";	
}
}else{
	cout<<"\nРазведка слишком слаба ";
}
}
if(sh[0]==1){
sh[20]=0;
sh[30]=1 + rand() % 16;
sh[40]=0;
sh[66]=1+rand()% 2;
if(sh[20]==0){
if(sh[40]==0){
	//Новый скрипт
			if(sh[30]==16){
	if(terit[16]==0){
	terit[16]=2;
	}
	if(sila_armii>0){
	if(terit[16]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[16]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[16]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[16]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[16]=2;
}
}
	//
		if(sh[30]==8){
	if(terit[8]==0){
	terit[8]=2;
	}
	if(sila_armii>0){
	if(terit[8]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[8]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[8]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[8]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[8]=2;
}
}
//


	if(sh[30]==9){
	if(terit[9]==0){
	terit[9]=2;
	}
	if(sila_armii>0){
	if(terit[9]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[9]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[9]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[9]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[9]=2;
}
}
//

	if(sh[30]==10){
	if(terit[10]==0){
	terit[10]=2;
	}
	if(sila_armii>0){
	if(terit[10]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[10]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[10]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[10]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[10]=2;
}
}
//

	if(sh[30]==11){
	if(terit[11]==0){
	terit[11]=2;
	}
	if(sila_armii>0){
	if(terit[11]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[11]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[11]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[11]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[11]=2;
}
}

//

	if(sh[30]==12){
	if(terit[12]==0){
	terit[12]=2;
	}
	if(sila_armii>0){
	if(terit[12]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[12]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[12]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[12]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[12]=2;
}
}
//
	if(sh[30]==13){
	if(terit[13]==0){
	terit[13]=2;
	}
	if(sila_armii>0){
	if(terit[13]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[13]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[13]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[13]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[13]=2;
}
}

//

	if(sh[30]==14){
	if(terit[14]==0){
	terit[14]=2;
	}
	if(sila_armii>0){
	if(terit[14]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[14]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[14]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[14]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[14]=2;
}
}
//
	if(sh[30]==15){
	if(terit[15]==0){
	terit[15]=2;
	}
	if(sila_armii>0){
	if(terit[15]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[15]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[15]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[15]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[15]=2;
}
}


	//Новый скрипт
	if(sh[30]==0){
	if(terit[0]==0){
	terit[0]=2;
	}
	if(sila_armii>0){
	if(terit[0]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[0]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[0]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[0]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[0]=2;
}
}
	//конец 
	if(sh[30]==1){
	if(terit[1]==0){
	terit[1]=2;
	}
	if(sila_armii>0){
	if(terit[1]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[1]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[1]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[1]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[1]=2;
}
}
	if(sh[30]==2){
	if(terit[2]==0){
	terit[2]=2;
	}
	if(sila_armii>0){
	if(terit[2]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);

if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[2]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[2]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[2]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[2]=2;
}
}
	
	if(sh[30]==3){
	if(terit[3]==0){
	terit[3]=2;
	}
	if(sila_armii>0){
	if(terit[3]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[3]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[3]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[3]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[3]=2;
}
}

	
	if(sh[30]==4){
	if(terit[4]==0){
	terit[4]=2;
	}
	if(sila_armii>0){
	if(terit[4]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[4]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[4]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[4]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[4]=2;
}
}
	
	if(sh[30]==5){
	if(terit[5]==0){
	terit[5]=2;
	}
	if(sila_armii>0){
	if(terit[5]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
	cout<<"\nНам удалось отстоять территорию";
	terit[5]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[5]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[5]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[5]=2;
}
}

	
	if(sh[30]==6){
	if(terit[6]==0){
	terit[6]=2;
	}
	if(sila_armii>0){
	if(terit[6]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[6]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[6]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[6]=2;
}
}
//
	if(sh[30]==7){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}
//
	

}
}//конец врага


cout<<"\nКакую территорию атаковать?";
cout<<"->";
cin>>sh[50];
if(sila_armii>0){
sila_armii--;
sh[60]=1+rand()%2;
//НОВОЕ
if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}

if(sh[50]==9){
	if(terit[8]==0){
	cout<<"\nТерритория захвачена";
	terit[8]=1;
	}
	if(terit[8]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[8]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[8]=2;
		}
	}

}

if(sh[50]==10){
	if(terit[9]==0){
	cout<<"\nТерритория захвачена";
	terit[9]=1;
	}
	if(terit[9]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[9]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[9]=2;
		}
	}

}

if(sh[50]==11){
	if(terit[10]==0){
	cout<<"\nТерритория захвачена";
	terit[10]=1;
	}
	if(terit[10]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[10]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[10]=2;
		}
	}

}

if(sh[50]==12){
	if(terit[11]==0){
	cout<<"\nТерритория захвачена";
	terit[11]=1;
	}
	if(terit[11]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[11]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[11]=2;
		}
	}

}

if(sh[50]==13){
	if(terit[12]==0){
	cout<<"\nТерритория захвачена";
	terit[12]=1;
	}
	if(terit[12]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[12]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[12]=2;
		}
	}

}

if(sh[50]==14){
	if(terit[13]==0){
	cout<<"\nТерритория захвачена";
	terit[13]=1;
	}
	if(terit[13]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[13]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[13]=2;
		}
	}

}

if(sh[50]==15){
	if(terit[14]==0){
	cout<<"\nТерритория захвачена";
	terit[14]=1;
	}
	if(terit[14]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[14]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[14]=2;
		}
	}

}
if(sh[50]==16){
	if(terit[15]==0){
	cout<<"\nТерритория захвачена";
	terit[15]=1;
	}
	if(terit[15]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[15]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[15]=2;
		}
	}

}

//НОВОЕ
if(sh[50]==1){
	if(terit[0]==0){
	cout<<"\nТерритория захвачена";
	terit[0]=1;
	}
	if(terit[0]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[0]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[0]=2;
		}
	}

}

if(sh[50]==2){
	if(terit[1]==0){
	cout<<"\nТерритория захвачена";
	terit[1]=1;
	}
	if(terit[1]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[1]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[1]=2;
		}
	}

}

if(sh[50]==3){
	if(terit[2]==0){
	cout<<"\nТерритория захвачена";
	terit[2]=1;
	}
	if(terit[2]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[2]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[2]=2;
		}
	}

}

if(sh[50]==4){
	if(terit[3]==0){
	cout<<"\nТерритория захвачена";
	terit[3]=1;
	}
	if(terit[3]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[3]=2;
		}
	}

}

if(sh[50]==5){
	if(terit[4]==0){
	cout<<"\nТерритория захвачена";
	terit[4]=1;
	}
	if(terit[4]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[4]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[4]=2;
		}
	}

}

if(sh[50]==6){
	if(terit[5]==0){
	cout<<"\nТерритория захвачена";
	terit[5]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[5]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[5]=2;
		}
	}

}

if(sh[50]==7){
	if(terit[6]==0){
	cout<<"\nТерритория захвачена";
	terit[6]=1;
	}
	if(terit[6]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[6]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[6]=2;
		}
	}

}if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}



}else{
	cout<<"\nАрмия Слишком мала для наступления";
}
}
cout<<"\n";
system("pause");
system("cls");

}//цикл

	
}//КОНЕЦ КАРТЫ ЯКУТСК
}//КОНЕЦ ПЕРВОГО РЕЖИМА
if(sh[1000]==2){
	int enemy=100;
	int player=100;
	system("cls");
	game_s=true;
	while(game_s==true){
	if(sh[100]!=4 ){
		}else{
	if(sh[80]==0){
	//дополнительные терит
		if(terit[8]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[9]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[10]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[11]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[12]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[13]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[14]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	
		if(terit[15]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	//терит
	if(terit[0]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
		if(sh[80]==0){
	if(terit[1]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[2]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[3]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[4]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[5]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}		if(sh[80]==0){
	if(terit[6]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
}
		if(sh[80]==0){
	if(terit[7]==1){
		boezapas=boezapas+0.1;
		sila_razvet=sila_razvet+0.05;
	}
	

}
}
	
	
	}



cout<<"######################################################################"<<endl;
cout<<"#                         CWS                       Очки врага :"<<enemy<<"  #"<<endl;
cout<<"#                   Civil War Simulation             Твои очки :"<<player<<"  #"<<endl;
cout<<"#____________________________________________________________________#"<<endl;
cout<<"#        #        #         #           #          #                 #"<<endl;
cout<<"#        #        #         #           #          #                 #"<<endl;
cout<<"#        #        #    2    #     3     #     4    #         5       #"<<endl;
cout<<"# ВРАГ   #   1    #         #           #          #                 #"<<endl;
cout<<"#        #        ###########           ##############################"<<endl;
cout<<"#        #        #         #           #           #                #"<<endl;
cout<<"#        #        #         #############           #                #"<<endl;
cout<<"###################         #      *    #           #                #"<<endl;
cout<<"#              #      7     #     *1*   #     8     #     9          #"<<endl;
cout<<"#     6        #            #      *    #           #                #"<<endl;
cout<<"#              #            ##########################################"<<endl;
cout<<"##############################          15           #               #"<<endl;
cout<<"#       10          #        #                       #    16         #"<<endl;
cout<<"#                   #        #########################               #"<<endl;
cout<<"#                   #         #             #         ################"<<endl;
cout<<"#                   #         #    14       #                        #"<<endl;
cout<<"#                   #         #             #                        #"<<endl;
cout<<"#####################  12     #             #        штаб            #"<<endl;
cout<<"#                   #         ###############                        #"<<endl;
cout<<"#        11         #         #             #                        #"<<endl;
cout<<"#                   #         #      13     #                        #"<<endl;
cout<<"#___________________#_________#_____________#________________________#"<<endl;
cout<<"#                        ресурсы                                     #"<<endl;
cout<<"#  боезапас->"<<boezapas<<"; отряды ->"<<lic_sila<<"; сила армии->"<<sila_armii<<"; сила разведки "<<sila_razvet<<"       #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"\nВыбрать действие 1)Захват территории ; 2)Послать разведку \n3)создать отряд 4)Посмотреть захваченные территории\n 5)Захватить ключевую точку\n6)Купить войска за монеты 7) Купить разведку за монеты";

cout<<"\n->";
cin>>sh[0];
//

if(sh[0]==6){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 2 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14++){
coin=coin-1;
sila_armii=sila_armii+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}
//


if(sh[0]==7){
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	//
cout<<"\nСколько хотите приобрести?\nМонет:"<<coin<<"\n";
cout<<"1 = 4 монеты";
cout<<"\n->";
int gg12;
int gg13=0;

cin>>gg12;
gg12=gg12*2;
gg13-gg12;//от нуля отнимаем значение
coin=coin-gg12;	//от монет отнимаем значение
if(coin<=0){
cout<<"\nМонет недостаточно для покупки\n";
gg12=gg12/2;
coin=coin+gg12;
}else{
for(int gg14=0;gg14<gg12;gg14=gg14+2){
coin=coin-2;
sila_razvet=sila_razvet+1;
}
}
	ofstream  coi10("res/parameters/gamelogic/c.dat");
	coi10<<coin;
	coi10.close();
}



//

if(terit[14]==2 && terit[7]==2 && terit[6]==2 && terit[2]==2){
	terit[100]=2;
}

if(terit[100]==1){
	player=player+2;
	enemy=enemy-2;
}
if(terit[100]==2){
	player=player-2;
	enemy=enemy+2;
}
if(enemy==0){
//	
opit=opit+40;	
	
ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
string geny;
gvu.close();
ifstream gvu3("res/parameters/gamelogic/player.dat");
getline(gvu3,geny);
lvl_p=atoi(geny.c_str());

	//
	
ofstream  gvh("res/parameters/gamelogic/player_o.dat", ios::app);
string geny1;
gvh.close();
ifstream gvu9("res/parameters/gamelogic/player_o.dat");
getline(gvu9,geny1);
opit=atoi(geny.c_str());



//
if(lvl_p==1){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=200){
	opit=opit-200;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}

if(lvl_p==2){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=500){
	opit=opit-500;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==3){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
if(opit>=1000){
opit=opit-1000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==4){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=2000){
	opit=opit-2000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}


if(lvl_p==5){
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	if(opit>=5000){
	opit=opit-5000;
	lvl_p=lvl_p+1;
	cout<<"\nУровень повышен\n";
	ofstream o10("res/parameters/gamelogic/player.dat");
	o10<<lvl_p;
ofstream o9("res/parameters/gamelogic/player_o.dat");
o9<<opit;
o9.close();
	
	}
}
if(lvl_p==6){
	cout<<"\nУже достигнут максимальный уровень\n";
}
	
//	
coin=coin+100;
system("cls");
cout<<"Победа !";
Sleep(2000);
system("cls");
game_s=false;
}
if(player==0){

system("cls");
cout<<"Проигрыш !";
Sleep(2000);
system("cls");
game_s=false;
}

if(sh[0]==5){
	if(terit[14]==1 && terit[7]==1 && terit[6]==1 && terit[2]==1 ){
	cout<<"\nКлючевая точка захвачена";
	terit[100]=1;
	}else{
		cout<<"\nНе захвачены оборонительные учатки :";
	if(terit[14]!=1){
		cout<<"15 ,";
	}
	
	if(terit[7]!=1){
		cout<<"8 ,";
	}
	if(terit[6]!=1){
		cout<<"7 ,";
	}
	if(terit[2]!=1){
		cout<<"3 ,";
	}
	
	
	}
}
//просмотр территории
if(sh[0]==4){
	cout<<"\nЗахваченные территории ->";
	if(terit[0]==1){
		cout<<"1,";
	}
		
	if(terit[1]==1){
		cout<<"2,";
	}
		
	if(terit[2]==1){
		cout<<"3,";
	}
		
	if(terit[3]==1){
		cout<<"4,";
	}
		
	if(terit[4]==1){
		cout<<"5,";
	}
		
	if(terit[5]==1){
		cout<<"6,";
	}
		
	if(terit[6]==1){
		cout<<"7,";
	}
		
	if(terit[7]==1){
		cout<<"8,";
	}
	cout<<endl;
	//новые териты
		if(terit[8]==1){
		cout<<"9,";
	}
	
		if(terit[9]==1){
		cout<<"10,";
	}
	
		if(terit[10]==1){
		cout<<"11,";
	}
	
		if(terit[11]==1){
		cout<<"12,";
	}
	
		if(terit[12]==1){
		cout<<"13,";
	}
	
		if(terit[13]==1){
		cout<<"14,";
	}
	
		if(terit[14]==1){
		cout<<"15,";
	}
	
		if(terit[15]==1){
		cout<<"16,";
	}
	
	
	//новые териты
	
	
}
//территории просмотр
if(sh[0]==3){
	if(boezapas<=0){
	cout<<"\nСлишком мало ресурсов!";
	}else{
	cout<<"\nСоздание новых боевых единиц";
	cout<<"\nКакой отряд создать?";
	cout<<"1)Отряд пехоты СТ(0.3);2)Танк СТ(0.5)3)Артиллерия СТ(0.7);\n4)Самолет СТ(1)";
	cout<<"\n->";
	cin>>sh[1];
	if(sh[1]==1){
	lic_sila++;
	boezapas=boezapas-0.3;	
	sh[2]++;//пехота;
	if(sh[2]==4){
	sh[2]=0;
	sila_armii++;
	lic_sila=lic_sila-4;
	}
	}

	if(sh[1]==2){
	lic_sila++;
	boezapas=boezapas-0.5;	
	sh[3]++;//танк;
	if(sh[3]==3){
	sh[3]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}
	
	
	if(sh[1]==3){
	lic_sila++;
	boezapas=boezapas-0.7;	
	sh[4]++;//артиллерия;
	if(sh[4]==2){
	sh[4]=0;
	sila_armii++;
	lic_sila=lic_sila-2;
	}
	}
	
	if(sh[1]==4){
	lic_sila++;
	boezapas=boezapas-1;	
	sh[5]++;//самолет;
	if(sh[5]==1){
	sh[5]=0;
	sila_armii++;
	lic_sila=lic_sila-3;
	}
	}





}
}


if(sh[0]==2){
	if(sila_razvet>0){
if(sh[80]==0){
sh[0]=0;
	cout<<"\nВыберите территорию";
	cout<<"\n->";
	cin>>sh[10];
	sila_razvet--;
	//Новые Территории
	if(sh[10]==9){
	if(terit[8]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[8]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==10){
	if(terit[9]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[9]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==11){
	if(terit[10]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[10]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==12){
	if(terit[11]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[11]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==13){
	if(terit[12]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[12]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


if(sh[10]==14){
	if(terit[13]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[13]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==15){
	if(terit[14]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[14]==0){
	cout<<"\nЭто ничейная территория";
	}
}	

if(sh[10]==16){
	if(terit[15]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[15]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
	
	//Новые Территории
	if(sh[10]==1){
	if(terit[0]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[0]==0){
	cout<<"\nЭто ничейная территория";
	}
}	


	if(sh[10]==2){
	if(terit[1]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[1]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==3){
	if(terit[2]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[2]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==4){
	if(terit[3]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[3]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==5){
	if(terit[4]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[4]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==6){
	if(terit[5]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[5]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==7){
	if(terit[6]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[6]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	if(sh[10]==8){
	if(terit[7]==2){
	cout<<"\n Противник контролирует этот сектор ";
	}
	if(terit[7]==0){
	cout<<"\nЭто ничейная территория";
	}
}	
	
	
cout<<"\n";	
}
}else{
	cout<<"\nРазведка слишком слаба ";
}
}
if(sh[0]==1){
sh[20]=0;
sh[30]=1 + rand() % 16;
sh[40]=0;
sh[66]=1+rand()% 2;
sh[55]=1+rand()%4;
sh[44]=1+rand()%3;
//скрипт для режима
if(sh[44]==2){

if(sh[55]==1){
if(terit[14]==0){
terit[14]=2;
}else if(terit[14]=1){
	if(sh[66]==1){
	cout<<"\nМы отстояли оборонительный пункт 13";
	terit[14]=1;
	}else if(terit[14]==2){
	cout<<"\nПротивник выбил нас с 13 точки";
	terit[14]=2;
	}
}//конец скрипта захвата
}//Конец скрипта для точки



if(sh[55]==2){
if(terit[9]==0){
terit[9]=2;
}else if(terit[14]=1){
	if(sh[66]==1){
	cout<<"\nМы отстояли оборонительный пункт 8";
	terit[9]=1;
	}else if(terit[14]==2){
	cout<<"\nПротивник выбил нас с 8 точки";
	terit[9]=2;
	}
}//конец скрипта захвата
}

if(sh[55]==3){
if(terit[8]==0){
terit[8]=2;
}else if(terit[8]=1){
	if(sh[66]==1){
	cout<<"\nМы отстояли оборонительный пункт 13";
	terit[8]=1;
	}else if(terit[14]==2){
	cout<<"\nПротивник выбил нас с 13 точки";
	terit[8]=2;
	}
}//конец скрипта захвата
}//Конец скрипта для точки


if(sh[55]==4){
if(terit[4]==0){
terit[4]=2;
}else if(terit[4]=1){
	if(sh[66]==1){
	cout<<"\nМы отстояли оборонительный пункт 13";
	terit[4]=1;
	}else if(terit[4]==2){
	cout<<"\nПротивник выбил нас с 13 точки";
	terit[4]=2;
	}
}//конец скрипта захвата
}//Конец скрипта для точки


//Конец скрипта для точки


}else{
//скрипт для режима
if(sh[20]==0){
if(sh[40]==0){
	//Новый скрипт
			if(sh[30]==16){
	if(terit[16]==0){
	terit[16]=2;
	}
	if(sila_armii>0){
	if(terit[16]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[16]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[16]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[16]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[16]=2;
}
}
	//
		if(sh[30]==8){
	if(terit[8]==0){
	terit[8]=2;
	}
	if(sila_armii>0){
	if(terit[8]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[8]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[8]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[8]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[8]=2;
}
}
//


	if(sh[30]==9){
	if(terit[9]==0){
	terit[9]=2;
	}
	if(sila_armii>0){
	if(terit[9]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[9]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[9]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[9]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[9]=2;
}
}
//

	if(sh[30]==10){
	if(terit[10]==0){
	terit[10]=2;
	}
	if(sila_armii>0){
	if(terit[10]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[10]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[10]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[10]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[10]=2;
}
}
//

	if(sh[30]==11){
	if(terit[11]==0){
	terit[11]=2;
	}
	if(sila_armii>0){
	if(terit[11]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[11]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[11]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[11]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[11]=2;
}
}

//

	if(sh[30]==12){
	if(terit[12]==0){
	terit[12]=2;
	}
	if(sila_armii>0){
	if(terit[12]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[12]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[12]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[12]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[12]=2;
}
}
//
	if(sh[30]==13){
	if(terit[13]==0){
	terit[13]=2;
	}
	if(sila_armii>0){
	if(terit[13]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[13]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[13]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[13]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[13]=2;
}
}

//

	if(sh[30]==14){
	if(terit[14]==0){
	terit[14]=2;
	}
	if(sila_armii>0){
	if(terit[14]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[14]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[14]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[14]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[14]=2;
}
}
//
	if(sh[30]==15){
	if(terit[15]==0){
	terit[15]=2;
	}
	if(sila_armii>0){
	if(terit[15]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[15]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[15]=2;
}
	}else{
	cout<<"\nПротивник захватил территорию";
	terit[15]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[15]=2;
}
}


	//Новый скрипт
	if(sh[30]==0){
	if(terit[0]==0){
	terit[0]=2;
	}
	if(sila_armii>0){
	if(terit[0]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[0]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[0]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[0]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[0]=2;
}
}
	//конец 
	if(sh[30]==1){
	if(terit[1]==0){
	terit[1]=2;
	}
	if(sila_armii>0){
	if(terit[1]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[1]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[1]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[1]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[1]=2;
}
}
	if(sh[30]==2){
	if(terit[2]==0){
	terit[2]=2;
	}
	if(sila_armii>0){
	if(terit[2]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);

if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[2]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[2]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[2]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[2]=2;
}
}
	
	if(sh[30]==3){
	if(terit[3]==0){
	terit[3]=2;
	}
	if(sila_armii>0){
	if(terit[3]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[3]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[3]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[3]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[3]=2;
}
}

	
	if(sh[30]==4){
	if(terit[4]==0){
	terit[4]=2;
	}
	if(sila_armii>0){
	if(terit[4]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[4]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[4]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[4]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[4]=2;
}
}
	
	if(sh[30]==5){
	if(terit[5]==0){
	terit[5]=2;
	}
	if(sila_armii>0){
	if(terit[5]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
	cout<<"\nНам удалось отстоять территорию";
	terit[5]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[5]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[5]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[5]=2;
}
}

	
	if(sh[30]==6){
	if(terit[6]==0){
	terit[6]=2;
	}
	if(sila_armii>0){
	if(terit[6]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[6]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[6]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[6]=2;
}
}
//
	if(sh[30]==7){
	if(terit[7]==0){
	terit[7]=2;
	}
	if(sila_armii>0){
	if(terit[7]==1){
		cout<<"\nПротивник атакует твою территорию";
		Sleep(2500);
if(sh[66]==1){
		cout<<"\nНам удалось отстоять территорию";
		terit[7]=1;
	
}else{
cout<<"\nПротивник выбил нас  с точки";
sila_armii--;
terit[6]=2;
}
	}else{
		cout<<"\nПротивник захватил территорию";
		terit[7]=2;
	}
	sila_armii--;
	}else{
	cout<<"\nНедостаточно очков для обороны";
	terit[7]=2;
}
}
//
	

}
}//конец врага
}

cout<<"\nКакую территорию атаковать?";
cout<<"->";
cin>>sh[50];
if(sila_armii>0){
sila_armii--;
sh[60]=1+rand()%2;
//НОВОЕ
if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}

if(sh[50]==9){
	if(terit[8]==0){
	cout<<"\nТерритория захвачена";
	terit[8]=1;
	}
	if(terit[8]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[8]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[8]=2;
		}
	}

}

if(sh[50]==10){
	if(terit[9]==0){
	cout<<"\nТерритория захвачена";
	terit[9]=1;
	}
	if(terit[9]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[9]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[9]=2;
		}
	}

}

if(sh[50]==11){
	if(terit[10]==0){
	cout<<"\nТерритория захвачена";
	terit[10]=1;
	}
	if(terit[10]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[10]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[10]=2;
		}
	}

}

if(sh[50]==12){
	if(terit[11]==0){
	cout<<"\nТерритория захвачена";
	terit[11]=1;
	}
	if(terit[11]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[11]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[11]=2;
		}
	}

}

if(sh[50]==13){
	if(terit[12]==0){
	cout<<"\nТерритория захвачена";
	terit[12]=1;
	}
	if(terit[12]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[12]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[12]=2;
		}
	}

}

if(sh[50]==14){
	if(terit[13]==0){
	cout<<"\nТерритория захвачена";
	terit[13]=1;
	}
	if(terit[13]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[13]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[13]=2;
		}
	}

}

if(sh[50]==15){
	if(terit[14]==0){
	cout<<"\nТерритория захвачена";
	terit[14]=1;
	}
	if(terit[14]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[14]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[14]=2;
		}
	}

}
if(sh[50]==16){
	if(terit[15]==0){
	cout<<"\nТерритория захвачена";
	terit[15]=1;
	}
	if(terit[15]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[15]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[15]=2;
		}
	}

}

//НОВОЕ
if(sh[50]==1){
	if(terit[0]==0){
	cout<<"\nТерритория захвачена";
	terit[0]=1;
	}
	if(terit[0]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[0]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[0]=2;
		}
	}

}

if(sh[50]==2){
	if(terit[1]==0){
	cout<<"\nТерритория захвачена";
	terit[1]=1;
	}
	if(terit[1]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[1]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[1]=2;
		}
	}

}

if(sh[50]==3){
	if(terit[2]==0){
	cout<<"\nТерритория захвачена";
	terit[2]=1;
	}
	if(terit[2]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[2]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[2]=2;
		}
	}

}

if(sh[50]==4){
	if(terit[3]==0){
	cout<<"\nТерритория захвачена";
	terit[3]=1;
	}
	if(terit[3]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[3]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[3]=2;
		}
	}

}

if(sh[50]==5){
	if(terit[4]==0){
	cout<<"\nТерритория захвачена";
	terit[4]=1;
	}
	if(terit[4]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[4]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[4]=2;
		}
	}

}


if(sh[50]==6){
	if(terit[5]==0){
	cout<<"\nТерритория захвачена";
	terit[5]=1;
	}
	if(terit[5]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[5]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[5]=2;
		}
	}

}

if(sh[50]==7){
	if(terit[6]==0){
	cout<<"\nТерритория захвачена";
	terit[6]=1;
	}
	if(terit[6]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[6]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[6]=2;
		}
	}

}if(sh[50]==8){
	if(terit[7]==0){
	cout<<"\nТерритория захвачена";
	terit[7]=1;
	}
	if(terit[7]==2){
		if(sh[60]==1){
		cout<<"\nTeрритория под нашем контролем";
		terit[7]==1;
		}
		if(sh[60]==2){
		cout<<"\nПротив оказал сильный натиск.";
		terit[7]=2;
		}
	}

}



}else{
	cout<<"\nАрмия Слишком мала для наступления";
}
}
cout<<"\n";
system("pause");
system("cls");

}//цикл
	
}//конец второго режима
system("pause");
system("cls");

}//функция



void menu(){

	//
	system("title CWS (Civil War Simulation)");
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                         Bild "<<bild_g<<"       #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"# 1)Играть                                                           #"<<endl;
cout<<"# 2)Быстрый бой(схватка)                                             #"<<endl;
cout<<"# 3)опции                                                            #"<<endl;
cout<<"# 4)Об игре                                                          #"<<endl;
cout<<"# 5)Выход                                                            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"# 6)Игровой магазин                       7)Статистика               #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                              v 0.4  pre-relis      #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"->";
cin>>a;
if(a==7){
	ofstream  gvu("res/parameters/gamelogic/player.dat", ios::app);
	string geny;
	gvu.close();
	ifstream gvu3("res/parameters/gamelogic/player.dat");
	getline(gvu3,geny);
	lvl_p=atoi(geny.c_str());
	system("cls");
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f ,coi3);
	coin=atoi(coi3.c_str());
	
	//
	
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
	
	//
	
ofstream oborona("res/parameters/gamelogic/ob.dat", ios::app);
oborona.close();
ifstream oborona1("res/parameters/gamelogic/ob.dat");
string tag6;
getline(oborona1,tag6);
int h13=atoi(tag6.c_str());
	
	//

cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                     Общая статистика                               #"<<endl;
cout<<"#____________________________________________________________________#"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#1)Заработано монет : "<<coin<<"                                          #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#2)Уровень игрока :"<<geny<<"                                                #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#3)Время в игре С.М.Ч.Д :"<<time[0]<<" ."<<time[1]<<" ."<<time[2]<<" ."<<time[3]<<"                               #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#4)Выстоянных волн : "<<h13<<"                                          #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;
system("pause");
system("cls");	
}

//
system("cls");
if(a==1){
	game();
}else if(a==2){
		system("title CWS (Civil War Simulation) быстрый бой");
f_game();	
	
}else if(a==3){
		system("title CWS (Civil War Simulation) Опции");
int b=0;
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#      1)Выбор генерала                   2)Управление и графика     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                      5)Краткое FAQ                                 #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#      3)Моды                             4)Вернуться в меню         #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    6)Купить улучшения                 7)Повысить уровень генерала  #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"->";
cin>>b;
system("cls");
if(b==1){
	system("title CWS (Civil War Simulation) Выбор генерала");
	/*
int boezapas =0;
int lic_sila=0;
int sila_armii=0;
int sila_razvet=0;

*/
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"#  1) Корнилов      | 2)Адмирал Колчак |  3)Деникин    | 4)Семенов   #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"# Вояка ,проверенный| полезен если     | После убийства| Хитрость-это#"<<endl;
cout<<"# временем.         | взять в морские  | Корнилова     | краткое его #"<<endl;
cout<<"# Воодушевляет людей| бои .Армия имеет | стал возглав- | описание .  #"<<endl;
cout<<"# на неосознанный   | базовый боевой   |лять его войска| Создал под  #"<<endl;
cout<<"# героизм.Главная   | дух.Проблема с   |Характеристики:|носом у врага#"<<endl;
cout<<"# черта-агрессивный | вооружением.     |Боеприпасы(+)  |одну из самых#"<<endl;
cout<<"# штурм             | Главная черта-   |разведка (-)   |сильных фор- #"<<endl;
cout<<"#  Характеристики:  | Превосходный так-|армия(=)       |мирований    #"<<endl;
cout<<"# 1)Незначительное  | тик.             |боевой дух(-)  |белой армии. #"<<endl;
cout<<"# повышение боевого | Характеристики:  |               |Характерист. #"<<endl;
cout<<"# духа(+)           | В морских сраж.  |               |боеприпасы(+)#"<<endl;
cout<<"# плохой боезапас(-)| Значительное     |               |боевой дух(+)#"<<endl;
cout<<"# повышение силы    | повышение силы   |               |слабая раз-  #"<<endl;
cout<<"# армии (+)         | армии(++),суш(=) |               |ведка(-)     #"<<endl;
cout<<"# хорошие разведо-  | Разведка(+)суш(=)|               |армейская    #"<<endl;
cout<<"# войска (+)        |                  |               |боеспособ.(+-#"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"#                   |                  |               |             #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"->";
cin>>b;
cout<<endl;
if(b==1){
	cout<<"Выбран Корнилов";
	gen=1;
}
else if(b==2){
	cout<<"Выбран Колчак";
	gen=2;
}else if(b==3){
gen=3;
cout<<"Выбран Деникин";
}
else if(b==4){
cout<<"Выбран Семенов";	
gen=4;
}else if(b<=0 || b>=5){
	cout<<"ERROR 12-01 генерал не был выбран";
Sleep(2500);
system("cls");
cout<<"выбран дефолдный генерал -Деникин";
gen=3;
Sleep(3000);
system("cls");
}
Sleep(3000);
system("cls");
}//генералы
if(b==2){
		system("title CWS (Civil War Simulation) Настроики графики и управления");
system("color 2");
cout<<"######################################################################"<<endl;
cout<<"#   |  |                  CWS                                        #"<<endl;
cout<<"#   |  |            Civil War Simulation       V 0.4  pre-relis      #"<<endl;
cout<<"#___|  |_____________________________________________________________#"<<endl;
cout<<"#   |  |                      / /  | |                     / /|  |   #"<<endl;
cout<<"#   |  |                     / /   | |                    / / |  |   #"<<endl;
cout<<"#   |  |                    / /    | |                   / /  |  |   #"<<endl;
cout<<"#   |  |                   / /     | |                  / /   |  |   #"<<endl;
cout<<"#   |  |                  / /      | |                 / /    |  |   #"<<endl;
cout<<"#   |  |                 / /       | |                / /     |  |   #"<<endl;
cout<<"#   |  |                / /        | |               / /      |  |   #"<<endl;
cout<<"#   |  |               / /         | |              / /       |  |   #"<<endl;
cout<<"#___|  |______________/ /__________| |_____________/ /________|  |___#"<<endl;
cout<<"#   |  |             / /           | |            / /         |  |   #"<<endl;
cout<<"#   |  |            / /            | |           / /          |  |   #"<<endl;
cout<<"#   |  |           / /             | |          / /           |  |   #"<<endl;
cout<<"#   |  |          / /              | |         / /            |  |   #"<<endl;
cout<<"#   |  |         / /               | |        / /             |  |   #"<<endl;
cout<<"#___|  |________/ /________________| |______ / /______________|  |___#"<<endl;
cout<<"#   |  |       / /                 | |      / /               |  |   #"<<endl;
cout<<"#   |  |      / /                  | |     / /                |  |   #"<<endl;
cout<<"#   |  |     / /                   | |    / /                 |  |   #"<<endl;
cout<<"#   |  |    / /                    | |   / /                  |  |   #"<<endl;
cout<<"#   |  |   / /                     | |  / /                   |  |   #"<<endl;
cout<<"#   |  |  / /                      | | / /                    |  |   #"<<endl;
cout<<"#   |  | / /                       | |/ /                     |  |   #"<<endl;
cout<<"#   |  |/ /                        | | /                      |  |   #"<<endl;
cout<<"#   |  | /             недоступно  | | в этой версии          |  |   #"<<endl;
cout<<"######################################################################"<<endl;
system("pause");
system("color 8");
}
if(b==3){
		system("title CWS (Civil War Simulation) Моды");
	cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#   анализ папки с модами                                            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;
Sleep(2500)	;
ofstream mod("res/mods/mod.dat", ios::app);
cout<<"установить модификации ?\n1)да 2)нет\n->";
cin>>b;
if(b==1){
bool lib;
ifstream mod1("res/mods/mod.dat");
if (!mod1){
	cout<<"\n моды не обнаружены";
}
	bool fille=false;
	string h;
	getline(mod1,h);
	if(h=="1"){
	fille=true;
	cout<<"\n моды успешно активированы";
	
	}else{
	cout<<"моды не были найдены";
	}
	cout<<"\n";
system("pause");
system("cls");
}
//опции
}
if(b==5){
/*int boezapas =0;
int lic_sila=0;
int sila_armii=0;
int sila_razvet=0;
*/
	system("title CWS (Civil War Simulation) FAQ");
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                Стр 1/2 #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                  Краткий мануал по игре                            #"<<endl;
cout<<"#    1) В игре существует БОЕЗАПАС , он нужен для создания           #"<<endl;
cout<<"#   НОВЫХ ОТРЯДОВ для повышения УРОВНЯ АРМИИ.Он нужен для            #"<<endl;
cout<<"#   захвата новых территорий или обороны старых.Всегда желательно    #"<<endl;
cout<<"#   иметь как минимум 2-3 единицы в  рукаве.В игре существуют        #"<<endl;
cout<<"#   Чтобы пополить боезапас нужно захватывать территории.            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    2)После захвата территорий будет доступен режим захвата базы    #"<<endl;
cout<<"#    Для него нужно как минимум 4 уровень армии и 10 единиц          #"<<endl;
cout<<"#    Боезапаса                                                       #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    3)В игре присутствует режим РАЗВЕДКИ.Крайне ценный ресурс       #"<<endl;
cout<<"#    Позволяет узнать не занята ли та или иная территория.           #"<<endl;
cout<<"#    Пополняется крайне медленно .Механизм пополнения такой же как   #"<<endl;
cout<<"#    и у боезапаса.                                                  #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    4)Уровень армии повышается когда будет достигнуто нужно кол-во  #"<<endl;
cout<<"#    отрядов.Пример:для пехоты кол-во отрядов =4                     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;	
system("pause");
system("cls");
//
	cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                Стр 2/2 #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                 Краткий мануал по игре                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    5)Режим КОНТРОЛЯ КЛЮЧЕВЫХ ТОЧЕК(ККТ)                            #"<<endl;
cout<<"#    Обозначаются (*) звездочкой . Захватить можно после             #"<<endl;
cout<<"#    захвата 4 крайних точек возле неё                               #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    6)Монеты можно получить за победы в бою.                        #"<<endl;
cout<<"#    Разные режимы дают разные награды                               #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    7)          <Для режима оборона базы>                           #"<<endl;
cout<<"#    Чтобы победить нужно дожить до 100 волны                        #"<<endl;
cout<<"#    Чем больше вы продержитесь тем лучше будет награда              #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    8)Улучшение способностей генералов.                             #"<<endl;
cout<<"#    В паках есть вероятность выиграть жетон генерала                #"<<endl;
cout<<"#    для его улучшения.Максимальный уровень: <5>                     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    9)          <Для режима оборона базы>                           #"<<endl;
cout<<"#    Место откуда ожидается атака помечено (->)                      #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    10)Начисление опыта и уровень пользователя.                     #"<<endl;
cout<<"#    Опыт так же начисляется после прохождения какой-либо карты      #"<<endl;
cout<<"#    Нужен для понижения стоимости паков                             #"<<endl;
cout<<"######################################################################"<<endl;



system("pause");
system("cls");
}// rконец FAQ
 
if(b==6){
	//
	ofstream  gv("res/parameters/gamelogic/gen1.dat", ios::app);
	ofstream  gv1("res/parameters/gamelogic/gen2.dat", ios::app);
	ofstream  gv2("res/parameters/gamelogic/gen3.dat", ios::app);
	ofstream  gv3("res/parameters/gamelogic/gen4.dat", ios::app);
	//
	gv.close();
	gv1.close();
	gv2.close();
	gv3.close();
	//
	ifstream gvx("res/parameters/gamelogic/gen1.dat");
	ifstream gvx1("res/parameters/gamelogic/gen2.dat");
	ifstream gvx2("res/parameters/gamelogic/gen3.dat");
	ifstream gvx3("res/parameters/gamelogic/gen4.dat");
	//
	string gen2;
	string gen3;
	string gen4;
	string gen5;
	getline(gvx,gen2);
	getline(gvx1,gen3);
	getline(gvx2,gen4);
	getline(gvx3,gen5);
	gen_cart[0]=atoi(gen2.c_str());
	gen_cart[1]=atoi(gen3.c_str());
	gen_cart[2]=atoi(gen4.c_str());
	gen_cart[3]=atoi(gen5.c_str());
	//
	
	//
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f("res/parameters/gamelogic/c.dat");
	string coi2;
	getline(coi_f ,coi2);
	coin=atoi(coi2.c_str());
	if(coin>=100){
	system("cls");
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#               Выберите нужный вам пак                              #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#      1)Обычный  2)Продвинутый 3)крайне редкий 4)легендарный        #"<<endl;
cout<<"#         100            500           1000          2000            #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"доступно наличности сейчас : "<<coin<<endl;
cout<<"->";
int gg1=0;
cin>>gg1;
int gg2;
//первый пакет

if(gg1==1){
for(int gg3=0;gg3<=5;gg3++){
gg2=1+ rand() % 20;
//
if(gg2<=6){
	coin=coin+10;
}
//
if(gg2>=7 && gg2<=14){
	coin=coin+5;
}
//
if(gg2>=15 && gg2 <=19){
	coin=coin+20;
}
//
if(gg2==20){
	gg2=1 + rand() % 4;
	if(gg2==1){
		gen_cart[0]=gen_cart[0] + 1;
		ofstream  gv("res/parameters/gamelogic/gen1.dat");
		gv<<gen_cart[0];
		gv.close();
	}
		if(gg2==2){
		gen_cart[1]=gen_cart[1] + 1;
		gv1<<gen_cart[1];
		gv1.close();
	}
		if(gg2==3){
		gen_cart[2]=gen_cart[2] + 1;
		gv2<<gen_cart[2];
		gv2.close();
	}
		if(gg2==4){
		gen_cart[3]=gen_cart[3] + 1;
		gv3<<gen_cart[3];
		gv3.close();
	}

}
//
}
coin=coin-100;
ofstream  coi("res/parameters/gamelogic/c.dat");
coi<<coin;
coi.close();
}
//конец первого пака
//второй
if(gg1==2){
if(coin>=500){
for(int gg3=0;gg3<=6;gg3++){
gg2=1+ rand() % 15;
//
if(gg2<=5){
	coin=coin+15;
}
//
if(gg2>=6 && gg2<=10){
	coin=coin+20;
}
//
if(gg2>=11 && gg2 <=14){
	coin=coin+25;
}
//
if(gg2==15){
	gg2=1 + rand() % 4;
	if(gg2==1){
		gen_cart[0]=gen_cart[0] + 1;
		ofstream  gv("res/parameters/gamelogic/gen1.dat");
		gv<<gen_cart[0];
		gv.close();
	}
		if(gg2==2){
		gen_cart[1]=gen_cart[1] + 1;
		gv1<<gen_cart[1];
		gv1.close();
	}
		if(gg2==3){
		gen_cart[2]=gen_cart[2] + 1;
		gv2<<gen_cart[2];
		gv2.close();
	}
		if(gg2==4){
		gen_cart[3]=gen_cart[3] + 1;
		gv3<<gen_cart[3];
		gv3.close();
	}

}
//
}
coin=coin-500;
ofstream  coi("res/parameters/gamelogic/c.dat");
coi<<coin;
coi.close();
}else{
	cout<<"\nВаш балланс не позволяет купить кейс по данной цене\n";
	system("pause");
	system("cls");
}
}
//второй

//третий


if(gg1==3){
if(coin>=1000){
for(int gg3=0;gg3<=6;gg3++){
gg2=1+ rand() % 10;
//
if(gg2<=3){
	coin=coin+25;
}
//
if(gg2>=4 && gg2<=6){
	coin=coin+30;
}
//
if(gg2>=7 && gg2 <=9){
	coin=coin+35;
}
//
if(gg2==10){
	gg2=1 + rand() % 4;
	if(gg2==1){
		gen_cart[0]=gen_cart[0] + 1;
		ofstream  gv("res/parameters/gamelogic/gen1.dat");
		gv<<gen_cart[0];
		gv.close();
	}
		if(gg2==2){
		gen_cart[1]=gen_cart[1] + 1;
		gv1<<gen_cart[1];
		gv1.close();
	}
		if(gg2==3){
		gen_cart[2]=gen_cart[2] + 1;
		gv2<<gen_cart[2];
		gv2.close();
	}
		if(gg2==4){
		gen_cart[3]=gen_cart[3] + 1;
		gv3<<gen_cart[3];
		gv3.close();
	}

}
//
}
coin=coin-1000;
ofstream  coi("res/parameters/gamelogic/c.dat");
coi<<coin;
coi.close();
}else{
	cout<<"\nВаш балланс не позволяет купить кейс по данной цене\n";
	system("pause");
	system("cls");
}
}



//третий

//четвертый


if(gg1==4){
if(coin>=1000){
for(int gg3=0;gg3<=3;gg3++){
gg2=1+ rand() % 6;
//
if(gg2<=1){
	coin=coin+30;
}
//
if(gg2>=2 && gg2<=3){
	coin=coin+35;
}
//
if(gg2>=4 && gg2 <=5){
	coin=coin+40;
}
//
if(gg2==6){
	gg2=1 + rand() % 4;
	if(gg2==1){
		gen_cart[0]=gen_cart[0] + 2;
		ofstream  gv("res/parameters/gamelogic/gen1.dat");
		gv<<gen_cart[0];
		gv.close();
	}
		if(gg2==2){
		gen_cart[1]=gen_cart[1] + 2;
		gv1<<gen_cart[1];
		gv1.close();
	}
		if(gg2==3){
		gen_cart[2]=gen_cart[2] + 2;
		gv2<<gen_cart[2];
		gv2.close();
	}
		if(gg2==4){
		gen_cart[3]=gen_cart[3] + 2;
		gv3<<gen_cart[3];
		gv3.close();
	}

}
//
}
coin=coin-2000;
ofstream  coi("res/parameters/gamelogic/c.dat");
coi<<coin;
coi.close();
}else{
	cout<<"\nВаш балланс не позволяет купить кейс по данной цене\n";
	system("pause");
	system("cls");
}
}

//четвертый
//конец условий
}else{
	cout<<"Слишком мало монет ,"<<"Минимальное кол-во 100 ,"<<"сейчас :"<<coin<<endl;
}
	system("pause");
}// конец паков
if(b==7){
		string gen2;
	string gen3;
	string gen4;
	string gen5;
	ofstream  gv("res/parameters/gamelogic/gen1.dat", ios::app);
	ofstream  gv1("res/parameters/gamelogic/gen2.dat", ios::app);
	ofstream  gv2("res/parameters/gamelogic/gen3.dat", ios::app);
	ofstream  gv3("res/parameters/gamelogic/gen4.dat", ios::app);
	//
	gv.close();
	gv1.close();
	gv2.close();
	gv3.close();
	//
	ifstream gvx("res/parameters/gamelogic/gen1.dat");
	ifstream gvx1("res/parameters/gamelogic/gen2.dat");
	ifstream gvx2("res/parameters/gamelogic/gen3.dat");
	ifstream gvx3("res/parameters/gamelogic/gen4.dat");
	getline(gvx,gen2);
	getline(gvx1,gen3);
	getline(gvx2,gen4);
	getline(gvx3,gen5);
	gen_cart[0]=atoi(gen2.c_str());
	gen_cart[1]=atoi(gen3.c_str());
	gen_cart[2]=atoi(gen4.c_str());
	gen_cart[3]=atoi(gen5.c_str());
//LVL
	ofstream  gvg("res/parameters/gamelogic/gen_l1.dat", ios::app);
	ofstream  gvg1("res/parameters/gamelogic/gen_l2.dat", ios::app);
	ofstream  gvg2("res/parameters/gamelogic/gen_l3.dat", ios::app);
	ofstream  gvg3("res/parameters/gamelogic/gen_l4.dat", ios::app);
	//
	gvg.close();
	gvg1.close();
	gvg2.close();
	gvg3.close();

//
ifstream  LSV("res/parameters/gamelogic/gen_l1.dat", ios::app);
ifstream  LSV1("res/parameters/gamelogic/gen_l2.dat", ios::app);
ifstream  LSV2("res/parameters/gamelogic/gen_l3.dat", ios::app);
ifstream  LSV3("res/parameters/gamelogic/gen_l4.dat", ios::app);
	
	string lvl01;
	string lvl02;
	string lvl03;
	string lvl04;
	

	getline(LSV, lvl01);
	getline(LSV1,lvl02);
	getline(LSV2,lvl03);
	getline(LSV3,lvl04);

gen_lvl[0]=atoi(lvl01.c_str());
gen_lvl[1]=atoi(lvl02.c_str());
gen_lvl[2]=atoi(lvl03.c_str());
gen_lvl[3]=atoi(lvl04.c_str());


//int gen_lvl[4];///уровень
//int gen_sc[4];//наименование
	
	
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                      Прокачка генерала                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#            lvl "<<gen_lvl[0]<<"        lvl "<<gen_lvl[1]<<"      lvl"<<gen_lvl[2]<<"        lvl"<<gen_lvl[3]<<"                #"<<endl;
cout<<"#          1)Корнилов   2)Колчак   3)Деникин   4)Семенов             #"<<endl;
cout<<"#           5 есть "<<gen_cart[0]<<"  5 есть "<<gen_cart[1]<<"   5 есть "<<gen_cart[2]<<"   5 есть "<<gen_cart[3]<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                              v 0.4  pre-relis      #"<<endl;
cout<<"######################################################################"<<endl;
cout<<"->";
int jj1;
cin>>jj1;


if(jj1==1){
if(gen_cart[0]>4){
	gen_cart[0]=0;
	gen_lvl[0]=gen_lvl[0]+1;
ofstream  LSV("res/parameters/gamelogic/gen_l1.dat");	
LSV<<gen_lvl[0];
}else{
cout<<"Слишком мало собрано улучшений";
Sleep(1500);
system("cls");
}

}
//

if(jj1==2){
if(gen_cart[1]>4){
	gen_cart[1]=0;
	gen_lvl[1]=gen_lvl[1]+1;
ofstream  LSV("res/parameters/gamelogic/gen_l2.dat");	
LSV<<gen_lvl[1];
}else{
cout<<"Слишком мало собрано улучшений";
Sleep(1500);
system("cls");
}

}
//
if(jj1==3){
if(gen_cart[2]>4){
	gen_cart[2]=0;
gen_lvl[2]=gen_lvl[2]+1;
ofstream  LSV("res/parameters/gamelogic/gen_l3.dat");	
LSV<<gen_lvl[2];
}else{
cout<<"Слишком мало собрано улучшений";
Sleep(1500);
system("cls");
}
}
//
if(jj1==4){
if(gen_cart[3]>4){
	gen_cart[3]=0;
	gen_lvl[3]=gen_lvl[3]+1;
ofstream  LSV("res/parameters/gamelogic/gen_l4.dat");	
LSV<<gen_lvl[3];
}else{
cout<<"Слишком мало собрано улучшений";
Sleep(1500);
system("cls");
}

}
//
}




}else if(a==4){
		system("title CWS (Civil War Simulation) Об игре");
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#  Civil War Simulation -> игра про гражданскую войну в России       #"<<endl;
cout<<"#  Периода 1917-1922 годов.Почувствуй себя полководцем и захватывай  #"<<endl;
cout<<"#  вражеские города один за другим                                   #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                       А в т о р ы                                  #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    Создатель-> https://vk.com/monarhist                            #"<<endl;
cout<<"#    Группа в вк -> https://vk.com/monarchical.association           #"<<endl;
cout<<"#    Группа в вк по игре -> https://vk.com/cws_v_01                  #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
ofstream lis("res/parameters/license.prt", ios::app);
fstream lis1("res/parameters/license.prt");
string  gg;
getline(lis1,gg);
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#   Версия игры 0.4 pre-relis                                        #"<<endl;
cout<<"#   Версия продукта->"<<gg<<"                                  #"<<endl;
cout<<"######################################################################"<<endl;
system("pause");
system("cls");
}else if(a==5){

}else if(a==6){
	system("cls");
	ofstream  coi("res/parameters/gamelogic/c.dat", ios::app);
	coi.close();
	ifstream coi_f1("res/parameters/gamelogic/c.dat");
	string coi3;
	getline(coi_f1 ,coi3);
	coin=atoi(coi3.c_str());
	system("mode con cols=70 lines=34");
cout<<"######################################################################"<<endl;
cout<<"#                         CWS                                        #"<<endl;
cout<<"#                   Civil War Simulation                             #"<<endl;
cout<<"#________________________Магазин_____________________________________#"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#    1)Режим оборона базы  (250)                                     #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"#                                                                    #"<<endl;
cout<<"######################################################################"<<endl;	
int i0;
cout<<"Монеты :"<<coin<<endl;
cout<<"->";
//
ofstream  reg("res/parameters/gamelogic/reg.dat", ios::app);
reg.close();
ifstream reg1("res/parameters/gamelogic/reg.dat");
string tag;
getline(reg1,tag);
i3=atoi(tag.c_str());
if(i3==0){
ofstream  reg("res/parameters/gamelogic/reg.dat");
reg<<"0";
}
//
cin>>i0;	
if(coin>=250){
if(i0==1){
reg.close();
ifstream reg1("res/parameters/gamelogic/reg.dat");
string tag;
getline(reg1,tag);
i1=atoi(tag.c_str());
if(i1==0){
coin=coin-250;
ofstream o("res/parameters/gamelogic/c.dat");
o<<coin;
o.close();
cout<<"\nБыла совершена покупка\n";
ofstream tag2("res/parameters/gamelogic/reg.dat");
i1++;
tag2<<i1;
tag2.close();
}else{
	cout<<"\nПокупка уже была совершена\n";
}
}
}else{
cout<<"Слишком мало денег для покупки\n";
}
system("pause");
system("cls");
system("mode con cols=70 lines=30");
}
}



int main(){
		ofstream bild("res/parameters/gamelogic/bild.li",ios::app);
	string bildx;
	bild.close();
	ifstream bild_f("res/parameters/gamelogic/bild.li");
	getline(bild_f,bildx);
	bild_g=atoi(bildx.c_str());
	//
	ofstream gec("res/parameters/gamelogic/debug.li",ios::app);
	string decx;
	gec.close();
	ifstream dec_f("res/parameters/gamelogic/debug.li");
	getline(dec_f,decx);
	dec_g=atoi(decx.c_str());
	if(dec_g==1){
		bild_g++;
	ofstream lll("res/parameters/gamelogic/bild.li");
	lll<<bild_g;
	lll.close();
	}
	relod();
started();
//loading();
while(a!=5){
	menu();
if(a==1){

}else if(a==2){

}
}
}


