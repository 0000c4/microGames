#include<iostream>
#include<ctime>
bool field[9] = {0,0,0,0,0,0,0,0,0};
char userFiled[9] = {'#','#','#','#','#','#','#','#','#'};
using namespace std;
void plantBOMB(){
srand(time(0));
short bomb = rand() % 8;
field[bomb] = 1;}
void getField(){
cout<<userFiled[0]<<userFiled[1]<<userFiled[2]<<endl;
cout<<userFiled[3]<<userFiled[4]<<userFiled[5]<<endl;
cout<<userFiled[6]<<userFiled[7]<<userFiled[8]<<endl;}
int main(){
plantBOMB();
getField();
int input;
int win = 0;
while(true){
cin>>input;
input = input - 1;
if(field[input] == 0){
userFiled[input] = ' ';getField(); win++;}
else{userFiled[input] = '*';getField();cout<<"GAME OVER"<<endl;break;}
if(win >= 8){cout<<"YOU WIN"<<endl;break;}}
return 0;}

