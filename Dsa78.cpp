// Author:-Sapnil Patel
// Date:-28/09/2022
// Hashmap

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    // *****Creation*****
    // unordered_map<string,int>m;
    map<string,int>m;

    // Insertion-1
    pair<string,int> p = make_pair("Sapnil",1);
    m.insert(p);

    // Insertion-2
    pair<string,int> pair2("Patel",5);
    m.insert(pair2);

    // Insertion-3
    m["mera"]=1;

    //Thi will overwrite the above value means("mera",2)
    m["mera"]=2;

    //*****Search*****
    cout<<"The Answer Of The Search Operation : "<<endl;
    cout<<m["mera"]<<endl;
    cout<<m.at("Patel")<<endl;

    //Below line will give the error because there is no entry with the key "unknown".
    //cout<<m.at["unknown"]<<endl;

    //Below line will not give the error but it will create the new entry with the key unknown.
    cout<<m["unknown"]<<endl;

    cout<<"The size of the map is : "<<m.size()<<endl;

    cout<<m.count("Patidar")<<endl;
    cout<<m.count("Patel")<<endl;

    // ***** erase *****

    m.erase("Sapnil");
    cout<<m.count("Sapnil")<<endl;
    cout<<"The size of the map is : "<<m.size()<<endl;

    // Traverse in the map.Way-1 :-By For each loop.

    // for(auto i:m)
    //     cout<<i.first<<" "<<i.second<<endl;

    // Traverse in the map.Way-2 :-By Iterator.

    map<string,int> :: iterator it = m.begin();

    while(it!= m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}