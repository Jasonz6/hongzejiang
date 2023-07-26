#include <iostream>

// 单链表的节点定义
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    // 反转单链表的函数，接受一个指向链表头节点的指针 head
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr; // 用于保存当前节点的前一个节点
        ListNode *cur = head;     // 当前节点指针，初始化为链表头指针

        // 使用迭代方式反转链表
        while (cur)
        {
            ListNode *next = cur->next; // 保存当前节点的下一个节点
            cur->next = prev;           // 将当前节点的 next 指针指向前一个节点
            prev = cur;                 // 更新 prev 为当前节点
            cur = next;                 // 更新 cur 为下一个节点
        }

        return prev; // 返回反转后的链表头节点，即原链表的尾节点
    }
};

int main()
{
    // 创建一个示例链表 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode *reversed = solution.reverseList(head);

    // 输出反转后的链表值，应该为 5 -> 4 -> 3 -> 2 -> 1
    while (reversed)
    {
        std::cout << reversed->val << " ";
        reversed = reversed->next;
    }

    return 0;
}
