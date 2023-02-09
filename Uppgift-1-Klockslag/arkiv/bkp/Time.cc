// I denna fil läggs definitionerna (implementationen) av de funktioner
// som deklarerats i Time.h

#include "Time.h"

Time::Time(int h,int m,int s)
    : hour{h}, minute{m}, second{s}
    { }

int Time::get_second() { //Gets current hour.
  return second;
}

int Time::get_minute() { //Gets current hour.
  return minute;
}

int Time::get_hour() { //Gets current hour.
  return hour;
}

string Time::strTime() {
  string time_full = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
  return time_full;
}

int main() {
  Time time{}; //type Time var time{}
  cout << time.strTime() << endl;
}

