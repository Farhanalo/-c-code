#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int no;
	cout<<"press 1 for sms package :";
	cout<<"\n prss 2 for call pkg :";
	cout<<"\n please enter number ";
	cin>>no;
	switch(no){
		case 1:
			{
			
			cout<<"\n press 1 for Activation ";
			cout<<"\n press 2 for deactivation ";
			cout<<"\n please enter number ";
			
			int a;
			cin>>a;
			switch(a){
				case 1:
					{
					
					cout<<"\n press 1 for daily pkg: \n press 2 for weekly pkg: \n press 3 for montly pkg:";
					cout<<"\n press 1 to 3 for activation the pkgs= ";
					
				
				
					int a1;
					cin>>a1;
						
				
				
					switch(a1){ 
					case 1:
					{
					
						cout<<"Daily pkg Active: ";
						break;
						}
						case 2:
						{
						
						
							cout<<"Weekly pkg Active";
							break;
						}
						case 3:{
							
						
							cout<<"Montly pkg active ";
							break;
						}
						default:
							{
								cout<<"Back to Menu:";
						}
						
				   	}
				   	break;
		      case 2:
			  {
				cout<<"\n pkg De-activation:";
						break;
					}
		
	
	       default:
	        {
	        cout<<"Enter 1 to 4:";
	    
	    case 2:
		{
			cout<<"press 1 for call pkg Activation :";
			cout<<"\n press 2 for call pkg De-ctivation :";
		}
	}
		
	}
}
}
}

