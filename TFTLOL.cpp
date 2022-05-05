#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
class TFT{
    int soluong;
    int luot;
    int tuong[100];
    int satthuong[100];
public:
    
    void input(){
        cin >> soluong;
        for (int i=0;i<soluong;i++){
            cin >> tuong[i];
            cin >> satthuong[i];
            if (tuong[i]==1){
                satthuong[i]+=10;
                satthuong[i]*=2;
            }else
            {
                satthuong[i]+=15;
            }
        }
    }
    void output(int luot){
        for (int i=0;i<soluong;i++){
            if(tuong[i]==1){
                cout << "Malphite - Sat thuong duoc giam: " << satthuong[i]*luot<< endl;
            }else
                cout << "Cho'Gath - Sat thuong duoc giam: " << satthuong[i]*luot+10<< endl;
        }
    }
};
int main() {
    int l;
    TFT t;
    t.input();
    cin >> l;
    t.output(l);
}
