#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Animal{
private:
int luot;
int a[100];
int h,b,c,d;
public:
    void set(int &h,int &b,int &c, int& d,int &luot){
        this->h=h;
        this->b=b;
        this->c=c;
        this->d=d;
        this->luot=luot;
    }
    // Animal(){
    //     h=a[0];
    //     b=a[1];
    //     c=a[2];
    //     d=a[3];
    // }
    virtual void output(){
        cout <<"Booo";
        for(int i=0;i<h-1;i++){
            cout <<",Booo";
        }
        for(int i=0;i<b;i++){
            cout <<",Beee";
        }
        for(int i=0;i<c;i++){
            cout <<",Eeee";
        }
        for(int i=0;i<d;i++){
            cout <<",";
        }
    }
    
    int get(int &luot){
        this->luot = luot;
        return this->luot;
    }
    int bo(int &h){
        this->h=h;
        return h;
    }
    int cuu(int &b){
        this->b=b;
        return b;
    }
    int de(int &c){
        this->c=c;
        return c;
    }
    
};
class Cow:public Animal{
int n;
public:
    void output(int &temp,int&temp2){
    n= Animal::get(temp);
    int sum = n*10*Animal::bo(temp2);
    int sum2=temp2;
    int temp3=temp2;
    int temp4;
    // cout << "\nBo: "<<n*10*Animal::bo(temp2);
    for (int i=0;i<temp;i++){
        if(i%3==0&&i!=0){
            sum2+=1;
        }
        while(temp3>1){
            sum2+=1;
            temp3-=2;
        }
        temp3 = temp2;
    }
    for (int i=0;i<10;i++){
        if(temp2>1){
            sum +=10;
            temp2-=2;
        }
    }
    cout << "\nBo: "<<sum2<<","<<sum;
    }
};
class Sheep:public Animal{
int n;
public:
    void output(int &temp,int&temp2){
    n= Animal::get(temp);
    int sum = n*5*temp2;
    int sum2=temp2;
    int temp3=temp2;
    int temp4;
    // cout << "\nBo: "<<n*10*Animal::bo(temp2);
    for (int i=0;i<temp;i++){
        if(i%3==0&&i!=0&&temp2>=4){
            sum2+=1;
        }
        while(temp3>1){
            sum2+=1;
            temp3-=2;
        }
        temp3 = temp2;
    }
    for (int i=0;i<10;i++){
        if(temp2>1){
            sum +=5;
            temp2-=2;
        }
    }
    cout << "\nCuu: "<<sum2<<","<<sum;
    }
};
class Goat:public Animal{
int n;
public:
    void output(int &temp,int&temp2){
    n= Animal::get(temp);
    int sum = n*8*Animal::cuu(temp2);
    int sum2=temp2;
    int temp3=temp2;
    int temp4;
    // cout << "\nBo: "<<n*10*Animal::bo(temp2);
    for (int i=0;i<temp;i++){
        if(i%3==0&&i!=0){
            sum2+=1;
        }
        while(temp3>1){
            sum2+=1;
            temp3-=2;
        }
        temp3 = temp2;
    }
    for (int i=0;i<10;i++){
        if(temp2>1){
            sum +=8;
            temp2-=2;
        }
    }
    cout << "\nDe: "<<sum2<<","<<sum;
    }
};
class Rabbit:public Animal{
int n;
public:
    void output(int &temp,int&temp2){
    n= Animal::get(temp);
    int sum2=temp2;
    int temp3=temp2;
    int temp4;
    // cout << "\nBo: "<<n*10*Animal::bo(temp2);
    for (int i=0;i<temp;i++){
        
        while(temp3>1){
            sum2+=1;
            temp3-=2;
        }
        temp3=temp2;
    }
    cout << "\nTho: "<<sum2+7<<","<<0;
    }
};
int main(){
    int luot;
    int y,i,o,p;
    cin >> y>>i>>o>>p>>luot;
    Animal a;
    a.set(y,i,o,p,luot);
    a.output();
    Cow c;
    // cout << a.get();
    c.output(luot,y);
    Sheep s;
    s.output(luot,i);
    Goat g;
    g.output(luot,o);
    Rabbit r;
    r.output(luot,p);
}
