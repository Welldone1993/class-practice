#include <iostream>
using namespace std;
main( ){
	int month=0,today,numday;
	int i,j;
		cout<<"what day is today?"<<"\n";
		cout<<"shanbe = 0 ,yekshanbe = 1 ,doshanbe = 2 , seshanbe = 3 , charshanbe = 4 , panjshanbe = 5 , Jome = 6\n";
		cin>>today;
		string months[12] = {"farvardin","ordibehesht","khordad","tir","mordad","shahrivar","mehr","aban","azar","dey","bahman","esfand"};
		i=today+1;
		while (month<12){
				cout<<months[month]<<"\n";
				numday=1;
				if(month<6){
					j=31;
				}else{
					j=30;
				}
				while(numday<=j){
						if(i%7==1){
						cout<<numday<<" : shanbe\n";
						}
						if(i%7==2){
						cout<<numday<<" : YEKshanbe\n";
						}
						if(i%7==3){
						cout<<numday<<" : DOshanbe\n";
						}
						if(i%7==4){
						cout<<numday<<" : SEshanbe\n";
						}
						if(i%7==5){
						cout<<numday<<" : CHARshanbe\n";
						}
						if(i%7==6){
						cout<<numday<<" : PANJshanbe\n";
						}
						if(i%7==0){
						cout<<numday<<" : Jome\n";
						}
					numday++;
					i++;
				}
				i=i%7;	
			month++;
		}
	return 0;
}
