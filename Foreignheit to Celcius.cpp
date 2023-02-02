#include<iostream>
using namespace std;
class temperature
{
	int n,i;
	float f[20],c[20];
	public:
		void getdata()
		{
			cout<<"Enter the size: ";
			cin>>n;
			cout<<"\nEnter the temperatures:\n";
			for(i=1;i<=n;i++)
			{
				cin>>f[i];
			}
			for(i=1;i<=n;i++)
			{
				c[i]=(f[i]-32)*5/9;
			}
		}
		void display()
		{
			for(i=1;i<=n;i++)
			{
				cout<<"\nc["<<i<<"] = "<<c[i];
			}
		}
};
int main()
{
	temperature t;
	t.getdata();
	t.display();
}
