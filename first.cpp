#include <iostream>
using namespace std;

int toMinutes(int h, int m){
    return h * 60 + m;
}

int convertTime(int current, int correct){
    int difference = correct - current;
    int count = 0;
    
    count += difference / 60;
    difference %= 60;
    
    count += difference / 15;
    difference %= 15;
    
    count += difference / 5;
    difference %= 5;
    
    count += difference;
    return count;
}

int main(){
    int h1, m1, h2, m2;
    char colon;
    
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;
    
    int current = toMinutes(h1, m1);
    int correct = toMinutes(h2, m2);
    
    cout << convertTime(current, correct);
    return 0;
}
