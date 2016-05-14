bool isSmaller(std::pair<int, int> x,std::pair<int, int> y)
{
	return x.second> y.second;
}
class Solution {
public:


vector<int> topKFrequent(vector<int>& nums, int k) {
	unordered_map<int, int>result;
	std::vector<int> resultcount;
	std::vector<int> trueresult(k, 0);

	for (int i = 0; i<nums.size(); ++i)
	{
		result[nums[i]]++;
	}
	
	vector<std::pair<int, int>>newVec;
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		newVec.push_back(std::pair<int, int>(it->first,it->second));
	}
	std::sort(newVec.begin(), newVec.end(), &isSmaller);
	for (int i = 0; i < k; i++)
	{
		trueresult[i] = newVec[i].first;
	}

	return trueresult;
    
}
     
};