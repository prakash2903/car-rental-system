#include <iostream>
#include<string>
#include <stdlib.h>
#include <iomanip>
#include <fstream>

using namespace std;

float trent=0;
int tcar=0;
int flag=0;
string first_name;
string last_name;
long int contact;
int days;

/********************************************************** BASE CLASS - CAR *******************************************************/

class car
{
	protected:

		int n;
		char ch;

		static int cfigo,critz,cbrio,cfortuner,cscorpio,cinnova,cindigo,cethios,cverna;
    public:
        void cust_details()
		{
		    system("cls");
			if(trent==0)
			{
                cout << "\t CUSTOMER DETAILS \n\n";

                cout << "\t\n Enter first name: ";
                cin >> first_name;

                cout << "\t\n Enter last name: ";
                cin >> last_name;

                cout << "\t\n Enter contact number: ";
                cin >> contact;
			}
		}
};

/********************* Static variables definition ***********************/

int car::cfigo=1;
int car::critz=2;
int car::cbrio=3;
int car::cfortuner=3;
int car::cscorpio=2;
int car::cinnova=3;
int car::cindigo=1;
int car::cethios=1;
int car::cverna=3;

int errorhand(int s)
{
    try
    {
        flag=0;
        if(s==0)
        {
            throw "There is no car in that model available\n";
        }
        else
        {
            return 0;
        }
    }
    catch(const char*ch)
    {
        flag=1;
        cout<<"Error occured ::";
        cout<<ch;

    }
}

/****************************** DERIVED CLASS 1 (Hatchback) **********************************/

class hatchback:public car
{
	public:
		void get_data()
		{
            cout << "\t\t\t\t FORD FIGO \t\t\t\t RITZ \t\t\t\t BRIO \n\n";
            cout << "\t MODEL NO. \t\t    5687 \t\t\t\t 7980 \t\t\t\t 3434 \n\n";
            cout << "\t MILEAGE \t\t    12 \t\t\t\t\t 11 \t\t\t\t 14 \n\n";
            cout << "\t COLOUR \t\t    RED \t\t\t\t BLUE \t\t\t\t VIOLET \n\n";
            cout << "\t COST/DAY \t\t    1000 \t\t\t\t 1500 \t\t\t\t 1800 \n\n";
		}

		void display()
		{
		    system("cls");
			cout<<"\n\n\t----------------------------------------DETAILS OF HATCHBACK CARS----------------------------------------------\n";

			for(int i=1;i<=cfigo;i++)
			{
				cout<<"\n\nFORD FIGO\n\n";
			}
			for(int i=1;i<=critz;i++)
			{
				cout<<"RITZ\n\n";
			}
			for(int i=1;i<=cbrio;i++)
			{
				cout<<"BRIO\n\n";
			}
		}

		void buy_car()
		{

			cout<<"\n\t Want to rent a Hatchback car (Y/N) ? >>> ";
			cin>>ch;

			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cust_details();

				cout << "\n\n\t Enter \n\n\t 1 >>> To rent Ford Figo \n\t 2 >>> To rent Ritz \n\t 3 >>> To rent Brio \n\n \t >>> ";
				cin >> n;


				switch(n)
				{
					case 1:
                        errorhand(cfigo);
						if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
                            tcar=1;
                            cout<<"\tTotal amount = Rs."<<1000*days<<endl<<endl;
                            trent+=1000*days;
                            cfigo--;
                        }


						break;

					case 2:
					    errorhand(critz);
						if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
                            tcar=2;
                            cout<<"\tTotal amount = Rs."<<1500*days<<endl<<endl;
                            trent+=1500*days;
                            critz--;
                        }


						break;

					case 3:
                        errorhand(cbrio);
						if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
                            tcar=3;
                            cout<<"\tTotal amount = Rs."<<1800*days<<endl<<endl;
                            trent+=1800*days;
                            cbrio--;
                        }


						break;

					default:
                        cout<<"\tINVALID CHOICE!!!\n";
                        break;
				}
			}
		}
};

/*********************************** DERIVED CLASS 2 (SUV) ******************************************************/

class SUV:public car
{
	public:
		void get_data()
		{
            cout << "\t\t\t\t FORTUNER \t\t\t\t INNOVA \t\t\t\t SCORPIO \n\n";
            cout << "\t MODEL NO. \t\t    5687 \t\t\t\t 7980 \t\t\t\t 3434 \n\n";
            cout << "\t MILEAGE \t\t    12 \t\t\t\t\t 11 \t\t\t\t 14 \n\n";
            cout << "\t COLOUR \t\t    RED \t\t\t\t BLUE \t\t\t\t BLACK \n\n";
            cout << "\t COST/DAY \t\t    4800 \t\t\t\t 4500 \t\t\t\t 4000 \n\n";
		}

