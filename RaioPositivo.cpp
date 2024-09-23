#include <iostream> 
#include<cmath>
#include<iomanip>
using namespace std;
int main ()
{
  double R, area;
  do{
	  cout<<"Informe o raio: ";
	  cin>>R;
  }while(R<=0);
  area = 3.1415 * pow(R, 2);
  cout<< fixed << setprecision(2);
  cout<<"A area eh: "<<area<<endl;
  return 0;
}