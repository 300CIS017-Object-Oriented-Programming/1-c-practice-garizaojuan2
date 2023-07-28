#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void excerciseInOut(){
    int num, ans = 0;
    for(int i = 0; i < 3; i++){
        cin >> num;
        ans += num;
    }
    cout << ans << endl;
}

void excerciseCondi(){
    int num;
    cin >> num;
    if(num > 9)
        cout << "Greater than 9";
    else if(num == 1)
        cout << "one";
    else if(num == 2)
        cout << "two";
    else if(num == 3)
        cout << "three";
    else if(num == 4)
        cout << "four";
    else if(num == 5)
        cout << "five";
    else if(num == 6)
        cout << "six";
    else if(num == 7)
        cout << "seven";
    else if(num == 8)
        cout << "eight";
    else if(num == 9)
        cout << "nine";
}

void aux3(int num){
    if(num == 1)
        cout << "one";
    else if(num == 2)
        cout << "two";
    else if(num == 3)
        cout << "three";
    else if(num == 4)
        cout << "four";
    else if(num == 5)
        cout << "five";
    else if(num == 6)
        cout << "six";
    else if(num == 7)
        cout << "seven";
    else if(num == 8)
        cout << "eight";
    else if(num == 9)
        cout << "nine";
    cout << endl;
}
void excerciseLoop(){
    int num1, num2;
    cin >> num1;
    cin >> num2;
    for(int i = num1; i <= num2; i++){
        if(i <= 9)
            aux3(i);
        else{
            if(i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }            
    }
}

void excerciseFunc(){
    int num;
    cin >> num;
    int may = num;
    for(int i = 0; i < 3; i++){
        cin >> num;
        if(num > may)
            may = num;
    }
    cout << may << endl;
}

void excerciseArrays



