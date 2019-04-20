#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Question{
    protected:
    string name,randomString;
    public:
    void gap(){
        cout<<"\t\t\t";
    }
    void askName(){
        cout<<"\t\t\tWhat is your name sir? "<<endl;
        gap();
        getline(cin,name);
        //cin.ignore();
    }
    void input(){
        gap();
        getline(cin,randomString);
    }
    

};

class SellingTalk : public virtual Question{
    double area;
    public:
    void putSellData(){
        int yesno;
        int landApartmentFlat;
        cout<<"\t\t\tYou know I manage Only lawgate property information."<<endl;
        gap();
        cout<<"Is it in Law gate? "<<endl;
        cout<<"\t\t\t[1] Yes"<<endl<<"\t\t\t[2] No"<<endl;
        gap();
        cin>>yesno;
        if(yesno==1){
            cout<<"\t\t\tSo, You want to sell"<<endl;
            cout<<"\t\t\t[1] Land?"<<endl;
            gap();
            cout<<"[2] Apartment?"<<endl;
            gap();
            cout<<"[3] Flat? "<<endl;
            gap();
            cin>>landApartmentFlat;
            switch(landApartmentFlat){
                case 1:
                cout<<"\t\t\tCan you tell me, How much area (in sqr feet) do u want to sell? "<<endl;
                gap();
                cin>>area;
                cout<<"\t\t\tThank you sir, Your current land price is "<<area*1593<<endl;
                cout<<"\t\t\tDo u want to sell your land? "<<endl;
                cout<<"\t\t\t[1] Yes or [2] No"<<endl;
                int x;
                gap();
                cin>>x;
                if(x==1){
                    cout<<"\t\t\tThank you Sir, Soon we will call you to know the details of your property"<<endl;
                    cout<<"\n\n";
                }
                else{
                    cout<<"\t\t\tThank you for your visit, Hope you will come again"<<endl;
                }
                break;

                case 2:
                cout<<"\t\t\tCan you tell me, How much area (in sqr feet) your apartment has? "<<endl;
                gap();
                cin>>area;
                cout<<"\t\t\tHow many BHK of your apartment?"<<endl;
                int bhk;
                gap();
                cin>>bhk;
                cout<<"\t\t\tThank you sir, Your apartment price is "<<area*630*0.4*bhk<<endl;
                cout<<"\t\t\tDo u want to sell your Apartment? "<<endl;
                cout<<"\t\t\t[1] Yes or [2] No"<<endl;
                int y;
                gap();
                cin>>y;
                if(y==1){
                    cout<<"\t\t\tThank you Sir, Soon we will call you to know the details of your apartment"<<endl;
                    cout<<"\n\n";
                }
                else{
                    cout<<"\t\t\tThank you for your visit, Hope you will come again"<<endl;
                }
                break;

                case 3:
                cout<<"\t\t\tCan you tell me, How much area (in sqr feet) your flat has? "<<endl;
                gap();
                cin>>area;
                cout<<"\t\t\tHow many BHK of your flat?"<<endl;
                gap();
                cin>>bhk;
                cout<<"\t\t\tThank you sir, Your flat current price is "<<area*530*0.3*bhk<<endl;
                cout<<"\t\t\tDo u want to sell your Apartment? "<<endl;
                cout<<"\t\t\t[1] Yes or [2] No"<<endl;
                gap();
                cin>>y;
                if(y==1){
                    cout<<"\t\t\tThank you Sir, Soon we will call you to know the details of your flat"<<endl;
                    cout<<"\n\n";
                }
                else{
                    cout<<"\t\t\tThank you for your visit, Hope you will come again"<<endl;
                }
                break;

                default:
                gap();
                cout<<"Something went wrong! please try again"<<endl;
                putSellData();
                break;
            }
        }
        else{
            cout<<"\t\t\tSorry sir,Thank you for visit, See you soon"<<endl;
        }
    }

};

