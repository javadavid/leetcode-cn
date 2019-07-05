﻿// Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <random>

#include "..\Common\Common.h"
#include "..\Common\GraphNode.h"
#include "..\Common\TreeNode.h"
#include "..\Common\ListNode.h"
using namespace std;



ListNode* oddEvenList(ListNode* head)
{
	if (!head || !head->next) return head;

	ListNode* odd = head;
	ListNode* even = head->next;
	ListNode* evenHead = even;

	while (even && even->next)
	{
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = evenHead;
	return head;
}


int main()
{
	ListNode *pHead = NULL;
	//string str = "[1,2,6,3,4,5,6]";
	string str = "[1,2,3,4,5,6,7,8,9]";

	InitListNode(&pHead, str);
	PrintLinkList(pHead);

	ListNode *pNode = oddEvenList(pHead);
	PrintLinkList(pNode);
}
