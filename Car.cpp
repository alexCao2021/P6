#include <iostream>
#include<list>
#include<iterator>
using namespace std;
class Car{//class definition with price parameter in it
public:
int price;
public:
Car(int p){
this->price=p;
}
};

void price_range(list <Car> l){
int h=-1,low,r;
list <Car> :: iterator it;
for(it = l.begin();it!=l.end() ;++it){//loop that gets the highest price
if(h<((it)->price))
h=(it)->price;
}
low=h;
for(it = l.begin();it!=l.end() ;++it){//loop that gets the lowest price
if(low>((it)->price))
low=(it)->price;
}
r=h-low;//get the range and print it
cout<<"The price range is :"<<r<<endl;
}

void average(list<Car> l){
double avg=0;
int s=0;
list <Car> :: iterator it;
for(it = l.begin();it!=l.end() ;++it){
s=s+(it)->price;//calculate sum of prices
}
avg=s/(l.size()*1.0);//calculate Average and print it
cout<<"Average is "<<avg<<endl;
}
int main()
{
list <Car> list1;
//sample random 5 car objects with prices are stored in list1
list1.push_back(Car(30000));
list1.push_back(Car(760000));
list1.push_back(Car(80000));
list1.push_back(Car(60000));
list1.push_back(Car(20000));
//call the functions appropriately to find average and price range
average(list1);
price_range(list1);
return 0;
}