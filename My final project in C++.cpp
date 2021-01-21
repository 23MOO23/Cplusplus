#include <iostream> 
#include <conio>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <exception>
using namespace std;
HANDLE handle = GetStdHandle (STD_OUTPUT_HANDLE);
int main ()
{
	double  balance=0 , amount=0 , total , processor , board , graphics;
	char choice;
	int ctr=0  , change ,  selection , payment , quantity , trans[50] , inven = 0 , select,myex;

	string products [] = {"ROG STRIX GTX1080 8GB                   ", "ROG STRIX GTX1070 8GB                   ", "MSI GTX1070 Gaming X 8GB                ", "ZOTAC GTX1070 8GB                       ","MSI GTX1080 Gaming X twin Frozr 4 8GB   ", "Sapphire RX 480 8GB                     ","XFX RX 480 8GB                          ","Sapphire Nitro R9-390 Tri-X OC 8GB      ","Sapphire R9 Fury X 4GB                  ","MSI GTX980 Ti ARMOR 2X OC 8GB           ",
	"AMD A10-7870K @ 3.9GHz                   ","Intel Core I7-6700K @ 4.0GHz            ","AMD A8-7600 @ 3.1GHz                     ","Intel Core I5-6600K @ 3.5GHz            ","AMD A6-6400k @ 3.9GHz                    ","Intel I3-6100 @ 3.7GHz                   ","AMD A4-6300 @ 3.7GHz                     ","Intel Pentium G3258 @ 3.2GHz             ","AMD FX-9590 @ 4.70GHz                   ","Intel Pentium G4400 @ 3.3GHz             ",
	"MSI 970 Gaming                           ","Asus B85-Pro Gamer                       ","Gigabyte H81m-DS2                        ","Gigabyte F2A68HM-DS2                     ","Asus Maximus VIII Hero                  ","MSI A88X-G45 Gaming                      ","MSI X99A Godlike Gaming                 ","Asus Rampage V Extreme                  ","ASRock Z77 Extreme 6                     ","ASRock FM2A68M-DG3+                      "};
	double prices [] = {40820.00 , 28230.00 , 26500.00 , 26500.00 , 42000.00 , 13800.00 , 13800.00 , 16250.00 , 32700.00 , 29990.00,
	       6300.00 , 16500.00 , 3500.00 , 11400.00 , 2150.00 , 5450.00 , 1550.00 , 3388.00 , 15250.00 , 2700.00,
	       4950.00 , 4900.00 , 2350.00 , 2330.00 , 14200.00 , 6150.00 , 27900.00 , 26500.00 , 9200.00 , 2560.00};
	//Loading screen
	system("color 0a");
 cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop	
}
	//for storing records
	for (ctr=0; ctr<50; ctr++)
		{
			trans [ctr] = -1;
		}
