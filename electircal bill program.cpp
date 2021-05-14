#include<iostream>
using namespace std;

class calculation
{
	private:
		float watts;
		float hour;
		float costkw;
		float cost1;
		float cost2;
		float watts1;
		float hour1;
		float costkw1;
	public:
		
		float getvalue(float watt,float hours,float cos)
		{
			watts=watt;
			hour=hours;
			costkw=cos;
			cost1=watt*hour*costkw/1000.0;
		}
		
		float getvaluefrom(float wa1,float h1,float c1)
		{
			watts1=wa1;
			hour1=h1;
			costkw1=c1;
			cost2=watts1*hour1*costkw1/1000.0;
		}
		
		float inprint()
		{
		    cout<<endl<<"Cost Analysis";
		    cout<<endl<<" watts "<<" Hours "<<" Cost /KM "<<"  Cost  "; 
		    cout<<endl<<" "<< watts << hour << costkw << cost1;
			cout<<endl<<watts1<<hour1<<costkw1<<cost2;
		}
	
};

int main()
{

calculation *t=new calculation();
t->getvalue(65,6,87);
t->getvaluefrom(100,6,87);
t->inprint();
}

