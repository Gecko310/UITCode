#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    double tien;
    double tritue;
    double sucmanh;
class Cong{
public:
    virtual void input(){
        
    }
    virtual void output(){}
    int getTien(){
       return tien; 
    }
    int getTriTue(){
        return tritue;
    }
    int getSucManh(){
        return sucmanh;
    }
};
class GiaoThuong:public Cong{
int dongia;
int sohang;
public:
    void input(){
        cin>>dongia>>sohang;
    }
    void output(){
        tien=Cong::getTien()-dongia*sohang;
        if(tien<0) tien =-1;
    }
};
class HocThuat:public Cong{
int trituecauhoi;
public:    
    void input(){
        cin >> trituecauhoi;
    }
    void output(){
        if(Cong::getTriTue()>=trituecauhoi){
            tritue=Cong::getTriTue();
        }else tritue=-1;
    }
};
class SucManh:public Cong{
int matsuc;
public:
    void input(){
        cin >> matsuc;
    }
    void output(){
        sucmanh=Cong::getSucManh()-matsuc;
        if(sucmanh<0) sucmanh=-1;
    }
};
int main() {
    int n;
    cin >> n;
    Cong** nhungcaicong = new Cong*[n];
    int loai;
    for (int i=0;i<n;i++){
        cin >> loai;
        if(loai==1){
            nhungcaicong[i]=new GiaoThuong;
        }
        if(loai==2){
            nhungcaicong[i]=new HocThuat;
        }
        if(loai==3){
            nhungcaicong[i]=new SucManh;
        }
        nhungcaicong[i]->input();
    }
    cin >> tien >> tritue >> sucmanh;
    for (int i=0;i<n;i++){
         nhungcaicong[i]->output();
    }
    if(tritue==-1||sucmanh==-1||tien==-1) {cout <<-1;}
    else 
    cout <<tien<<" "<<tritue << " "<< sucmanh;
}
