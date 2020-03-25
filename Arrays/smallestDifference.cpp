#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
	sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	int idxOne = 0;
	int idxTwo = 0;
	int smallest = INT_MAX;
	int current = INT_MAX;
	vector<int> smallestPair;
	while(idxOne < arrayOne.size() && idxTwo < arrayTwo.size()){
			int firstNum = arrayOne[idxOne];
			int secondNum = arrayTwo[idxTwo];
			if(firstNum < secondNum){
				current = secondNum - firstNum;
				idxOne++;
			}
		else if(secondNum < firstNum){
			current = firstNum - secondNum;
			idxTwo++;
		}
		else{
			return vector<int> {firstNum, secondNum};
		}
		if(smallest > current){
			smallest = current;
			smallestPair = {firstNum, secondNum};
		}
	}
	return smallestPair;
}
