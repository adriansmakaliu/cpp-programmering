#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main(){
    int hr=0,min=0,sec=0;
    while(true){
        system("clear");
        cout<<hr<<" : "<<min<<" : "<<sec <<"\n"<<endl;
        sec++;
        if(sec==60){
            min++;
            sec=0;
            if(min==60){
                hr++;
                min=0;
                    if(hr==24){
                    hr=0;    
                    }
             
            }
        }
        usleep(1000000); 
    }
   return 0;
}