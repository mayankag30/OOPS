#include<iostream>
using namespace std;
class time
{
	public: 
	int hh,mm,ss;
	void calc()
	{
		int s;
		s=(hh*3600)+(mm*60)+ss;
		cout<<"Time in total seconds: "<<s<<endl;
	}
};
int main()
{
	time t;
	cout<<"Enter time: "<<endl;
	cout<<"Hours? ";
	cin>>t.hh;
	cout<<"Minutes? ";
	cin>>t.mm;
	cout<<"Seconds? ";
	cin>>t.ss;
	cout<<"The time is = "<<t.hh<<":"<<t.mm<<":"<<t.ss<<endl;
	t.calc();
}

