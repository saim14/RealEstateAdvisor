#include<iostream>
#include<string>
using namespace std;

class RealEstate{
    protected:
    string name, email,phoneNumber, locationCity, propertyType, lookingFor;
    int bhk;
    int mainOption;
    float price, area;

    public:
    void getMainInfo(){
        cout<<"\t\t\tEnter your name: ";
        getline(cin, name);
        //cin.ignore();
        cout<<"\t\t\tEnter your email address: ";
        getline(cin, email);
        //cin.ignore();
        cout<<"\t\t\tEnter your phone number: ";
        getline(cin, phoneNumber);
        //cin.ignore();
    }

    void getAreaBHKprice(){
        
        
    }
};

class Sell : public virtual RealEstate{
    public:
    void getSellInfo(){
        cout<<"\t\t\tEnter your city: ";
        getline(cin, locationCity);
        cin.ignore();
        cout<<"\t\t\tEnter property type(residential or commercial): ";
        getline(cin,propertyType);
        cin.ignore();

        cout<<"\t\t\tEnter BHK(e.g. 1,2,3,4,.....):  ";
        cin>>bhk;
        cin.sync(); 

        cout<<"\t\t\tEnter area in square feet: ";
        cin>>area;
        //cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
        
        cout<<"\t\t\tEnter expected price: ";
        cin>>price;
        //cin.ignore(numeric_limits<streamsize>::max(),'\n'); 

    }


};

class Rent : public virtual RealEstate{
    public:
    void getRentInfo(){
        cout<<"\t\t\tEnter your city: ";
        getline(cin, locationCity);
        cin.ignore();
        cout<<"\t\t\tEnter property type(residential or commercial): ";
        getline(cin,propertyType);
        cin.ignore();

        cout<<"\t\t\tEnter BHK(e.g. 1,2,3,4,.....):  ";
        cin>>bhk;
        cin.clear();

        cout<<"\t\t\tEnter area in square feet: ";
        cin>>area;
        cin.clear();
        
        cout<<"\t\t\tEnter expected price: ";
        cin>>price;
        cin.clear();
    }
};




class Advisor : public Sell, public Rent{
    public:
    void welcome(){
        cout<<"\t\t\tWellcome Mr. "<<name<<"."<<endl;
        do{
            cout<<"\t\t\tWhat are you looking for? (According to your requirment Enter number: )"<<endl;
            cout<<"\t\t\t[1] Looking for sell your property? "<<endl;
            cout<<"\t\t\t[2] You want to rent your property? "<<endl;
            cout<<"\t\t\t[3] Looking for buy? "<<endl;
            cout<<"\t\t\t[4] Or you need rent property?"<<endl;
            cout<<"\t\t\t";
            cin>>mainOption;
            switch(mainOption){
                case 1:
                getSellInfo();
                cout<<"\n\t\t\tThank you for your response"<<endl;
                break;

                case 2:
                getRentInfo();
                cout<<"\n\t\t\tThank you for your response"<<endl;
                break;

                case 3:

                break;

                case 4:

                break;

                default:

                break;


            }





            if(mainOption<=0 || mainOption > 4){
                cout<<"\t\t\tSomething wrong! try again......."<<endl;
            }
        

        }
        while(mainOption<=0 || mainOption > 4);


    }

};







int main(){

    Advisor a;
    cout<<"\n\n==========================YOUR PROPERTY ADVISOR=========================\n\n\n\n\n";
    a.getMainInfo();
    a.welcome();
    

    return 0;
}