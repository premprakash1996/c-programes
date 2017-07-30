#include <iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void onceInATram(int x) {
    int i,l,r;
    for(i=x+1;i<1000000;i++){
		l=i/1000;
		r=i%1000;
		if((l%10+l/100+((l/10)%10))==(r%10+r/100+((r/10)%10))){
			break;
		}
    }
    cout<<i;
}

int main() {
    int x;
    cin >> x;
    onceInATram(x);
    //string result = onceInATram(x);
    //cout << result << endl;
   // return 0;
   getch();
}
