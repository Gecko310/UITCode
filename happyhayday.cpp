#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
class Animal{
private:
    int soluot;
public:
    
};
class cow: public Animal{
    int c;
    int litsuabo;
    int n;
    public:
    void input(){
        cin >> c;
    }
    void output(){
        for (int i=0;i<c-1;i++){
            cout << "Booo,";
        } 
        cout << "Booo";
    }
    void output2(int n){
        cout <<"Bo: "<< n*c*10<< endl;
    }
};
class sheep: public Animal{
int s;
int litsuacuu;
int n;
    public:
    void input(){
        cin >> s;
    }
    void output(){
        for (int i=0;i<s;i++){
            cout << ",Beee";
        }
    }
    void output2(int n){
        cout <<"Cuu: "<< n*s*5<< endl;
    }
};
class goat: public Animal{
    int g;
    int litsuade;
    int n;
    public:
    void input(){
        cin >> g;
    }
    void output(){
        for (int i=0;i<g;i++){
            cout <<",Eeee";
        }
        cout << endl;
    }
    void output2(int n){
        cout <<"De: "<< n*g*8<< endl;
    }
};
int main() {
    cow c;
    c.input();
    sheep s;
    s.input();
    goat g;
    g.input();
    
    int n;
    cin >> n;
    c.output();
    s.output();
    g.output();
    c.output2(n);
    s.output2(n);
    g.output2(n);
}
