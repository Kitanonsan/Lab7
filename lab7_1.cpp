#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text,Rtext,text1,text2;
    cout << "Input text: ";
	cin >> text;
	Rtext = func1(text);
	text1 = func2(text);
	text2 = func2(Rtext);
    cout << "Reversed text: " << Rtext <<endl;
    cout << "Palindrome: ";
	if(text1 == text2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
    return 0;
}