class BuyingTalk:public virtual Question{
    public:
    void buyingOption(){
            cout<<"\t\t\tSo, You want to buy"<<endl;
            cout<<"\t\t\t[1] Land?"<<endl;
            gap();
            cout<<"[2] Apartment?"<<endl;
            gap();
            cout<<"[3] Flat? "<<endl;
            gap();
            int opt;
            cin>>opt;

            switch(opt){
                case 1:
                gap();
                cout<<"Here you can buy land from this list, kindly choose\n";
                gap();
                readLandData();
                break;

                case 2:
                gap();
                cout<<"Here you can buy apartment from this list, kindly choose\n";
                gap();
                readApartmentData();
                break;

                case 3:
                gap();
                cout<<"Here you can buy flat from this list, kindly choose\n";
                gap();
                readFlatData();
                break;

                default:
                gap();
                cout<<"Something went wrong! try again\n";
                buyingOption();
                break;
            }

    }
    void readLandData(){
        string line;
        ifstream myFile;
        myFile.open("land.txt", ios::out | ios::app | ios::binary);
        if(myFile.is_open()){
            while(getline(myFile,line)){
                gap();
                cout<<line<<"\n";
            }
            myFile.close();
        }
        else{
            gap();
            cout<<"Enable to open file\n";
        }
    }

        void readApartmentData(){
        string line;
        ifstream myFile;
        myFile.open("apartment.txt", ios::out | ios::app | ios::binary);
        if(myFile.is_open()){
            while(getline(myFile,line)){
                gap();
                cout<<line<<"\n";
            }
            myFile.close();
        }
        else{
            gap();
            cout<<"Enable to open file\n";
        }
    }

        void readFlatData(){
        string line;
        ifstream myFile;
        myFile.open("flat.txt", ios::out | ios::app | ios::binary);
        if(myFile.is_open()){
            while(getline(myFile,line)){
                gap();
                cout<<line<<"\n";
            }
            myFile.close();
        }
        else{
            gap();
            cout<<"Enable to open file\n";
        }
    }

};

class RentingTalk:public virtual Question{
    public:
    void rentingOption(){
            cout<<"\t\t\tSo, You want to rent"<<endl;
            gap();
            cout<<"[1] Apartment?"<<endl;
            gap();
            cout<<"[2] Flat? "<<endl;
            gap();
            int opt2;
            cin>>opt2;

            switch(opt2){

                case 1:
                gap();
                cout<<"Here you can rent these apartment from the list, kindly choose\n";
                gap();
                readApartmentData2();
                break;

                case 2:
                gap();
                cout<<"Here you can rent these flat from the list, kindly choose\n";
                gap();
                readFlatData2();
                break;

                default:
                gap();
                cout<<"Something went wrong! try again\n";
                rentingOption();
                break;
            }

    }

        void readApartmentData2(){
        string line;
        ifstream myFile;
        myFile.open("apartment.txt", ios::out | ios::app | ios::binary);
        if(myFile.is_open()){
            while(getline(myFile,line)){
                gap();
                cout<<line<<"\n";
            }
            myFile.close();
        }
        else{
            gap();
            cout<<"Enable to open file\n";
        }
    }

        void readFlatData2(){
        string line;
        ifstream myFile;
        myFile.open("flat.txt", ios::out | ios::app | ios::binary);
        if(myFile.is_open()){
            while(getline(myFile,line)){
                gap();
                cout<<line<<"\n";
            }
            myFile.close();
        }
        else{
            gap();
            cout<<"Enable to open file\n";
        }
    }
};

class Answer : public SellingTalk, public BuyingTalk, public RentingTalk{

    public:
    void replyName(){
        cout<<"\t\t\tOk, "<<name<<" How can I help you? "<<endl;
    }
    void welcome(){
        cout<<"\t\t\tOk then, You have come to the right place"<<endl;
    }

    void askMainQuestion(){
        int option;
        gap();
        cout<<name<<", You want to know about? "<<endl;
        cout<<"\t\t\t[1] Selling price of your property?"<<endl;
        cout<<"\t\t\t[2] Want to buy"<<endl;
        cout<<"\t\t\t[3] Searching for some rent"<<endl;
        cout<<"\t\t\t[4] Others help"<<endl;
        gap();
        cin>>option;
            switch(option){
            case 1:
            gap();
            cout<<"Ok, So you want to sell"<<endl;
            putSellData();
            break;

            case 2:
            gap();
            buyingOption();;
            break;

            case 3:
            gap();
            rentingOption();
            break;

            case 4:
            cout<<"\t\t\tWait 2 min sir, in this case my assistant will help you"<<endl;
            break;

            default:
            gap();
            cout<<"Wrong entered, try again"<<endl;
            askMainQuestion();
            break;
        }
        
    }

};


int main(){
    Answer ans;
    cout<<"\n\n"<<endl;
    cout<<"\t\t\tLAWGATE PROPERTY ADVISOR PHAGWARA"<<endl;
    cout<<"==============================================================================="<<endl;
    ans.askName();
    ans.replyName();
    ans.input();
    ans.welcome();
    ans.askMainQuestion();

    

    return 0;

}