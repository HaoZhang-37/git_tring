#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
		double abc=123.123;
		double a=2;
		char b;
		int c;
		char iden;
		cin >> a;
		cin.get(b);
		cin >> c;
		map<char, double> table{ {'T',1e12},{'G',1e9}, {'M',1e6},{'k',1e3},
			{'m',1e-3},{'u',1e-6},{'n',1e-9},{'p',1e-12},{'f',1e-15},{'a',1e-18}};
		for (auto i = table.begin(); i != table.end(); ++i)
		{
			if ((a / (i->second) >= 1) && (a / (i->second) < 1000))
			{
				iden = i->first;
			}
		}
		double result = a / table[iden];
		cout << setprecision(c) << result<< iden << endl;
		cout<<"haoge niubi";
		return 0;

}

