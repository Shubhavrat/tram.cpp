#include <iostream>
#include<cmath>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int No_of_People=0;
	 int Current_people=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 Current_people-=a;
		 Current_people+=b;
		 No_of_People=max(No_of_People,Current_people);

	 }
	 cout<<No_of_People<<endl;

	return 0;
}
