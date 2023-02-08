// Denna fil ska innehålla deklarationer för de typer och funktioner
// som behövs

#ifndef TIME_H
#define TIME_H


#include <iostream>
#include <string>
#include <unistd.h>
//#include <stdlibrary>
using namespace std;

//using std::string;
//using std::cout;
//using std::endl;
//using std::to_string;

class Time
{
public:
  Time(int h=12, int m=34, int s=56); //fylla i senare
  int get_hour();
  int get_minute();
  int get_second();
  string strTime();

private:
  int hour, minute, second;
};

#endif
