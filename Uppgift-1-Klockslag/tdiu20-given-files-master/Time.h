// Denna fil ska innehålla deklarationer för de typer och funktioner
// som behövs

#ifndef TIME_H
#define TIME_H


#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <sstream>


using namespace std;

class Time
{
public:
  Time(int h=0, int m=0, int s=0);
  int get_hour();
  int get_minute();
  int get_second();
  bool is_am();
  string to_string(const int data); //Eget funktion
/*  operator+();
  operator==();
  operator!=();
  operator<();
  operator>();
  operator<=();
  operator>=();
  operator<<();
  operator>>();*/

private:
  int hour, minute, second;
};

#endif