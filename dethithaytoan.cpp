#include <iostream>

using namespace std;

class Smartphone
{
// int SmartPhone;
string maCPU;
int CPU;
int Screen;
int Case;
string MaSmartphone;
string maScreen;
string hang;
string mavo;
int mauvo;
public:
   Smartphone(){
       CPU=0;
       Screen=0;
       Case=0;
   }
//    virtual void setSmartPhone(){
//        cin >> SmartPhone;
//    }
//     int getSP(){
//        return SmartPhone;
//    }
    virtual void input()=0;
   virtual void setCPU(){
       cin >> CPU;
       cin >> maCPU;
   }
   virtual void setScreen(){
       cin >> maScreen;
       cin.ignore();
       cin >> hang;
       cin >> Screen;
   }
   virtual void MaManHinh(){
       cin >> maScreen;
       cin.ignore();
       cin >> hang;
   }
   virtual void setCase(){
        cin >> Case;
        cin >> mavo;
        cin >> mauvo;
   }
   virtual void MarsCase(){
       cin >>mavo;
       cin >> mauvo;
   }
   virtual void Ma(){
       cin>> MaSmartphone;
   }
   string getMa(){
       return MaSmartphone;
   }
   string getHang(){
       return hang;
   }
   string getmaScreen(){
       return maScreen;
   }
   int getCPU(){
       return CPU;
   }
   string getMaCPU(){
       return maCPU;
   }
   int getScreen(){
       return Screen;
   }
   int getCase(){
       return Case;
   }
   string getmavo(){
       return mavo;
   }
   int getmauvo(){
       return mauvo;
   }
   virtual void output(){
    //    if(SmartPhone)
   }
   virtual void Tien()=0;
};
class Mars: public Smartphone
{
    int chong_loa;
    int sum =0;
public:
    void input(){
        Smartphone::Ma();
        Smartphone::setCPU();
        Smartphone::MaManHinh();
        cin>> chong_loa;
        Smartphone::MarsCase();
    }
    void Tien(){
        if(Smartphone::getCPU()==1){
            sum+=200;
        }if(Smartphone::getCPU()==2) sum+=400;
        if(Smartphone::getCPU()==3) sum+=600;
            if(chong_loa==1){ sum+=500;}
            else sum+=300;
        
        sum+=400;
    sum *=1.5;
    }
    void output(){
        cout <<Smartphone::getMa() << " Mars "<< sum<< endl;
        if(Smartphone::getCPU()==1){
            cout <<"CPU: "<<Smartphone::getMaCPU()<<" Alpha Black 2 1.8 200\n" ;
        }if(Smartphone::getCPU()==2){
            cout <<"CPU: "<<Smartphone::getMaCPU()<<" Beta Black 4 2.46 400\n" ;
        }if(Smartphone::getCPU()==3){
            cout <<"CPU: "<<Smartphone::getMaCPU()<<" Gamma White 4 2.6 600\n" ;
        }
        cout <<"Man hinh: "<<Smartphone::getmaScreen()<<" "<< Smartphone::getHang()<<" ";
            if(chong_loa == 1){
                cout <<"FullHD 500 Chong loa\n";
            }else 
            cout <<"FullHD 300\n";
        cout <<"Vo smartphone: ";
            cout<<Smartphone::getmavo() <<" Nhom Black"<<" ";
            if(Smartphone::getmauvo()==1){cout <<"Do 400";}
            else cout <<"Den 400";  
    }
};

class Venus :public Smartphone
{
    int chong_loa;
    int sum =0;
public:
    void input(){
        Smartphone::Ma();
        Smartphone::setCPU();
        Smartphone::setScreen();
        if(Smartphone::getScreen()==2){
            cin >> chong_loa;
        }
        Smartphone::setCase();
    }
    void Tien(){
        if(Smartphone::getCPU()==1){
            sum+=200;
        }else sum+=400;
        if(Smartphone::getScreen()==1){
            sum+=200;
        }else{
            if(chong_loa==1){ sum+=500;}
            else sum+=300;
        }
        if(Smartphone::getCase()==1){
            sum +=400;
        }else sum +=200;
    sum *=1.3;
    }
    void output(){
        cout <<Smartphone::getMa() << " Venus "<< sum<< endl;
        if(Smartphone::getCPU()==1){
            cout <<"CPU: "<<Smartphone::getMaCPU()<<" Alpha Black 2 1.8 200\n" ;
        }if(Smartphone::getCPU()==2){
            cout <<"CPU: "<<Smartphone::getMaCPU()<<" Beta Black 4 2.46 400\n" ;
        }
        cout <<"Man hinh: "<<Smartphone::getmaScreen()<<" "<< Smartphone::getHang()<<" ";
        if(Smartphone::getScreen()==1){cout <<"HD 200\n";}
        if(Smartphone::getScreen()==2){
            if(chong_loa == 1){
                cout <<"FullHD 500 Chong loa\n";
            }else 
            cout <<"FullHD 300\n";
        }
        cout <<"Vo smartphone: ";
        if(Smartphone::getCase()==1){
            cout<<Smartphone::getmavo() <<" Nhom Black"<<" ";
            if(Smartphone::getmauvo()==1){cout <<"Do 400";}
            else cout <<"Den 400";
        }else {cout <<Smartphone::getmavo()<<" Nhua White"<<" ";
        if(Smartphone::getmauvo()==1){cout <<"Do 200";}
            else if(Smartphone::getmauvo()==2) cout <<"Den 200";
            else if(Smartphone::getmauvo()==3)cout <<"Xanh 200";
        }

    }
};
class Jupiter: public Smartphone{

};

int main(){
    int n;
    cin >> n;
    Smartphone** DSPhone = new Smartphone*[n];
    for (int i=0;i<n;i++){
        int loai;
        cin >> loai;
        if (loai ==1){
            DSPhone[i]= new Venus;
        }if (loai ==2 ){
            DSPhone[i]= new Mars;
        }
        // if(loai == 3){
        //     DSPhone[i]= new Jupiter;
        // }
        DSPhone[i]->input();
        DSPhone[i]->Tien();
    }
    for (int i=0;i<n;i++){
        cout <<"Smartphone: "; 
        DSPhone[i]->output();
    }
}