		void display()
		{
		    system("cls");
			cout<<"\n\n\t----------------------------------------DETAILS OF HATCHBACK CARS----------------------------------------------\n";

			for(int i=1;i<=cfortuner;i++)
			{
				cout<<"\nFORTUNER\n";
			}
			for(int i=1;i<=cinnova;i++)
			{
				cout<<"\nINNOVA\n\n";
			}
			for(int i=1;i<=cscorpio;i++)
			{
				cout<<"\nSCORPIO\n\n";
			}
		}

		void buy_car()
		{
			cout<<"\n\tWant to rent a SUV car (Y/N)? >>> ";
			cin>>ch;

			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cust_details();

				cout << "\n\n\t Enter \n\t 1 >>> To rent Fortuner \n\t 2 >>> To rent Innova \n\t 3 >>> To rent Scorpio \n\n \t >>> ";
				cin >> n;


				switch(n)
				{
					case 1:
					    errorhand(cfortuner);
						if(flag==0)
						{
						    cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
                            tcar=7;
							cout<<"\tTotal amount = Rs."<<4800*days<<endl<<endl;;
							trent+=4800*days;
							cfortuner--;
						}
						break;

					case 2:
					    errorhand(cinnova);
						if(flag==0)
						{
						    cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
						    tcar=8;
							cout<<"\tTotal amount = Rs."<<4500*days<<endl<<endl;
							trent+=4500*days;
							cinnova--;
						}
						break;

					case 3:
					    errorhand(cscorpio);
					    if(flag==0)
						{
						    cout << "\n\n\tEnter the number of days : ";
                            cin >> days;
						    tcar=9;
							cout<<"\tTotal amount = Rs."<<4000*days<<endl<<endl;
							trent+=4000*days;
							cscorpio--;
						}
						break;

					default:
					    cout<<"\t INVALID INPUT !!! \n";
                        break;
				}
			}
		}
};

/************************************** DERIVED CLASS 3 (Sedan) **************************************************/

class Sedan:public car
{
	public:
		void get_data()
		{
            cout << "\t\t\t\t INDIGO \t\t\t\t ETIOS \t\t\t\t VERNA \n\n";
            cout << "\t MODEL NO. \t\t    5687 \t\t\t\t 7980 \t\t\t\t 3434 \n\n";
            cout << "\t MILEAGE \t\t    12 \t\t\t\t\t 11 \t\t\t\t 14 \n\n";
            cout << "\t COLOUR \t\t    RED \t\t\t\t BLUE \t\t\t\t VIOLET \n\n";
            cout << "\t COST/DAY \t\t    1000 \t\t\t\t 1500 \t\t\t\t 1800 \n\n";

        }

		void display()
		{
		    system("cls");
			cout<<"\n\n\t------------------------------------------DETAILS OF SEDAN CARS----------------------------------------------\n";

			for(int i=1;i<=cindigo;i++)
			{
				cout<<"\n\nINDIGO\n\n";
			}

			for(int i=1;i<=cethios;i++)
			{
				cout<<"ETHIOS\n\n";
			}

			for(int i=1;i<=cverna;i++)
			{
				cout<<"VERNA\n\n";
			}
		}


		void buy_car()
		{

			cout<<"\n\t Want to rent a Sedan car (Y/N)? >>> ";
			cin>>ch;

			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cust_details();

				cout << "\n\n\t Enter \n\t 1 >>> To rent Indigo \n\t 2 >>> To rent Etios \n\t 3 >>> To rent Verna \n\n \t >>> ";
				cin >> n;


				switch(n)
				{
					case 1:
					    errorhand(cindigo);

						if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days:  ";
                            cin >> days;
                            tcar=4;
                            cout<<"\tTotal amount = Rs."<<3000*days<<endl<<endl;
                            trent+=3000*days;
                            cindigo--;
                        }


						break;

					case 2:
					    errorhand(cethios);
					    if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days:  ";
                            cin >> days;
                            tcar=5;
                            cout<<"\tTotal amount = Rs."<<3500*days<<endl<<endl;
                            trent+=3500*days;
                            cethios--;
                        }


                        break;

