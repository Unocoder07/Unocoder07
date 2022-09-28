#include<bits/stdc++.h>
using namespace  std;
int main()
{
    #ifndef ONLINE_JUDGE
    // freopen("input1.txt","r",stdin);
     freopen("output1.txt","w",stdout);
     #endif
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);
 
    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
    pair1.swap(pair2);
 
    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;// pair<char, int > PAIR1=make_pair(A,1);
    // pair<char,int> PART2;=make_pair(B,2);
    // cout<<"befor swapping"<<endl;
    // cout<<PART1.first<<" "<<PART1.second<<end;
    // PART1.swap(PART2);
    // cout<<"after swapping ";
    
 
    return 0;
}