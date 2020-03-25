#include <vector>
#include<algorithm>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // O(nlogn) time | O(N) space
  	sort(array.begin(),array.end());
	int left=0;
	int right=array.size()-1;
	while(left<right)
	{
		int csum=array[left]+array[right];
		if(csum==targetSum)
		{
			return {array[left],array[right]};
		}
		else if(csum<targetSum)
		{
			left++;
		}
		else if(csum>targetSum)
		{
			right--;
		}
	}
	return{};
}
