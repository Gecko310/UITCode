#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Thuyen{
    string name;
    int soluong;
public:
    virtual void input(){
        cin >> name;
        cin >> soluong;
    }
    virtual void output(){
        cout << name << " - ";
    }
    virtual void output2(){
        cout << "- "<< soluong << " thuyen vien - ";
    }
};

class Ghe:public Thuyen{
    int check;
public:
    void input(){
        Thuyen::input();
        cin >> check;
    }
    void output(){
        Thuyen::output();
        cout << "Ghe ";
        Thuyen::output2();
        if (check == 1){ cout << "Co Dong Co \n";}
    }
};
class ThuyenBe:public Thuyen{
    string hang;
public:
    void input(){
        Thuyen::input();
        cin >> hang;
    }
    void output(){
        Thuyen::output();
        cout <<"Thuyen thuong ";
        Thuyen::output2();
        cout << hang << "\n";
    }
    void outputhang(){
        cout << hang << " - ";
    }
};
class ThuyenLon:public ThuyenBe{
    int phamvi;
public:
    void input(){
        ThuyenBe::input();
        cin >> phamvi;
    }
    void output(){
        Thuyen::output();
        cout <<"Thuyen lon ";
        Thuyen::output2();
        ThuyenBe::outputhang();
        cout << phamvi<<"m\n";
    }
};
int main() {
    int n;
    cin >> n;
    Thuyen** DSThuyen = new Thuyen*[n];
    for (int i=0;i<n;i++){
        int loai;
        cin >> loai;
        if (loai == 1) {
			DSThuyen[i] = new Ghe;
		}
		if (loai == 2) {
			DSThuyen[i] = new ThuyenBe;
		}
		if (loai == 3) {
			DSThuyen[i] = new ThuyenLon;
		}
        DSThuyen[i]->input();
    }
    for(int i=0;i<n;i++)
        DSThuyen[i]->output();
}
