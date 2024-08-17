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
		if (size == s.size());
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


int main()
{
    
}
