// I denna fil läggs definitionerna (implementationen) av de funktioner
// som deklarerats i Time.h

#include "Klocka.h"

Time::Time(int h,int m,int s) : hour{h}, minute{m}, second{s} {}


int Time::get_second() { //Gets current hour.
  return second;
}

int Time::get_minute() { //Gets current hour.
  return minute;
}

int Time::get_hour() { //Gets current hour.
  return hour;
}


/*string Time::is_am() {
  string indicator = "none";
  if (hour <= 12) {
    indicator = "am";
  } else {
    indicator = "pm";
  }
  return indicator;
}*/


int main() {
  Time time{}; //type Time var time{}
  int vhour = time.get_hour();
  int vminute = time.get_minute();
  int vsecond = time.get_second();

  while (true) {
    vsecond++;

    if (vsecond >= 60) {
      vminute++;
      vsecond = 0;
    }

    if (vminute >= 60) {
      vhour++;
      vminute = 0;
    }

    if (vhour >= 24) {
      vhour = 0;
    }

    string indicator = "am";
    int vvhour = 12;
    if (vvhour == 12 and vhour > 0) {
      vvhour = vhour;
    }
    if (vhour >= 12) {
      indicator = "pm";
      vvhour = vhour - 12;
    }

    cout << " " << endl;
    cout << "24H - " << setw(2) << setfill('0') << vhour << ":" << setw(2) << setfill('0') << vminute << ":" << setw(2) << setfill('0') << vsecond << endl;
    cout << " " << endl;
    cout << "12H - " << setw(2) << setfill('0') << vvhour << ":" << setw(2) << setfill('0') << vminute << ":" << setw(2) << setfill('0') << vsecond << indicator << endl;
    usleep(1000000);
    system("clear");
  }
}
