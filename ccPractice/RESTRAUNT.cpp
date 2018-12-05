#include <iostream>
#include <queue>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	priority_queue <long long int> MIN,MAX;
	int t = 0;
	while(n--){
	    int i;
	    cin>>i;
	    if(i == 1 ){
	        long long int x;
	        cin>>x;
	        if( MIN.size()==0|| x >= -MIN.top()){
	            	       // cout<<"hey"<<endl;
	        MIN.push(-x);
	        }
	        else{
	            MAX.push(x);
	        }
	        t++;
	       // cout<<MIN.size()<<" "<<-MIN.top()<<endl;
	        while(MIN.size() <= t/3){
	            int y = MAX.top();
	            MAX.pop();
	            MIN.push(-y);
	        }
	        while(MIN.size() > t/3){
	            int y = -MIN.top();
	            MIN.pop();
	            MAX.push(y);
	        }
	    }
	    else{
	        if(t/3 == 0){
	            cout<<"No reviews yet"<<endl;
	        }
	        else
	        cout<<-MIN.top()<<endl;
	    }
	}
	return 0;
}