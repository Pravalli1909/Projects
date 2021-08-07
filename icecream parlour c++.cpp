#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
char name[20];
int customerID;
static int bill;
class icecream
{
	public:
		icecream()
		{
			cout<<"\t"<<"..............*welcome to madhuram world*.............."<<endl;
			cout<<"enter the name and customerID:";
			cin>>name>>customerID;
}
void menu()
{
	char c;
	int r,n;
	int s1,s2,s3;
	int n1,n2,n3;
	cout<<"\t"<<"choose n:-If you are a new customer to madhuram"<<endl;
	cout<<"\t"<<"choose r:-If you are a regular customer to madhuram"<<endl;
	cout<<"Enter your choice:";
	cin>>c;
	switch(c)
	{
		case 'r':
			cout<<"\t"<<"Here you go!!:-"<<endl;
			cout<<"\t\t\t"<<"1.Mostly ordered"<<endl;
			cout<<"\t\t\t"<<"2.New items"<<endl;	 
			cout<<"\t\t\t"<<"3.Today special offers"<<endl;
			cout<<"Enter your choice:";
			cin>>r;
			switch(r)
			{
				case 1:
					cout<<"\t\t\t"<<"!!!Your choice is mostly ordered!!!"<<endl;
					cout<<" 1.Cappuccino blast  "<<endl;
					cout<<" 2.Banana fudge  "<<endl;			
					cout<<" 3.chocolate marshmallow  "<<endl;
					cout<<"Enter your choice:";
					cin>>s1;
					switch(s1)
					{
						case 1:
							bill=bill+240;
							cout<<"Cappuccino blast:"<<"\t"<<"Rs.240"<<endl;
							break;
							case 2:
								bill=bill+260;
								cout<<"Banana fudge:"<<"\t"<<"Rs.260"<<endl;
								break;
								case 3:
									bill=bill+280;
									cout<<"chocolate marshmallow:"<<"\t"<<"Rs.280"<<endl;
					}
					break;
				}
				case 2:
					cout<<"\t\t\t"<<"!!! Your choice is New items!!!"<<endl;
					cout<<" 1.Cotton candy"<<endl;
					cout<<" 2.Coconut cream"<<endl;
					cout<<" 3.Cherry vanilla"<<endl;
					cout<<"Enter your choice:";
					cin>>s2;
					switch(s2)
					{
						case 1:
							bill=bill+325;
							cout<<"Cotton candy:"<<"\t"<<"Rs.325"<<endl;
							break;
							case 2:
								bill=bill+350;
								cout<<"Coconut cream"<<"\t"<<"Rs.350"<<endl;
								break;
								case 3:
									bill=bill+375;
									cout<<"Cherry vanilla"<<"\t"<<"Rs.375"<<endl;
								}
									break;
									case 3:
										cout<<"\t\t\t"<<"!!!Your choice for special offers!!!"<<endl;
										cout<<" 1.Butterscoth Ribbon  "<<endl;
										cout<<" 2.Chocolate chip  "<<endl;
										cout<<"3. Rainbow Sherbet  "<<endl;
										cin>>s3;
										switch(s3)
										{
											case 1:
												bill=bill+90;
												cout<<"Butterscoth Ribbon:"<<"\t"<<"Rs.90"<<endl;
												break;
												case 2:
													bill=bill+120;
													cout<<"Chocolate Chip:"<<"\t"<<"Rs.120"<<endl;
													break;
													case 3:
														bill=bill+150;
														cout<<"Rainbow Sherbet:"<<"\t"<<"Rs.150"<<endl;
														break;
													}
													break;
										
					case 'n':
						cout<<"\t\t"<<"HEARTY WELCOME ~NEW CUSTOMER~"<<endl;
						cout<<"\t"<<"The available recipes are:"<<endl;
						cout<<"\t\t"<<"1.Scoops"<<endl;
						cout<<"\t\t"<<"2.Indulge"<<endl;
						cout<<"\t\t"<<"3.Refresh"<<endl;
						cin>>n;
						switch(n)
						{
							case 1:
								cout<<"Your choice is Scoops"<<endl;
								cout<<" 1:Baseball Nut"<<endl;
								cout<<" 2:Caramel chocolate crunch"<<endl;
								cout<<" 3:Dulce de leche"<<endl;
								cout<<"Enter your choice:";
								cin>>n1;
								switch(n1)
								{
									case 1:
										bill=bill+70;
										cout<<"Baseball nut:"<<"\t"<<"Rs.70"<<endl;
										break;
										case 2:
											bill=bill+100;
											cout<<"Caramel chocolate crunch:"<<"\t"<<"Rs.100"<<endl;
											break;
											case 3:
												bill=bill+130;
												cout<<"Dulce de leche:"<<"\t"<<"Rs.130"<<endl;
											}
												break;
									case 2:
									cout<<"Your choice is Indulge "<<endl;
									cout<<" 1:Take me home" <<endl;
									cout<<" 2.Signature Sundaes"<<endl;
									cout<<" 3.Scoops of joy"<<endl;
									cout<<"Enter your choice:";
									cin>>n2;
									switch(n2)
									{
										case 1:
											bill=bill+400;
											cout<<"Take me home:"<<"\t"<<"Rs.400"<<endl;
											break;
											case 2:
												bill=bill+430;
												cout<<"Signature Sundaes:"<<"\t"<<"Rs.430"<<endl;
												break;
											case 3:
											bill=bill+460;
											cout<<"Scoops of joy:"<<"\t"<<"Rs.460"<<endl;
										}
											break;
									case 3:
										cout<<"Your choice is Refresh"<<endl;
									cout<<" 1:Fruity thick shake"  <<endl;
									cout<<" 2:Caramel thick shake"  <<endl;
									cout<<" 3:Chocolate thick shake"  <<endl;
									cout<<"Enter your choice:";
									cin>>n3;
									switch(n3)
									{
										case 1:
											bill=bill+150;
											cout<<"Fruity thick shake:"<<"\t"<<"Rs.150"<<endl;
											break;
											case 2:
												bill=bill+170;
												cout<<"Caramel thick shake:"<<"\t"<<"Rs.170"<<endl;
												break;
											case 3:
											bill=bill+190;
											cout<<"Chocolate thick shake:"<<"\t"<<"Rs.190"<<endl;
										}
											break;
										}
									}
								}
							};
							class badri:public icecream
							{
								char ch;
								public:
									void take()
									{
										cout<<"To make another choice:'b'"<<endl;
										cout<<"To get the bill:'p'";
										cin>>ch;
										if(ch=='b')
										{
											menu();
											take();
										}
										else
										{
											cout<<"\t\t\t"<<  "$$$$Your bill@ MADHURAM WORLD is:Rs:"<<bill;
											cout<<"\\t\t\t\t\t\t\t\t\t\t\t\t"<<" ~!~!~!THANK YOU~!~!~!"<<endl;
											cout<<"\t\t\t\t\t\t\t\t"<<"//PLEASE VISIT AGAIN//";
											}
										}
									};
									int main()
									{
										raji g;
										g.menu();
										g.take();
										fstream ice;
										ice.open("pravalli.txt",ios::out|ios::app);
										ice<<"Customer Name:"<<name<<endl;
										ice<<"CustomerID:"<<customerID<<endl;
										ice<<"Your bill is:"<<bill<<endl;
									}
								
									
										
										
										
									
										
									
									
									
										
									
							
													
									
																
								
						
				
