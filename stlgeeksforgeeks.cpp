
#include <iostream>
using namespace std;
#include <vector>
void func(vector<int>vect){
     vect.push_back(30);
}
int main()
{
	
	vector<int>vect;
    vect.push_back(50);
    vect.push_back(40);
    func(vect);
    for(auto i=0;i<vect.size();i++){
        cout<<" "<<vect[i];
    }
return 0;
}


