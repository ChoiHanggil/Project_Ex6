#include <iostream>
#include <set>
#include <vector>
struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//1.O(n)
bool HasCycle(ListNode* head)
{
	std::set<ListNode*> s;
	auto p = head;
	int size{};

	while (p)
	{
		s.insert(p);
		if (size == s.size())
		{
			return true;
		}
		p = p->next;
		size = s.size();
	}
	return false;
}
//O()
int NumIslands(std::vector<std::vector<char>>& grid)
{
	
}

//4.
int UniquePaths(int m, int n)
{
	std::vector<std::vector<int>> v(m+1, std::vector<int>(n+1, 0));
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			v[i][j] = v[i-1][j] + v[i][j - 1];
		}
	}
	return v[m][n];
}
std::vector<std::vector<int>> MergeIntervals(std::vector<std::vector<int>>& intervals)
{
	int max = intervals[intervals.size() - 1][intervalse[0].size() - 1];

}

int main()
{
    
}
