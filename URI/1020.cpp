//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
#include <iostream>
using namespace std;

int main(){

	int idade;

	cin >> idade;

	cout << idade/365 << " ano(s)\n";
	idade %= 365;
	cout << idade/30 << " mes(es)\n";
	idade %= 30;
	cout << idade << " dia(s)\n";

}