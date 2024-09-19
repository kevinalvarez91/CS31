#include <iostream>
#include <vector>

using namespace std;

class Time{
private:
int hour, minute, second;


public:

    Time(): hour(0), minute(0), second(0){}


    Time(int hours, int minutes, int seconds) : hour(hours), minute(minutes), second(seconds){}

    void setHour(int houres){
        hour = houres;
    }

    void setMinutes(int minutees){
        minute = minutees;
    }

    void setSeconds(int seconds){
        second = seconds;
    }

    int getHour()const{
        return hour;
    }

    int getMinutes()const{
        return minute;
    }

    int getSeconds()const{
        return second;
    }

    void displayTime()const{
        cout << hour << ":" << minute << ":" << second;
    }

    void setTime(int h, int m, int s){
        while(true){
        if(h > 23){
            cout << "Too many hours" << endl;
            break;
        }
        if(m > 59){
            cout << "Too many minutes" << endl;
            break;
        }
        if(s > 59){
            cout << "too many seconds" << endl;
            break;
        }
    }
        hour = h;
        minute = m;
        second = s;


    }

    void tick(){
        second++;
        if(second == 60){
            minute++;
            second = 0;
            if(minute == 60){
                hour++;
                minute = 0;
            }
        }
    }
};

int main() {

    Time currentTime;

    cout << "Default Time: ";
    currentTime.displayTime();
    cout << endl;


    currentTime.setTime(12, 30, 45);
    cout << "After setting time to 12:30:45: ";
    currentTime.displayTime();
    cout << endl;


    currentTime.tick();
    cout << "After ticking one second: ";
    currentTime.displayTime();
    cout << endl;


    Time anotherTime(23, 59, 59);
    cout << "Another time (23:59:59): ";
    anotherTime.displayTime();
    cout << endl;


    anotherTime.tick();
    cout << "After ticking one second (expecting 00:00:00): ";
    anotherTime.displayTime();
    cout << endl;

    return 0;
}
