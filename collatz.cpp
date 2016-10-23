#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int m, n, highest=1, greatest=1, i;
int const_n, manip_i;
int main(){
	ifstream f("input.txt");
	while(f>>m>>n) {
		const_n=n;
		for(i=m;i<n;i++) {
			manip_i=i;
			highest=1;
			while(manip_i>1){
				if ((manip_i%2)==0) {
					manip_i=(manip_i/2);
					highest++;
				}
				else if ((manip_i%2)!=0) {
					manip_i=((3*manip_i)+1);
					highest++;
				}
			if (highest>greatest) greatest=highest;
			}
		}
		cout<<m<<" "<<n<<" "<<greatest<<endl;
	}
	return 0;
}
