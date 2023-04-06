#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

bool check_status(){
    string status;
    ifstream file("/sys/class/power_supply/BAT0/status");
    getline(file, status);

    file.close();

    if(status == "Discharging") {
        return true;
    } else {
        return false;
    }
}

int check_battery(){
    string capacity;
    int bat;
    ifstream file("/sys/class/power_supply/BAT0/capacity");
    getline(file, capacity);

    file.close();

    bat = stoi(capacity);
    return bat;
}

int main() {
    int lowbat = 20;
    while(true){
        int x = check_battery();
        if(x<=lowbat && check_status()) {
            system("notify-send 'Recharge Me Daddy ;('");
        }
        if(x<=5){
            system("systemctl suspend");
        }
        sleep(120);
    }

    return 0;
}
