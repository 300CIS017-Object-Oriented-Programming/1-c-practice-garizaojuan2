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

void excerciseArrays(){
    int arr[1000];
    int number, cases;
    cin >> cases;
    int i = 0;
    while(i < cases){
        cin >> number;
        arr[i] = number;
        i += 1;
    }
    i -= 1;
    while(i >= 0){
        cout << arr[i] << " ";
        i -= 1;
    }
    cout << endl;
}


void excerciseString(){
    string cad1, cad2;
    cin >> cad1;
    cin >> cad2;
    cout << cad1.size() << " " << cad2.size() << endl;
    for(int i = 0; i < cad1.size(); i++)
        cout << cad1[i];
    for(int i = 0; i < cad2.size(); i++)
        cout << cad2[i];
    cout << endl;
    cout << cad2[0];
    for(int i = 1; i < cad1.size(); i++)
        cout << cad1[i];
    cout << " " << cad1[0];
    for(int i = 1; i < cad2.size(); i++)
        cout << cad2[i];
    cout << endl;
}

// Ejercicio de clases

string numberToString(int num){
    string ans;
    if(num == 0)
        ans = "0";
    else{
        int number = num;
        while (number > 0) {
            char digito = '0' + (number % 10);
            ans = digito + ans;
            number /= 10;
        }
    }
    return ans;
}
class Student
{
 private:
    string first_name;
    string last_name;
    int age;
    int standard;
 public:
    Student(){}
    void set_age(int edad){
        age = edad;
    }  
    void set_first_name(string nombre){
        first_name = nombre;
    }
    void set_last_name(string apellido){
        last_name = apellido;
    }
    void set_standard(int num){
        standard = num;
    }
    int get_age(){
        return age;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
        string ans = numberToString(age);
        ans = ans + "," + first_name + "," +  last_name + "," + numberToString(standard); 
        return ans;   
    }   
};

class Student{
private:
    vector<int> scores;
    int total = 0;
public:
    Student(){}
    void input(){
        int num;
        for(int i = 0; i < 5; i++){
            cin >> num;
            scores.push_back(num);
            total += num;
            
        }
    }
    int calculateTotalScore(){
        return total;
    }
};

int ejercicio classObjects(){
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

int main(){
    return 0;
}


