#include<stdio.h>
void add ();
void delete(int address);
double  get_money(int time);
void search(int addresss);
void desplay_all();


void search(int addresss){
     for(int i = 0;i < car_count;i++){
         if(car[i].address == address){
           printf("车牌号为：%s\n停车时间为：%d\n停车费用为：%.lf\n车位为：%d", car[i].num, car[i].time, get_money(car[i].time), car[i].address);
         }
         break;
     }
}