//user interface part
do{
		system ("cls");
		SetConsoleTextAttribute (handle, 11);
		cout << "		                              >>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
		cout << "		         >>>>>>>>>>>>>>>>>>>>>>> "; SetConsoleTextAttribute (handle, 6); cout <<"Computer Parts Store"; SetConsoleTextAttribute (handle, 11); cout<<" >>>>>>>>>>>>>>>>>>>>>>>"<<endl;
		cout << "		         >                     >>>>>>>>>>>>>>>>>>>>>>>>                     >" <<endl;
		cout << "		         >              "; SetConsoleTextAttribute (handle, 3); cout <<"a.Processors"; SetConsoleTextAttribute (handle, 11); cout <<"                                        >" <<endl;
		cout << "		         >              "; SetConsoleTextAttribute (handle, 2); cout <<"b.Graphic Cards"; SetConsoleTextAttribute (handle, 11); cout <<"                                     >" <<endl;
		cout << "		         >              "; SetConsoleTextAttribute (handle, 5); cout <<"c.Mother Boards"; SetConsoleTextAttribute (handle, 11); cout <<"                                     >" <<endl;
		cout << "		         >              "; SetConsoleTextAttribute (handle, 7); cout <<"d.Records"; SetConsoleTextAttribute (handle, 11); cout <<"                                           >" <<endl;
		cout << "		         >              "; SetConsoleTextAttribute (handle, 10); cout <<"x.Exit"; SetConsoleTextAttribute (handle, 11); cout <<"                                              >" <<endl;
		cout << "		         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
		SetConsoleTextAttribute (handle, 9); cout <<"Your Choice :";
		cin >> choice;
		switch (choice)
		{
			case 'a':
				system ("cls");
	            SetConsoleTextAttribute (handle, 3);
	            cout<<"------------------------------------------------------------------------------------------------------------------------";
	            cout<<endl;
	            cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++PROCESSORS+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	            cout<<endl;
	            cout<<"------------------------------------------------------------------------------------------------------------------------";
	            for (ctr=0;ctr<10;ctr++)
					{
					cout << (char)(97+ctr)<< ". " << products [ctr+10] << setprecision (2) << fixed <<" "<<prices [ctr+10]  << endl;
					}
					do{
					cout << "Enter your Choice :";
					cin >> choice;
				}while (!(choice>=97&&choice<=106));
					while(true)
					{	
					cout << "Enter Quantity :";
					cin>>quantity;
					try
					{
					if (cin.fail())
					{
						throw myex;
					}
					if (quantity>=0&&quantity<=30)
					break;
					}
					catch (int myex){
						cin.clear();
						cin.ignore(10000,'\n');
					}
					}
					selection = (int)choice;
					selection -= 97;
				if (selection>=0&&selection<=10)
	                {
	                    
						amount=prices[selection+10]*quantity;
	                    cout<<"Amount Due is " << amount <<" pesos" <<endl;
	                    cout<<"Enter your Payment :";
	                    cin>>payment;
	                    if (payment>=prices[selection+10]*quantity)
	                    {
	                    	change=payment-amount;
	                    	cout<<"Change is " << change <<" pesos" <<endl;
	                    	cout<<"Transaction Complete!!";
	                    	trans [inven]=selection+10;
	                    	inven++;
						}
						else
						cout<<"Not Enough Cash!!!";
	                    getch ();
	                }
	            break;
            case 'b':
            system ("cls");
                SetConsoleTextAttribute (handle, 2);
                cout<<"------------------------------------------------------------------------------------------------------------------------";
                cout<<endl;
				cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++GRAPHIC CARDS++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
				cout<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------";
				
			for (ctr=0;ctr<10;ctr++)
				{
				cout << (char)(97+ctr)<<". "<< products [ctr] << setprecision (2) << fixed << prices [ctr]  << endl;
				}
		 do{
			
				cout << "Enter your Choice :";
				cin >> choice;
			}while (!(choice>=97&&choice<=106));
				while(true)
				{	
				cout << "Enter Quantity :";
				cin>>quantity;
				try
				{
				if (cin.fail())
				{
					throw myex;
				}
				if (quantity>=0&&quantity<=30)
				break;
				}
				catch (int myex){
					cin.clear();
					cin.ignore(10000,'\n');
				}
				}
				selection=(int)choice;
				selection-=97;
			if (selection>=0&&selection<=10)
            {
			amount=prices[selection]*quantity;
			cout<<"Amount Due is " << amount <<" pesos" << endl;
			cout<<"Enter your Payment :";
			cin>>payment;
			if (payment>=prices[selection]*quantity)
				{
					change=payment-amount;
					cout<<"Change is " << change <<" pesos" << endl;
					cout<<"Transaction Complete!!";
			  		trans [inven]=selection;
					inven++;
				}
				else
				cout<<"Not Enough Cash!!!";
				getch ();
			}
			break;
			case 'c':
			system ("cls");
            SetConsoleTextAttribute (handle, 5);
            cout<<"------------------------------------------------------------------------------------------------------------------------";
            cout<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++MOTHER BOARDS+++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
            cout<<endl;
            cout<<"------------------------------------------------------------------------------------------------------------------------";
            for (ctr=0;ctr<10;ctr++)
				{
				cout << (char)(97+ctr)<<". "<< products [ctr+20] << setprecision (2) << fixed <<" "<<prices [ctr+20]  << endl;
				}
				do{
				cout << "Enter your Choice :";
				cin >> choice;
			}while (!(choice>=97&&choice<=106));
				while(true)
				{	
				cout << "Enter Quantity :";
				cin>>quantity;
				try
				{
				if (cin.fail())
				{
					throw myex;
				}
				if (quantity>=0&&quantity<=30)
				break;
				}
				catch (int myex){
					cin.clear();
					cin.ignore(10000,'\n');
				}
				}
				selection=(int)choice;
				selection-=97;
			if (selection>=0&&selection<=10)
                {
                    amount=prices[selection+20]*quantity;
                    cout<<"Amount Due  is " << amount <<" pesos" << endl;
                    cout<<"Enter your Payment :";
                    cin>>payment;
                    if (payment>=prices[selection+20]*quantity)
                    {
                    	change=payment-amount;
                    	cout<<"Change is " << change <<" pesos" <<endl;
                    	cout<<"Transaction Complete!!";
                    	trans [inven]=selection+20;
                    	inven++;
					}
					else
					cout<<"Not Enough Cash!!!";
				}
            getch ();
            break;
			case 'd':
			system ("cls");
			 SetConsoleTextAttribute (handle, 7);
				cout<<"------------------------------------------------------------------------------------------------------------------------";
				cout<<endl;
				cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++RECORDS++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
				cout<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------";
			
				total = 0;	
				ctr = 0;
				while (trans [ctr]!=-1)
						{
			    		cout <<products [trans[ctr]]<< setprecision(2) << fixed <<prices[trans [ctr]]*quantity << endl;
			    		total+=prices[trans [ctr]]*quantity;
			    		ctr++;
			}
			cout <<"Total:                                  "<<setw(8)<<setprecision(2) << fixed<< total << " pesos";
			getch ();
			break;
		}
}while (choice!='x');
SetConsoleTextAttribute (handle, 10);
cout<<"---------------------------------------------------------------------------------------------------------------------";
cout<<"                                             +++++++++++++++++++++++++++++++"<<endl;
cout<<"------------------------------------------+Happy To Serve you...Thanks!!+--------------------------------------------";
cout<<"                                             +++++++++++++++++++++++++++++++"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------------";
getch ();
return 0;
}

