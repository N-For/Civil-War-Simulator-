#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;
void rus(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

}
void start(){
	
}

void pe(){
system("pause");
}
void ct(int u){
	int s1=0;
	while(s1<=u){
	cout<<endl;
s1++;
}
}
void cl(){
	cout<<endl;
	system("pause");
	system("cls");
}
void c_pl(){
	int j=0;
	while(j<=600){
		cout<<"\b";
	}
}
void Sp(int slx){
	Sleep(slx);
}

void text(string str){
	cout<<str;
}

 void ct_p(int sl0){
 	Sleep(sl0);
 	cout<<endl;
 }

void SetColor(int text, int bg){
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

void name(string nm){
	string n1="title ";
}
void super_f(int time,string text_t,int c0,int c1, int d,bool f){
Sleep(time);
int final=0;
while(d<=final){
	ct(1);
	d--;
}
SetColor(c0,c1);
text(text_t);
if(f==1){
	SetColor(15,0);
}
}

void help(){
Sp(1278);
SetColor(15,4);
cout<<"��������� ���������� ��� ������ � ����������";
ct(1);
SetColor(15,2);
cout<<"����������:";
SetColor(15,0);
Sp(750);
ct_p(1000);
SetColor(15,1);
ct(1);
cout<<"ct";
ct(1);
SetColor(4,1);
cout<<"1)(ct)������ ������\n(�������� ���������� ��������)";
ct_p(750);
ct(1);
SetColor(15,2);
cout<<"pe";
ct(1);
cout<<"2)(pe) system pause";
ct_p(1500);
SetColor(13,9);
SetColor(15,2);
ct(1);
cout<<"cl";
ct(1);
SetColor(15,4);
cout<<"3)(cl) �������� ������ ������� cls ";
ct_p(1200);
SetColor(15,1);
ct(1);
text("c_pl");
ct(1);
SetColor(15,8);
cout<<"4)(c_pl)�������� ������ ��� ������";
ct_p(1600);
SetColor(15,2);
ct(1);
text("Sp");
ct(1);
SetColor(15,3);
cout<<"5)(Sp)��������, \n� ������� �������� � ������������� 1000 =1 ���";
ct_p(1600);
SetColor(15,2);
ct(1);
text("ct_p");
ct(1);
SetColor(15,2);
cout<<"6)(ct_p) ��� �������� � ������� , �������� ����� � �������������";
ct_p(1500);
SetColor(15,4);
ct(1);
cout<<"rus";
SetColor(15,2);
ct(1);
text("7)(rus) ������ ������������ ������\n");

ct_p(1700);
SetColor(15,4);
ct(1);
text("SetColor");
SetColor(15,2);
ct(1);
text("8)(Set�olor)����� ����� ������ ����������� �������,�����");
ct(1);


ct_p(1700);
SetColor(0,14);
ct(1);
text("super_f");
SetColor(15,4);
ct(1);
text("9)(super_f) ������-������� ��� ��������� �����\n");
ct(1);
text("��������� -��������,����� ��� �������,���� 1,���� 2,����������� ��������,���������� � ������������ ������ 1 ��� 0 ");
ct(3);
SetColor(15,2);
text("PS ���� ������������ � ������ � cin ��� getch()����������� ��������� ������� �� (_)");
ct(2);
super_f(2200,"                                       power by PCCG PC Console Game 2020                                                ",15,9,2,1);
ct(2);

SetColor(15,4);
SetColor(15,0);
pe();
SetColor(15,0);
cl();
}

