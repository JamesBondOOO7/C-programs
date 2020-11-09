#include<bits/stdc++.h>
using namespace std;
bool ifinset(vector<int>& input, int check)
{
	bool flag = 0;
	for(auto it: input)
	{
		if(check == (it))
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
vector<int> unionset(vector<int>& set1,vector<int>& set2)
{
	vector<int> result;
	int iterator = 0, i;
	for(auto it:set1)
    result.push_back(it);
	for(auto it: set2)
	{
    if(!ifinset(result, it))
    result.push_back(it);
	}
	return result;
}
vector<int> subtract(vector<int>& set1, vector<int>& set2)
{
	vector<int> result;
	for(auto it:set1)
	{
		if(!ifinset(set2, it))
		result.push_back(it);
	}
	return result;
}
vector<int> intersection(vector<int>& set1, vector<int>& set2)
{
	vector<int> result;
	for(int set1it: set1)
	{
		if(ifinset(set2, set1it))
		result.push_back(set1it);
	}
	return result;
}
vector<int> sdifference(vector<int>& set1, vector<int>& set2)
{
	vector<int> result;
	for(auto it: set1)
	{
		if(!ifinset(set2, it))
		result.push_back(it);
	}
	for(auto it: set2)
	{
		if(!ifinset(set1, it))
		result.push_back(it);
	}
	return result;
}
int main()
{
	int i, size1, size2;
	int temp;
    vector<int> set1;
	vector<int> set2;
	cout << "Enter the size of the first set - \n";
	cin >> size1;
	cout << "Enter the size of the second set - \n";
	cin >> size2;
	cout << "Enter the first valid set - \n";
	for(i = 0; i < size1; i++)
	{
	    cin >> temp;
	    set1.push_back(temp);
    }
    cout << "Enter the second valid set - \n";
	for(i = 0; i < size2; i++)
	{
		cin >> temp;
		set2.push_back(temp);
	}
    //union of the two sets
    vector<int> result = unionset(set1, set2);
    cout << "The union of the two sets is - \n";
    for(auto it: result)
    cout << it << " ";
	cout << endl;
	//subtraction of two sets
	result = subtract(set1, set2);
	cout << "The difference of the two sets is - \n";
	for(auto it:result)
    cout << it << " ";
    cout << endl;
    //intersection of two sets
    result = intersection(set1, set2);
    cout << "The intersection of the two sets is - \n";
    for(auto it: result)
    cout << it << " ";
    cout << endl;
    //symmetric difference of two sets
    result = sdifference(set1, set2);
    cout << "The symmetric difference of the two sets is - \n";
    for(auto it:result)
    cout << it << " ";
    cout << endl;
    return 0;
}

