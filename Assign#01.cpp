#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <stdio.h>
using namespace std;
class Floor
{
public:
	int room;
	int occupied;
};
int main()
{
	// Question 01 
	int size;
	do
	{
		cout << "Enter the Number of Floor : ";
		cin >> size;
	} while (size < 1);

	Floor floor[size];
	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Enter No of Rooms of " << i + 1 << " Floor :";
			cin >> floor[i].room;
		} while (floor[i].room < 10);
		do
		{
			cout << "Enter No of Rooms Occupied : ";
			cin >> floor[i].occupied;
		} while (floor[i].occupied > floor[i].room);
	}
	cout << "\nNo of Floors in Hostal : " << size << endl;

	float total_room = 0;
	float total_occupied = 0;
	for (int i = 0; i < size; i++)
	{
		total_room += floor[i].room;
		total_occupied += floor[i].occupied;
	}
	cout << "Total No of Rooms : " << total_room << endl;
	cout << "Total No of Rooms Occupied: " << total_occupied << endl;
	cout << "Total No of Rooms Unoccupied: "
		<< total_room - total_occupied << endl;
	cout << "Percentage of Occupied : "
		 << (total_occupied / total_room) * 100 << "%" << endl;

	// Question 02
	int sale[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter  today's sales for store " << i + 1 << ": ";
		cin >> sale[i];
	}
	cout << "\nSALES BAR CHART (Each * = Rs.100)" << endl;
	for (int i = 0; i < 5; i++)
	{
		int x = sale[i] / 100;
		cout << "Store 01: ";
		for (int j = 0; j < x; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//	Question 03
	char ch;
	int no, qty;
	int bill;
	cout << "M Meals" << endl;
	cout << "B Beverages" << endl;
	do
	{
		cout << "Enter m/M to buy a meal and B or b for a Beverage" << endl;
		cin >> ch;
	} while (ch != 'm' && ch != 'b' && ch == 'M' && ch == 'B');
	if ((ch == 'm') || (ch == 'M'))
	{
		do
		{
			cout << "1. Burger Rs. 450" << endl;
			cout << "2. Roll Paratha Rs. 220" << endl;
			cout << "3. Spaghetti Rs. 300" << endl;
			cin >> no;
		} while (no > 3 && no < 1);
		cout << "Enter Quantity of Selected Item :";
		cin >> qty;
		switch (no)
		{
		case 1:
			bill = qty * 450;
			break;
		case 2:
			bill = qty * 220;
			break;
		case 3:
			bill = qty * 300;
		}
	}
	else
	{
		do
		{
			cout << "1. Coffee Rs 200/cup" << endl;
			cout << "2. Fresh Juice Rs. 350/glass" << endl;
			cout << "3. Green Tea Rs. 75/cup" << endl;
			cin >> no;
		} while (no > 3 && no < 1);
		cout << "Enter Quantity of Selected Item :";
		cin >> qty;
		switch (no)
		{
		case 1:
			bill = qty * 200;
			break;
		case 2:
			bill = qty * 350;
			break;
		case 3:
			bill = qty * 75;
		}
	}
	cout << "Original Bill : " << bill << endl;

	time_t timeNow = time(0);
	tm *now = localtime(&timeNow);
	int thisHour = now->tm_hour;
	cout << "time hrs :" << thisHour << endl;
	if (thisHour >= 16 && thisHour <= 18)
	{
		bill -= bill * 0.25;
		cout << "Bill after 25 % discount :" << bill << endl;
	}
	else if (thisHour >= 1 && thisHour <= 8)
	{
		bill -= bill * 0.5;
		cout << "Bill after 25 % discount :" << bill << endl;
	}
	else
	{
		cout << "Bill with No discount :" << bill << endl;
	}

	//	Question 04
	char ch4;
	cout << "Enter a Character :";
	ch4 = getchar();
	cout << "\nCharacter :" << ch4 << endl;
	cout << "ASCII :" << (int)ch4 << endl;
	if ((ch4 >= 97 && ch4 <= 122) || (ch4 >= 65 && ch4 <= 90))
	{
		cout << "Alphabet" << endl;
	}
	else if (ch4 >= 48 && ch4 <= 57)
	{
		cout << "Numeric" << endl;
	}
	else
	{
		cout << "Special Character" << endl;
	}

	// Question 05
	int binary;
	int r;

	cout << "Enter the Binary Number" << endl;
	cin >> binary;

	int decimal = 0;
	for (int i = 0; binary > 0; i++)
	{
		r = binary % 10;
		binary = binary / 10;
		//        cout<<"\nDigit : "<<r;
		decimal += r * pow(2, i);
		cout << "Deciaml " << (decimal ^ 2) << endl;
	}
	cout << "Deciaml : " << decimal << endl;

	cout << "" << endl;
	while (binary > 0)
	{
		r = binary % 10;
		binary = binary / 10;
		cout << "\nDigit : " << r;
		decimal += r;
	}

	// 	Question 06
	bool flag = false;
	string str;
	cout << "Start Genreal Diagnosis" << endl;
	do
	{
		cout << "Recoding symptoms information - ";
		getline(cin, str);
	} while (str != "DONE");
	do
	{
		cout << "Rebooting server to see if condition still exists - ";
		getline(cin, str);
	} while (str != "DONE");
	do
	{
		cout << "Is this a newly installed server? ";
		getline(cin, str);
	} while (str != "yes" && str != "no");
	if (str == "yes")
	{
		do
		{
			cout << "Reset any components that may have some loose "
				<< "during shipping and reboot the server - ";
			getline(cin, str);
		} while (str != "DONE");
		do
		{
			cout << "Does condition still exist? ";
			getline(cin, str);
		} while (str != "yes" && str != "no");
		if (str == "yes")
		{
			//			cout<<"yes";
			goto exist;
		}
		else
		{
			//			cout<<"no";
		exit:
			do
			{
				cout << "Record Action taken ";
				getline(cin, str);
			} while (str != "DONE");
		end:
			cout << "End" << endl;
		}
	}
	else if (str == "no")
	{
	exist:
		do
		{
			cout << "Were options added or was the configuration changed recently? ";
			getline(cin, str);
		} while (str != "yes" && str != "no");
		if (str == "yes")
		{
			do
			{
				cout << "Isolate what has changed. Verify it was installed correctly."
					<< "Restore server to last known working state or original shipped "
					<< "configuration. ";
				getline(cin, str);
			} while (str != "DONE");
			do
			{
				cout << "Does condition still exist? ";
				getline(cin, str);
			} while (str != "yes" && str != "no");
			if (str == "yes")
			{
				goto isolate;
			}
			else
			{
				goto exit;
			}
		}
		else
		{
			do
			{
				cout << "Check for service Notifications.";
				getline(cin, str);
			} while (str != "DONE");
			do
			{
				cout << "Download the latest software and firmware from the HP website. ";
				getline(cin, str);
			} while (str != "DONE");
			do
			{
				cout << "Does condition still exist? ";
				getline(cin, str);
			} while (str != "yes" && str != "no");
			if (str == "yes")
			{
			isolate:
				do
				{
					cout << "Isolate and minimize the  memory coniguration. ";
					getline(cin, str);
				} while (str != "DONE");
				do
				{
					cout << "Does condition still exist? ";
					getline(cin, str);
				} while (str != "yes" && str != "no");
				if (str == "yes")
				{
					do
					{
						cout << "Break Server down to minimal configuration. ";
						getline(cin, str);
					} while (str != "DONE");
					do
					{
						cout << "Does condition still exist? ";
						getline(cin, str);
					} while (str != "yes" && str != "no");
					if (str == "yes")
					{
						do
						{
							cout << "Troubleshoot or replace basic server spare parts. ";
							getline(cin, str);
						} while (str != "DONE");
						do
						{
							cout << "Does condition still exist? ";
							getline(cin, str);
						} while (str != "yes" && str != "no");
						if (str == "yes")
						{
						ensure:
							do
							{
								cout << "Ensure the following information is available:\n"
									<< "\t>Survey configuration snapshots\n"
									<< "\t>OS event log file\n"
									<< "\t>Full crash dump\n";
								getline(cin, str);
							} while (str != "DONE");
							cout << "Call HP Service Provider" << endl;
						}
						else
						{
							do
							{
								cout << "Record symptoms & error information on repair tag if sending back a failed part. ";
								getline(cin, str);
							} while (str != "DONE");
							goto end;
						}
					}
					else
					{
						do
						{
							cout << "Add one part at a time back to configuation to isolate faulty component. ";
							getline(cin, str);
						} while (str != "DONE");
						do
						{
							cout << "Does condition still exist? ";
							getline(cin, str);
						} while (str != "yes" && str != "no");
						if (str == "yes")
						{
							goto ensure;
						}
						else
						{
							goto exit;
						}
					}
				}
				else
				{
					goto exit;
				}
			}
			else
			{
				goto exit;
			}
		}
	}
}
