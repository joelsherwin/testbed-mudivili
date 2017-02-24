//Joel Sherwin
//For HackerEarth, Februaru Strings '17
//https://www.hackerearth.com/challenge/competitive/february-circuits-17/algorithm/cycle-string/

#include<iostream>
#include<string.h>
using namespace std;

/*This function takes two arguments, 
string name and keystone index, then flips three consecutive bits 
starting and inclusive of the keystone, returns flipped string*/

string flipStr(string in,int indexx)
{
	int x;
	x = indexx;
	int iter=0;
	int l = in.length();
	
	
	while(iter<3)
	{
		int i = (x+iter)%l;
		if(in[i]=='0') in[i]='1';
		else if(in[i]=='1') in[i]='0';
		else cout<<endl<<"IOError :  String contains invalid characters. Bits expected.";
		iter++;
	}
	return in;
}

int main()
{
	string inputA,inputB,tempA;
	int inde = 0,flag = 0;
	cin>>inputA;
	cin>>inputB;
	while(inde<inputA.length())
	{
		tempA = flipStr(inputA,inde);
	
		cout<<endl<<inde<<" "<<tempA;
			if(tempA == inputB){flag = 1; cout<<'\t'<<"X";}
		inde++;
	}
	if(flag == 1)cout<<endl<<"MATCHED";
	else {cout<<endl<<"Need moar passes";
	
	return 0;
}