					case 3:
					    errorhand(cverna);
						if(flag==0)
                        {
                            cout << "\n\n\tEnter the number of days:  ";
                            cin >> days;
                            tcar=6;
                            cout<<"\tTotal amount = Rs."<<3800*days<<endl<<endl;
                            trent+=3800*days;
                            cverna--;
                        }


						break;

					default:
                            cout<<"\t INVALID INPUT !!! \n";
                            break;
				}
			}
		}
};

/***********************************************************************************************************************************************/

class rent:virtual public hatchback,virtual public Sedan,virtual public SUV
{
	private:
		int m;
    public:

		void display()
		{
                cout << "\n\t SELECT THE CATEGORY OF CAR \n\n";
                cout << "\t 1 >>> Hatchback \n\n\t 2 >>> Sedan \n\n\t 3 >>> SUV \n\n\t Your choice >>> ";
                cin >> m;

			switch(m)
			{
				case 1:
                    hatchback::display();
					hatchback::get_data();
					hatchback::buy_car();
					break;

				case 2:
				    Sedan::display();
					Sedan::get_data();
					Sedan::buy_car();
					break;

				case 3:
				    SUV::display();
					SUV::get_data();
					SUV::buy_car();
					break;
			}
		}
};

/********************************************* MAIN FUNCTION *****************************************************/

int main()
{
	char ch;
	rent r;

	cout<<"\n\n\t---------------------------------WELCOME TO FAST TRACK RENTALS----------------------------------\n";

	r.display();
	ofstream file;
    if(flag==0)
    {
        file.open("Customer_details.txt");
    }


    system("cls");
	file << "\n\n\t <<<<<<<<<<<<<<< FAST TRACK Rentals >>>>>>>>>>>>>>>\n";

	file << "\n\t\t\t  CUSTOMER DETAILS \n\n";
	file << "\t CUSTOMER NAME : " << first_name << "  " << last_name << endl << endl;
	file << "\t CONTACT : " << contact << endl << endl;
	if(flag==0)
    {
        file << left << setw(20) << "\t TYPE OF CAR ";
        file << left << setw(20) << " DAYS ";
        file << left << setw(20) << " COST ";
        file << left << setw(17) << " TOTAL  \n";
    }


	for(;;)
	{
		do
		{
			if(tcar==1 && flag==0)
			{
				file << left << setw(20) << " FORD FIGO";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.1000";
				file << left << setw(20) << 1000*days << "\n\t";
			}
			if(tcar==2 && flag==0)
			{
				file << left << setw(20) << " RITZ";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.1500";
				file << left << setw(20) << 1500*days << "\n\t";
			}
			if(tcar==3 && flag==0)
			{
				file << left << setw(20) << " BRIO";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.1800";
				file << left << setw(20) << 1800*days << "\n\t";
			}
			if(tcar==4 && flag==0)
			{
				file << left << setw(20) << " INDIGO";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.3000";
				file << left << setw(20) << 3000*days << "\n\t";
			}
			if(tcar==5 && flag==0)
			{
				file << left << setw(20) << " ETIOS";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.3500";
				file << left << setw(20) << 3500*days << "\n\t";
			}
			if(tcar==6 && flag==0)
			{
				file << left << setw(20) << " VERNA";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.3800";
				file << left << setw(20) << 3800*days << "\n\t";
			}
			if(tcar==7 && flag==0)
			{
				file << left << setw(20) << " FORTUNER";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.4800";
				file << left << setw(20) << 4800*days << "\n\t";
			}
			if(tcar==8 && flag==0)
			{
				file << left << setw(20) << " INNOVA";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.4500";
				file << left << setw(20) << 4500*days << "\n\t";
			}
			if(tcar==9 && flag==0)
			{
				file << left << setw(20) << " SCORPIO";
				file << left << setw(20) << days;
				file << left << setw(20) << "Rs.4000";
				file << left << setw(20) << 4000*days << "\n\t";
			}

			cout<<"\tWant to rent another car (Y/N) ? >>> ";
			cin>>ch;

			if(ch=='n'||ch=='N')
				break;
			r.display();

		}while(ch=='y'||ch=='Y');

		file.close();

        string linesread;
        ifstream infile ("Customer_details.txt");

        if (infile.is_open())
        {
            while(getline(infile, linesread))
            {
                cout << linesread << endl;
            }
                infile.close();
        }
        else
        {
            cout << "Cannot open file!";
        }

        cout << "\t Thank You for renting :) \n";
        cout << "\t TOTAL RENT: Rs." << trent << endl;
        exit(0);
	}
	return 0;
}
