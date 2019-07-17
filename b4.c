C++
#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool check_isomorphic(string str_1, string str_2) 
{

	int hash_map_1[256]={0};
	int hash_map_2[256]={0};

	for(int i=0;i<str_1.length();i++)
	{
		cout<<"Step 1 i = "<<i <<" hash_map_1[str_1[i]] = "<< hash_map_1[str_1[i]]<<" hash_map_2[str_2[i]] = "<< hash_map_2[str_2[i]]<<endl;
		if(hash_map_1[str_1[i]]!=hash_map_2[str_2[i]])
		{ 
			return false;
		}
		
		hash_map_1[str_1[i]] = 1;
		hash_map_2[str_2[i]] = 1;
	} 

	return true;
}

int main()
{

	string str_1 = "add";
	string str_2 = "egg";

	cout<<"===========Test case 1==========="<<endl;
	cout<<"string 1 = "<<str_1 <<" string 2 = "<<str_2<<endl;

	if(check_isomorphic(str_1, str_2))
		cout<<"\nResult: The 2 strings are isomorphic"<<endl;
	else
		cout<<"\nResult: The 2 strings are NOT isomorphic"<<endl;


	str_1 = "foo";
	str_2 = "bar";

	cout<<"\n===========Test case 2==========="<<endl;
	cout<<"string 1 = "<<str_1 <<" string 2 = "<<str_2<<endl;

	if(check_isomorphic(str_1, str_2))
		cout<<"\nResult: The 2 strings are isomorphic"<<endl;
	else
		cout<<"\nResult: The 2 strings are NOT isomorphic"<<endl;



	return true;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
bool check_isomorphic(string str_1, string str_2) 
{
 
	int hash_map_1[256]={0};
	int hash_map_2[256]={0};
 
	for(int i=0;i<str_1.length();i++)
	{
		cout<<"Step 1 i = "<<i <<" hash_map_1[str_1[i]] = "<< hash_map_1[str_1[i]]<<" hash_map_2[str_2[i]] = "<< hash_map_2[str_2[i]]<<endl;
		if(hash_map_1[str_1[i]]!=hash_map_2[str_2[i]])
		{ 
			return false;
		}
		
		hash_map_1[str_1[i]] = 1;
		hash_map_2[str_2[i]] = 1;
	} 
 
	return true;
}
 
int main()
{
 
	string str_1 = "add";
	string str_2 = "egg";
 
	cout<<"===========Test case 1==========="<<endl;
	cout<<"string 1 = "<<str_1 <<" string 2 = "<<str_2<<endl;
 
	if(check_isomorphic(str_1, str_2))
		cout<<"\nResult: The 2 strings are isomorphic"<<endl;
	else
		cout<<"\nResult: The 2 strings are NOT isomorphic"<<endl;
 
 
	str_1 = "foo";
	str_2 = "bar";
 
	cout<<"\n==========Test case 2==========="<<endl;
	cout<<"string 1 = "<<str_1 <<" string 2 = "<<str_2<<endl;
 
	if(check_isomorphic(str_1, str_2))
		cout<<"\nResult: The 2 strings are isomorphic"<<endl;
	else
		cout<<"\nResult: The 2 strings are NOT isomorphic"<<endl;
 
 
 
	return true;
}
