/*
This is the program to demonstrate the basic use STL in C++. 
STL Containers :
1. List
2. Vector
3. Set
4. MultiSet
5. Map  
6. MultiMap
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

#include<list>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

//Fuction to demonstrate the use of List
void stl_list()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\tLIST\n\n";
	list<int>l;
	list<int>::iterator it,it1,it2;
	cout<<"Operations of List are : \n";
	cout<<"1. Insert element at beginning in the List.\n";
	cout<<"2. Insert element at the end in the List.\n";
	cout<<"3. Insert element before the element at a specified position.\n";
	cout<<"4. Delete element from the beginning.\n";
	cout<<"5. Delete element from the end. \n";
	cout<<"6. Size of the List.\n";
	cout<<"7. Erase element from any position from the List.\n";
	cout<<"8. Sort the List in asscending Order.\n";
	cout<<"9. Reverse the List\n";
	cout<<"10.Display the List\n";
	cout<<"11.EXIT List Operation.\n";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,ele;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter -1 to stop entering element :\n";
				cin>>ele;
				while(ele!=-1)
				{
					l.push_front(ele);
					cin>>ele;
				}
				break;
			case 2:
				cout<<"Enter -1 to stop entering element :\n";
				cin>>ele;
				while(ele!=-1)
				{
					l.push_back(ele);
					cin>>ele;
				}
				break;
			case 3:
				cout<<"Enter Number to insert : ";
				int n1;
				cin>>n1;
				cout<<"Enter occurance of that number :";
				int o;
				cin>>o;
				cout<<"Enter the pos to insert element :";
				int pos;
				cin>>pos;
				it=l.begin();
				while(pos--)
					++it;
				--it;
				l.insert(it,o,n1);
				break;
			case 4:
				cout<<"Element deleted from first is : "<<*l.begin();
				l.pop_front();
				break;
			case 5:
				cout<<"Element deleted from the end is : "<<*--l.end();
				l.pop_back();
				break;
			case 6:
				cout<<"Size of List is :"<<l.size();
				break;
			case 7:
				it1=l.begin();
				cout<<"\nEnter position from where you want to delete :";
				int spos;
				cin>>spos;
				advance(it1,--spos);
				l.erase(it1);
				break;
			case 8:
				l.sort();
				break;
			case 9:
				l.reverse();
				break;
			case 10:
				cout<<"\nYour List is : ";
				for(auto i=l.begin();i!=l.end();i++)
				{
					cout<<*i<<" ";
				}
				break;
			case 11:
				return;
				break;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				Sleep(600);
				break;
		}
	goto repeat;
	
}

//Fuction to demonstrate the use of vector
void stl_vector()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\tVECTOR\n\n";
	vector<int>v;
	vector<int>:: iterator it;
	cout<<"Operations of Vector are : ";
	cout<<"\n1. Insert an element into Vector.";
	cout<<"\n2. Insert element before the element at a specified position.";
	cout<<"\n3. Delete an element from vector.";
	cout<<"\n4. Erase element from any position from the List.";
	cout<<"\n5. Size of Vector.";
	cout<<"\n6. Display the Vector.";
	cout<<"\n7. Sort the Vector in asscending order.";
	cout<<"\n8. Sort the Vector in descending order.";
	cout<<"\n9. Exit Vector Operation.";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,ele;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter -1 to stop entering element :\n";
				cin>>ele;
				while(ele!=-1)
				{
					v.push_back(ele);
					cin>>ele;
				}
				break;
			case 2:
				cout<<"Enter Number to insert : ";
				int n1;
				cin>>n1;
				cout<<"Enter occurance of that number :";
				int o;
				cin>>o;
				cout<<"Enter the pos to insert element :";
				int pos;
				cin>>pos;
				it=v.begin();
				while(pos--)
					++it;
				--it;
				v.insert(it,o,n1);
				break;
			case 3:
				cout<<"Element deleted from the end is : "<<*--v.end();
				v.pop_back();
				break;
			case 4:
				it=v.begin();
				cout<<"\nEnter position from where you want to delete :";
				int spos;
				cin>>spos;
				advance(it,--spos);
				v.erase(it);
				break;
			case 5:
				cout<<"\nSize of Vector is :"<<v.size();
				break;
			case 6:
				cout<<"\nVector is : ";
				for(auto i=v.begin();i!=v.end();i++)
				{
					cout<<*i<<" ";
				}
				break;
			case 7:
				sort(v.begin(),v.end());
				break;
			case 8:
				sort(v.begin(),v.end(),greater<int>());
				break;
			case 9:
				return;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				Sleep(600);
				break;
		}
		goto repeat;
}

//Fuction to demonstrate the use of Set
void stl_set()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\tSET\n\n";
	set<int>s;
	set<int>::iterator it;
	cout<<"Operations of Set are : ";
	cout<<"\n1. Insert an element into Set.";
	cout<<"\n2. Delete an element from set.";
	cout<<"\n3. Find an element in set.";
	cout<<"\n4. Size of Set.";
	cout<<"\n5. Display the Set.";
	cout<<"\n6. Exit Set Operation.";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,ele;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"\nEnter -1 to stop entering element :\n";
				cin>>ele;
				while(ele!=-1)
				{
					s.insert(ele);
					cin>>ele;
				}
				break;
			case 2:
				cout<<"\nEnter Element, You want to erase : ";
				cin>>ele;
				s.erase(ele);
				break;
			case 3:
				cout<<"\nEnter element to find : ";
				cin>>ele;
				it=s.find(ele);
				if(it!=s.end())
					cout<<"\nElement found : "<<*it;
				else
					cout<<"\nElement not present in the Set";
				break;
			case 4:
				cout<<"\nSize of set is : "<<s.size();
				break;
			case 5:
				cout<<"\nSet is : ";
				for(auto i=s.begin();i!=s.end();i++)
				{
					cout<<*i<<" ";
				}
				break;
			case 6:
				return;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				break;
		}
		Sleep(1000);
		goto repeat;
}

//Fuction to demonstrate the use of MultiSet
void stl_multiset()
{
	system("cls");
	cout<<"\t\t\t\t\t\t Multi Set\n\n";
	multiset<int>ms;
	multiset<int>::iterator it;
	cout<<"Operations of Multi Set are : ";
	cout<<"\n1. Insert an element into MultiSet.";
	cout<<"\n2. Delete an element from Multiset.";
	cout<<"\n3. Find an element in Multiset.";
	cout<<"\n4. Size of MultiSet.";
	cout<<"\n5. Display the MultiSet.";
	cout<<"\n6. Count the frequency of a variable.";
	cout<<"\n7. Exit MultiSet Operation.";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,ele;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"\nEnter -1 to stop entering element :\n";
				cin>>ele;
				while(ele!=-1)
				{
					ms.insert(ele);
					cin>>ele;
				}
				break;
			case 2:
				cout<<"\nEnter Element, You want to erase : ";
				cin>>ele;
				ms.erase(ele);
				break;
			case 3:
				cout<<"\nEnter element to find : ";
				cin>>ele;
				it=ms.find(ele);
				if(it!=ms.end())
					cout<<"\nElement found : "<<*it;
				else
					cout<<"\nElement not present in the Set";
				break;
			case 4:
				cout<<"\nSize of Multiset is : "<<ms.size();
				break;
			case 5:
				cout<<"\nMultiSet is : ";
				for(auto i=ms.begin();i!=ms.end();i++)
				{
					cout<<*i<<" ";
				}
				break;
			case 6:
				cout<<"\nEnter number to count the occurances of that number :";
				int n1;
				cin>>n1;
				cout<<"\n"<<n1<<" occured "<<ms.count(n1)<<" times";
				break;
			case 7:
				return;
				break;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				break;
		}
		Sleep(1000);
		goto repeat;
}

//Fuction to demonstrate the use of Map
void stl_map()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\tMAP\n\n";
	map<int,int>m;
	map<int,int>::iterator it;
	cout<<"Operations of Map are : ";
	cout<<"\n1. Insert an element into Map.";
	cout<<"\n2. Delete an element from Map.";
	cout<<"\n3. Find an element in Map.";
	cout<<"\n4. Size of Map.";
	cout<<"\n5. Display the Map.";
	cout<<"\n6. Exit Map Operation.";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,key,value;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"\nEnter -1 as a key to stop entering element :\n";
				cout<<"\nEnter key :";
				cin>>key;
				cout<<"\nEnter Value :";
				cin>>value;
				while(key!=-1)
				{
					m.insert(pair<int,int>(key,value));
					cout<<"\nEnter key :";
					cin>>key;
					cout<<"Enter Value :";
					cin>>value;
				}
				break;
			case 2:
				cout<<"\nEnter Key, You want to erase : ";
				it=m.find(key);
				cin>>key;
				cout<<"\nElement Deleted :"<<"\nKey : "<<it->first<<" Value : "<<it->second;
				m.erase(key);
				break;
			case 3:
				cout<<"\nEnter key to find : ";
				cin>>key;
				it=m.find(key);
				if(it!=m.end())
					cout<<"\nKey : "<<it->first<<" Value : "<<it->second;
				else
					cout<<"\nKey-Value Pair not present in the Map";
				break;
			case 4:
				cout<<"\nSize of Map is : "<<m.size();
				break;
			case 5:
				cout<<"\nMap is : \n";
				for(auto i=m.begin();i!=m.end();i++)
				{
					cout<<i->first<<" "<<i->second<<endl;
				}
				break;
			case 6:
				return;
				break;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				break;
		}
		Sleep(1000);
		goto repeat;
}

//Fuction to demonstrate the use of MultiMap
void stl_multimap()
{
	system("cls");
	cout<<"\t\t\t\t\t\t Multi Map\n\n";
	multimap<int,int>mm;
	multimap<int,int>:: iterator it;
	cout<<"Operations of Multi Map are : ";
	cout<<"\n1. Insert an element into MultiMap.";
	cout<<"\n2. Delete an element from MultiMap.";
	cout<<"\n3. Find an element in MultiMap.";
	cout<<"\n4. Size of MultiMap.";
	cout<<"\n5. Display the MultiMap.";
	cout<<"\n6. Exit MultiMap Operation.";
	repeat:
	cout<<"\n\t\t\t\tEnter Your Choice (number) : ";
		int n,key,value;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"\nEnter -1 as a key to stop entering element :\n";
				cout<<"\nEnter key :";
				cin>>key;
				cout<<"\nEnter Value :";
				cin>>value;
				while(key!=-1)
				{
					mm.insert(pair<int,int>(key,value));
					cout<<"\nEnter key :";
					cin>>key;
					cout<<"\nEnter Value :";
					cin>>value;
				}
				break;
			case 2:
				cout<<"\nEnter Key, You want to erase : ";
				it=mm.find(key);
				cin>>key;
				cout<<"\nElement Deleted :"<<"\nKey : "<<it->first<<" Value : "<<it->second;
				mm.erase(key);
				break;
			case 3:
				cout<<"\nEnter key to find : ";
				cin>>key;
				it=mm.find(key);
				if(it!=mm.end())
					cout<<"\nKey : "<<it->first<<" Value : "<<it->second;
				else
					cout<<"\nKey-Value Pair not present in the Map";
				break;
			case 4:
				cout<<"\nSize of Map is : "<<mm.size();
				break;
			case 5:
				cout<<"\nMap is : \n";
				for(auto i=mm.begin();i!=mm.end();i++)
				{
					cout<<i->first<<" "<<i->second<<endl;
				}
				break;
			case 6:
				return;
				break;
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				break;
		}
		Sleep(1000);
		goto repeat;
}

int main()
{
	SetConsoleTitle("STL Demo : Rahul Kumar Mishra");
	char pin[4],c;
	again:
	system("cls");
	HANDLE screen = GetStdHandle( STD_OUTPUT_HANDLE );
    COORD max_size = GetLargestConsoleWindowSize( screen );
    SetConsoleTextAttribute( screen, FOREGROUND_GREEN);
	COORD pos;
    pos.X = 25;
    pos.Y = 11;
    SetConsoleCursorPosition( screen, pos );
	cout<<"Enter 4-Digit Pin to Run the Program : ";
	for(int i=0;i<4;i++)
	{
		c=getch();
		cout<<"*";
		pin[i]=c;
	}
	//pin[0]='1';pin[1]='2';pin[2]='3';pin[3]='4';
	if(pin[0]=='1' && pin[1]=='2' && pin[2]=='3' && pin[3]=='4')
	{
		a:
		system("cls");
		cout<<"\nOperaton Available are :";
		cout<<"\n1. List ";
		cout<<"\n2. Vector ";
		cout<<"\n3. Set ";
		cout<<"\n4. MultiSet ";
		cout<<"\n5. Map ";
		cout<<"\n6. MultiMap ";
		cout<<"\n7. EXIT Program";
		cout<<"\n\n\t\t\t\tEnter Your Choice (number) : ";
		int n;
		cin>>n;
		switch(n)
		{
			case 1:	stl_list();
				break;
			case 2: stl_vector();
				break;
			case 3: stl_set();
				break;
			case 4: stl_multiset();
				break;
			case 5: stl_map();
				break;
			case 6: stl_multimap();
				break;
			case 7:
				exit(0);
			default:
				cout<<"\n\t\t\t\t\tWrong choice !!!!!!!";
				break;
		}
		Sleep(1000);
		goto a;
	}
	else
	{
		cout<<"\n\n\t\t\t\tWrong Password !!!!!!!!!!!!!!!";
		Sleep(2000);
		goto again;
	}
return 0;
}
