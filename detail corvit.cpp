#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int s;
	
cout<<" press 1 for Amission inquiry:";
cout<<"\n press 2 for coures offered:";
cout<<"\n press 3 for fee structure:";
cout<<"\n press 4 for Faculty profile:";
cout<<"\n press 5  for insititute profile :";
cin>>s;
switch(s)
{
	case 1:
		cout<<"\n Amission inquiry:";
		break;
		case 2:
			cout<<"\n coures offered:";
			break;
			case 3:
				cout<<"\n fee structure:";
				break;
				case 4:
					cout<<"\n Faculty profile";
					break;
					case 5:
						cout<<"\n insititute profile";
						break ;
							default:
								
								cout<<"\n invaild entry";
								
}	
	cout<<"\n\n coming soon";
}
