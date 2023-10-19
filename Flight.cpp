#include<iostream>

using namespace std;

class Flight{
    int FlightNumber;
    string Destination;
    float Distance;
    float Fuel;

    void CalFuel(){
        if(Distance<=1000){
            Fuel = 500;
        }else
        if(Distance>1000 && Distance<=2000){
            Fuel = 1100;
        }else{
            Fuel = 2200;
        }
    } 

    public:
    void Feed_Info(){
        cout<<"Enter the Flight Number"<<endl;
        cin>>FlightNumber;

        cout<<"Enter the Destination"<<endl;
        cin>>Destination;

        cout<<"Enter the Distance"<<endl;
        cin>>Distance;

        CalFuel();
    }

    void Show_Fuel(){
        cout<<"Your Flight Number is ----->"<<" "<<FlightNumber<<endl;
        cout<<"Your Destination is ----->"<<" "<<Destination<<endl;
        cout<<"Your Travelling Distance is ----->"<<" "<<Distance<<endl;
        cout<<"The Fuel is ----->"<<" "<<Fuel<<endl;
    }
};

int main(){
    Flight f1;

    f1.Feed_Info();

    cout<<"###########################################################################"<<endl;
    cout<<"###########################################################################"<<endl;

    f1.Show_Fuel();

    return 0;
}