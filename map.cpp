#include <iostream> 
#include <map>
 #include <string.h>
  #include <utility> 
  using namespace std;

int main()
{
typedef map<string, int> mapType;	 
mapType populationMap;


populationMap.insert(pair<string, int>("China", 21339));
populationMap.insert(pair<string, int>("India", 31187));
populationMap.insert(mapType::value_type("US", 310));
populationMap.insert(mapType::value_type("Indonesia", 2134));
populationMap.insert(make_pair("Brasil", 2193));
populationMap.insert(make_pair("Pakistan", 2170));

// Erase the end element using the erase function
// Because it's ordered map (by key),
// map elements are not in the order of the entry
// In this map it's US since it's ordered alphabetically. 
mapType::iterator iter = --populationMap.end();

cout<<"\nDeleted record\n"<<iter->first<<"\n";
populationMap.erase(iter);

// output the size of the map
 
cout << "\nSize of population Map: " << populationMap.size() << '\n';

cout<<"Records of Population maps:\n";
for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
{
cout << iter->first <<": "<< iter->second << " million\n";
}

// find will return an iterator to the matching element if it is found
// or to the end of the map if the key is not found 
string country;//="Indonesia";

cout<<"\n";
cout<<"enter country name to print the population";
cin>>country;

iter = populationMap.find(country);

if( iter != populationMap.end() )
cout << country <<"'s populations is "<< iter->second << "million\n";
else
cout << "Key is not in populationMap" << '\n';

// clear the entries in the map 

populationMap.clear();

cout<<"\nAfter the clearing records of Population maps:\n";
for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
{
cout << iter->first <<": "<< iter->second; 
}
cout<<"\nEmpty Map\n";


}
