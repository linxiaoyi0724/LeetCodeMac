//
//  main.cpp
//  LeetCodeMac
//
//  Created by linxiaoyi on 2021/10/23.
//

/*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 示例:
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 */

/*
 * // task1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for(int i = 0; i < nums.size();i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
int main()
{
    vector<int> nums = {2, 7 , 11 , 15};
    vector<int> result;
    int target = 9;
    Solution task1;
    result = task1.twoSum(nums, target);
    for(int i=0 ; i< result.size();i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
*/








/*
小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，小A 每次也从 1, 2, 3 中选择一个猜。他们一共进行三次这个游戏，请返回 小A 猜对了几次？
输入的guess数组为 小A 每次的猜测，answer数组为 小B 每次的选择。guess和answer的长度都等于3。
示例 1：
输入：guess = [1,2,3], answer = [1,2,3]
输出：3
解释：小A 每次都猜对了。
示例 2：
输入：guess = [2,2,3], answer = [3,2,1]
输出：1
解释：小A 只猜对了第二次。
限制：
guess的长度 = 3
answer的长度 = 3
guess的元素取值为 {1, 2, 3} 之一。
answer的元素取值为 {1, 2, 3} 之一。
*/
// task2
/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int times = 0;
        for(int i = 0; i < 3; i++)
        {
            if(guess[i] == answer[i])
            {
                times++;
            }
        }
        return times;
    }
};
int main()
{
    vector<int> gusess;
    vector<int> answer;
    int temp;
    for(int i = 0; i < 3; i++)
    {
        cin >> temp;
        gusess.push_back(temp);
    }
    for(int i = 0; i < 3; ++i)
    {
        cin >> temp;
        answer.push_back(temp);
    }
    Solution sl;
    int times = sl.game(gusess, answer);
    cout << "right times is " << times << endl;
}
*/









/*
 给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
J 中的字母不重复，J 和 S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。
示例 1:
输入: J = "aA", S = "aAAbbbb"
输出: 3
示例 2:
输入: J = "z", S = "ZZ"
输出: 0
*/



//task3
/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(int i =0; i < J.size(); i++)
        {
            for(int j = 0 ; j < S.size(); j++)
            {
                if(J[i] == S[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    std::string J,S;
    std::cout << "qing shu ru ni de bao shi lei xing: ";
    getline(std::cin, J);
    std::cout << "qing shu ru ni de shi tou lei xing: ";
    getline(std::cin,S);
    Solution sl;
    int count = sl.numJewelsInStones(J,S);
    std::cout << "numers Jevels in stones is : " << count << std::endl;
    return 0;
}
*/






/*
给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
示例 1：
输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"
示例 2：
输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"
*/


/*
//task 4
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = address.size(); i >=0 ; i--)
        {
            if(address[i] == '.')
            {
                address.replace(i, 1, "[.]");
            }
        }
        return address;
    }
};
int main()
{
    std::string address;
    std::cin >> address;
    Solution sl;
    string addressResult = sl.defangIPaddr(address);
    std::cout <<addressResult<<std::endl;
    return 0;
}
*/





/*
请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
现有一个链表 -- head = [4,5,1,9]，它可以表示为:
示例 1:
输入: head = [4,5,1,9], node = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
示例 2:
输入: head = [4,5,1,9], node = 1
输出: [4,5,9]
解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
*/

/*
//task5
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};
int main()
{
    ListNode *head, *p;
    int data;
    head = new ListNode(0);
    p = head;
    std::cout <<"please input your data: ";
    std::cin >>data;
    while (std::cin)
    {
        ListNode *node;
        node = new ListNode(data);
        p->next = node;
        p = node;
        std::cout <<"please inpur your data(q to quit):";
        std::cin >>data;
    }
    head = head->next;
    std::cout <<"please input your delete data: ";
    std::cin.clear();
    std::cin.ignore();
    int deleteData;
    std::cin >> deleteData;
    ListNode *q = head;
    while (q != NULL)
    {
        if(q->val == deleteData)
        {
            Solution sl;
            sl.deleteNode(q);
        }
        else
        {
            std::cout << q->val<<std::endl;
            q = q->next;
        }
    }
    return 0;
}
*/






/*
//task 6
给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。
示例 1：
输入：n = 234
输出：15
解释：
各位数之积 = 2 * 3 * 4 = 24
各位数之和 = 2 + 3 + 4 = 9
结果 = 24 - 9 = 15
示例 2：
输入：n = 4421
输出：21
解释：
各位数之积 = 4 * 4 * 2 * 1 = 32
各位数之和 = 4 + 4 + 2 + 1 = 11
结果 = 32 - 11 = 21
*/


/*
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while ( n != 0)
        {
            int remainder = n % 10;
            product *= remainder;
            sum += remainder;
            n = n / 10;
        }
        return product - sum;
    }
};
#include <iostream>
int main()
{
    int data;
    std::cout << "Please input your data: ";
    std::cin>>data;
    Solution sl;
    int result = sl.subtractProductAndSum(data);
    std::cout << "result: " << result<<std::endl;
    return 0;
}
*/









/*
//task 7
平面上有 n 个点，点的位置用整数坐标表示 points[i] = [xi, yi]。请你计算访问所有这些点需要的最小时间（以秒为单位）。
你可以按照下面的规则在平面上移动：
每一秒沿水平或者竖直方向移动一个单位长度，或者跨过对角线（可以看作在一秒内向水平和竖直方向各移动一个单位长度）。
必须按照数组中出现的顺序来访问这些点。
 
示例 1：
输入：points = [[1,1],[3,4],[-1,0]]
输出：7
解释：一条最佳的访问路径是： [1,1] -> [2,2] -> [3,3] -> [3,4] -> [2,3] -> [1,2] -> [0,1] -> [-1,0]
从 [1,1] 到 [3,4] 需要 3 秒
从 [3,4] 到 [-1,0] 需要 4 秒
一共需要 7 秒
示例 2：
输入：points = [[3,2],[-2,2]]
输出：5
*/

/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime = 0;
        for(int i = 0; i < points.size()-1;i++)
        {
            int minX = abs(points[i][0] - points[i+1][0]);
            int minY = abs(points[i][1] - points[i+1][1]);
            minTime += minX>minY?minX:minY;
        }
        return minTime;
    }
};
int main()
{
    
    int numPoints;
    cout << "How many points do you want to input? ";
    cin >>numPoints;
    vector<vector<int>> points(numPoints,vector<int>(2));
    for(int i = 0; i < numPoints; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>points[i][j];
        }
    }
    Solution sl;
    int minTimes = sl.minTimeToVisitAllPoints(points);
    std::cout << "Min times: "<<minTimes <<endl;
    return 0;
}
*/





/*
// task 8
在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
返回可以通过分割得到的平衡字符串的最大数量。
示例 1：
输入：s = "RLRRLLRLRL"
输出：4
解释：s 可以分割为 "RL", "RRLL", "RL", "RL", 每个子字符串中都包含相同数量的 'L' 和 'R'。
示例 2：
输入：s = "RLLLLRRRLR"
输出：3
解释：s 可以分割为 "RL", "LLLRRR", "LR", 每个子字符串中都包含相同数量的 'L' 和 'R'。
示例 3：
输入：s = "LLLLRRRR"
输出：1
解释：s 只能保持原样 "LLLLRRRR".
*/



/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int lNum = 0;
        int BalStrNum= 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
            {
                lNum ++;
            }
            else
            {
                lNum --;
            }
            if(lNum == 0)
            {
                BalStrNum ++;
            }
        }
        return BalStrNum;
    }
};
int main()
{
    string s;
    cout << "Please input your string: ";
    getline(cin,s);
    cout << "The String is : " << s << endl;
    Solution sl;
    int number = sl.balancedStringSplit(s);
    cout << "The banlanced string split number is: " << number <<endl;
    return 0;
}
*/





/*
//Task 9
实现一个算法，确定一个字符串 s 的所有字符是否全都不同。
示例 1：
输入: s = "leetcode"
输出: false
示例 2：
输入: s = "abc"
输出: true
限制：
0 <= len(s) <= 100
如果你不使用额外的数据结构，会很加分。
*/


/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isUnique(string astr)
    {
        for(int i = 1; i < astr.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(astr[i] == astr[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    string test;
    cout << "Please input your string:";
    cin >> test;
    
    Solution sl;
    bool flag = sl.isUnique(test);
    if(flag)
    {
        cout << "true" <<endl;
    }
    else
    {
        cout << "false" <<endl;
    }
    
    return 0;
}
*/



/*
//Task 10
编写一个方法，找出两个数字a和b中最大的那一个。不得使用if-else或其他比较运算符。
示例：
输入： a = 1, b = 2
输出： 2
*/

/*
#include <iostream>
class Solution {
public:
    int maximum(int a, int b) {
        return(a > b ? a : b);
    }
};
int main()
{
    int a,b, maxVal;
    std::cout << "please input a value and b value:";
    std::cin >> a >> b;
    Solution sl;
    maxVal = sl.maximum(a,b);
    std::cout << "The more bigger is " << maxVal << std::endl;
    return 0;
}
*/












/*
//Task 11
编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。
示例：
输入: numbers = [1,2]
输出: [2,1]
提示：
numbers.length == 2
*/

/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers)
    {
        numbers[0] = numbers[0] - numbers[1];
        numbers[1] = numbers[0] + numbers[1];
        numbers[0] = numbers[1] - numbers[0];
        return numbers;
    }
};
int main()
{
    vector<int> num(2);
    cout << "please input your number: ";
    for(int i =0 ; i <2; i++)
    {
        cin >>num[i];
    }
    Solution sl;
    num = sl.swapNumbers(num);
    cout << "[" << num[0] << "," <<num[1] << "]";
    return 0;
}
*/






/*
//Task 12
给两个整数数组 A 和 B ，返回两个数组中公共的、长度最长的子数组的长度。
示例：
输入：
A: [1,2,3,2,1]
B: [3,2,1,4,7]
输出：3
解释：
长度最长的公共子数组是 [3, 2, 1] 。
*/


/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B)
    {
        int ans = 0;
        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0; j < B.size(); j++)
            {
                int k =0;
                bool flag = false;
                while (i+k < A.size() && j+ k < B.size() &&A[i+k] == B[j+k])
                {
                    k++;
                    flag = true;
                }
                ans = ans >k?ans:k;
                if(flag &&j+k == B.size()-1)
                {
                    return ans;
                }
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> v1 = {1,2,3,2,1};
    vector<int> v2 = {3,2,1,4,7};
    Solution sl;
    int num = sl.findLength(v1, v2);
    cout << num <<endl;
    return 0;
}
*/



/*
//Task 13
实现一种算法，删除单向链表中间的某个节点（即不是第一个或最后一个节点），假定你只能访问该节点。
示例：
输入：单向链表a->b->c->d->e->f中的节点c
结果：不返回任何数据，但该链表变为a->b->d->e->f
*/

/*
#include <string>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution
{
public:
    void deleteNode(ListNode* node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
int main()
{
    ListNode *head, *p;
    head = new ListNode(0);
    p = head;
    int v;
    while (cin>>v)
    {
        ListNode* n = new ListNode(v);
        head->val = n->val;
        p->next = n;
        p = n;
    }
    head = head->next;
    ListNode *m = head;
    while (m !=NULL)
    {
        cout << m->val;
        m = m->next;
        if(m != NULL)
        {
            cout << "->";
        }
        
    }
    ListNode* d = head;
    for(int i = 0 ;i < 3; i++)
    {
         d = d->next;
    }
    Solution sl;
    sl.deleteNode(d);
        while (head !=NULL)
    {
        cout << head->val;
        head = head->next;
        if(head != NULL)
        {
            cout << "->";
        }
        
    }
    return 0;
}
*/







//Task 14
/*
实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。
注意：本题相对原题稍作改动
示例：
输入： 1->2->3->4->5 和 k = 2
输出： 4
*/


/*
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x ):val(x),next(NULL){}
};
class Solution
{
public:
    int kthToLast(ListNode* head,int k)
    {
        ListNode *pCount = head;
        ListNode *pIter = head;
        int i  =0;
        while (pCount != NULL)
        {
            i++;
            pCount = pCount->next;
        }
        for(int j =0; j < i-k;j++)
        {
            pIter = pIter->next;
        }
        return pIter->val;
    }
};
int main()
{
    ListNode *head, *p, *pDisplay;
    head = new ListNode(0);
    p = head;
    int value, k;
    std::cout << "input list value:";
    while (std::cin>>value)
    {
        ListNode *temp = new ListNode(value);
        p->next = temp;
        p = temp;
        std::cout << "input list value:";
    }
    head = head->next;
    std::cin.clear();
    std::cin.ignore();
    std::cout << "input k:";
    std::cin >>k;
    pDisplay = head;
    while (pDisplay!=NULL)
    {
        std::cout << pDisplay->val;
        
        if(pDisplay->next != NULL)
        {
            std::cout << "->";
        }
        pDisplay = pDisplay->next;
    }
    std::cout << std::endl;
    Solution sl;
    int kVal = sl.kthToLast(head,k);
    std::cout << kVal <<std::endl;
    return 0;
    
}
*/






//Task 15
/*
实现一个MyQueue类，该类用两个栈来实现一个队列。
示例：
MyQueue queue = new MyQueue();
queue.push(1);
queue.push(2);
queue.peek();  // 返回 1
queue.pop();   // 返回 1
queue.empty(); // 返回 false
说明：
你只能使用标准的栈操作 -- 也就是只有 push to top, peek/pop from top, size 和 is empty 操作是合法的。
你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）。
*/

/*
#include <iostream>
#include <stack>
using namespace std;
class MyQueue
{
public:
    stack<int> st1, st2;
    MyQueue() {}
    void Push(int x)
    {
        st1.push(x);
    }
    int Pop()
    {
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int ret = st2.top();
        st2.pop();
        return ret;
    }
    int Peek()
    {
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    bool Empty()
    {
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.empty();
    }
};
int main()
{
    MyQueue *obj = new MyQueue();
    obj->Push(1);
    obj->Push(2);
    obj->Push(3);
    int param_2 = obj->Pop();
    int param_3 = obj->Peek();
    bool param_4 = obj->Empty();
    cout << param_2 << endl;
    cout << param_3 << endl;
    cout << param_4 << endl;
    return 0;
}
*/




/*
//Task 16
编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。
示例1 :
输入：[1, 2, 3, 3, 2, 1]
输出：[1, 2, 3]
示例2 :
    输入：[1, 1, 1, 1, 2]
    输出：[1, 2]
    提示：
    链表长度在[0, 20000]范围内。
    链表元素在[0, 20000]范围内。
    进阶：
    如果不得使用临时缓冲区，该怎么解决？
*/

/*
#include <string>
#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        ListNode *pl = head;
        while (pl != NULL)
        {
            ListNode *pr = pl;
            while (pr->next != NULL)
            {
                if(pr->next->val == pl->val)
                {
                    pr->next = pr->next->next;
                }
                else
                {
                    pr = pr->next;
                }
            }
            pl = pl->next;
        }
    }
};
int main()
{
    ListNode *head, *p, *display;
    head = new ListNode(0);
    p = head;
    int v;
    while (cin >> v)
    {
        ListNode *temp = new ListNode(v);
        p->next = temp;
        p = temp;
    }
    head = head->next;
    ListNode* rn = head;
    Solution sq;
    sq.removeDuplicateNodes(rn);
    display = head;
    cout << "[";
    while (display!= NULL)
    {
        cout << display->val ;
        display = display->next;
        if (display)
            cout << ",";
    }
    cout << "]";
    return 0;
}
*/



/*
//Task 17
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

如果反转后整数超过 32 位的有符号整数的范围 [−2(31),  2(31) − 1] ，就返回 0。

假设环境不允许存储 64 位整数（有符号或无符号）。
 

示例 1：
输入：x = 123
输出：321
 
示例 2：
输入：x = -123
输出：-321
 
示例 3：
输入：x = 120
输出：21
 
示例 4：
输入：x = 0
输出：0
*/

/*
#include <iostream>

class Solution {
public:
    int reverse(int x) {
        long n = 0;
        while (x) {
            n = n * 10 + x % 10;
            x = x / 10;
        }
        return n > INT_MAX || n < INT_MIN ? 0 : n;
    }
};

int main()
{
    Solution s;
    int num;
    std::cout << "请输入整数: ";
    std::cin >> num;
    std::cout << std::endl;
    std::cout << s.reverse(num) << std::endl;
}
*/



/*
//Task 18
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

 
示例 1：

输入：x = 121
输出：true
示例 2：

输入：x = -121
输出：false
解释：从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3：

输入：x = 10
输出：false
解释：从右向左读, 为 01 。因此它不是一个回文数。
示例 4：

输入：x = -101
输出：false
*/

//#include <iostream>
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if(x < 0)
//        {
//            return false;
//        }
//        else
//        {
//            int originNum = x;
//            long n = 0;
//            while (x) {
//                n = n * 10 + x % 10;
//                x = x / 10;
//            }
//            return n == originNum;
//        }
//    }
//};
//
//int main(){
//    Solution s;
//    std::cout << "请输入整数: ";
//    int num;
//    std::cin >> num;
//    std:: cout << s.isPalindrome(num) <<std::endl;
//
//}




/*
//Task 19
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。


示例 1:

输入: "III"
输出: 3
示例 2:

输入: "IV"
输出: 4
示例 3:

输入: "IX"
输出: 9
示例 4:

输入: "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.
示例 5:

输入: "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.

*/

/*
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        std::map<char,int> a = {{'I',1},{'V',5},{'X',10}, {'L',50}, {'C',100}, {'D',500},{'M',1000}};
        
        int total = 0;
        int numPre = 0;
        int numNext = 0;
        for(int i = 0; i< s.size();i++){
            
            if(a.count(s[i])>0){
                numPre = a[s[i]];
            }
            if(a.count(s[i+1])>0){
                numNext = a[s[i+1]];
            }
            
            if(numPre >= numNext){
                total += numPre;
            }
            else{
                total -= numPre;
            }
        }
        return total;
    }
};

int main()
{
    Solution s;
    string str = "IV";
    int total = s.romanToInt(str);
    std::cout << total << std::endl;
}
 */










/*
//Task 20
给定一个二叉树，检查它是否是镜像对称的。

 

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
 

但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3

*/


/*
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* p, TreeNode* q){
        if(!q && !p){
            return true;
        }
        if(!q || !p){
            return false;
        }
        if(p->val == q->val){
            return isMirror(p->left, q->right) && isMirror(p->right, q->left);
        }
        return false;
    }
};
*/









/*
//Task 21
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

 

示例 1：

 
输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]
示例 2：

输入：l1 = [], l2 = []
输出：[]
示例 3：

输入：l1 = [], l2 = [0]
输出：[0]
*/



//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode():val(0),next(nullptr){}
//    ListNode(int x):val(x),next(nullptr){}
//    ListNode(int x, ListNode* next):val(x),next(next){}
//};
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        if(!l1){
//            return l2;
//        }
//        if(!l2){
//            return l1;
//        }
//        if(l1->val < l2->val){
//            l1->next = mergeTwoLists(l1->next, l2);
//            return l1;
//        }
//        else{
//            l2->next = mergeTwoLists(l1, l2->next);
//            return l2;
//        }
//    }
//};











/*
//Task 21
存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除所有重复的元素，使每个元素 只出现一次 。

返回同样按升序排列的结果链表。

 

示例 1：


输入：head = [1,1,2]
输出：[1,2]
示例 2：


输入：head = [1,1,2,3,3]
输出：[1,2,3]

*/

/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){};
    ListNode(int x):val(x),next(nullptr){};
    ListNode(int x, ListNode *next):val(x),next(next){};
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head;
        while (p) {
            if(p->next && p->val == p->next->val){
                p->next = p->next->next;
            }
            else{
                p= p->next;
            }
        }
        return head;
    }
};*/








/*
//Task 22
给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。

不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

 

说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
int len = removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
 
示例 1：

输入：nums = [1,1,2]
输出：2, nums = [1,2]
解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。
示例 2：

输入：nums = [0,0,1,1,1,2,2,3,3,4]
输出：5, nums = [0,1,2,3,4]
解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。

*/

/*
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2){
            return nums.size();
        }
        int j = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[j] != nums[i]){
                nums[++j] = nums[i];
            }
        }
        return ++j;
    }
};
*/










/*
//Task 23
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

 

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。

*/

/*
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.empty()){
            return result;
        }
        
        for(int i = 0; i < strs[0].size(); i++){
            char temp = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] == temp){
                    continue;
                }
                else
                {
                    return result;
                }
            }
            result += temp;
        }
        return  result;
    }
    
};

int main(){
    Solution s;
    vector<string> a = {"flower","flow","flight"};
    std::cout << s.longestCommonPrefix(a) << std::endl;
}
*/




/*
//Task 24
 
给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明: 叶子节点是指没有子节点的节点。

示例：
给定二叉树 [3,9,20,null,null,15,7]，

    3
   / \
  9  20
    /  \
   15   7
返回它的最大深度 3

*/

/*
#include <iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        else{
            int lChild = maxDepth(root->left);
            int rChild = maxDepth(root->right);
            return lChild > rChild ? lChild +1 : rChild +1;
        }
    }
};
*/






/*
//Task 25
 
 
给你一个整数数组 nums ，其中元素已经按 升序 排列，请你将其转换为一棵 高度平衡 二叉搜索树。

高度平衡 二叉树是一棵满足「每个节点的左右两个子树的高度差的绝对值不超过 1 」的二叉树。

 

示例 1：


输入：nums = [-10,-3,0,5,9]
输出：[0,-3,9,-10,null,5]
解释：[0,-10,5,null,-3,null,9] 也将被视为正确答案：

示例 2：


输入：nums = [1,3]
输出：[3,1]
解释：[1,3] 和 [3,1] 都是高度平衡二叉搜索树。

*/


/*
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        return  dfs(nums, 0, len);
    }
    TreeNode* dfs(vector<int>& nums, int p_left, int p_right){
        if(p_left>=p_right){
            return nullptr;
        }
        int mid = (p_left + p_right) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = dfs(nums, p_left, mid);
        root->right = dfs(nums, mid+1, p_right);
        return root;
    }
};
*/





/*
//Task 26
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
 

示例 1：

输入：s = "()"
输出：true
示例 2：

输入：s = "()[]{}"
输出：true
示例 3：

输入：s = "(]"
输出：false
示例 4：

输入：s = "([)]"
输出：false
示例 5：

输入：s = "{[]}"
输出：true

*/


/*
#include <string>
#include<algorithm>
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string replaceSubstr(string s, string subStr, string newStr){
        string::size_type pos = 0;
        while ((pos = s.find(subStr)) != string::npos) {
            s.replace(pos, subStr.length(), newStr);
        }
        return s;
    }
    
    
    bool isValid(string s) {
        int length = s.length() /2;
        for(int i = 0;i < length; i++){
            s = replaceSubstr(replaceSubstr(replaceSubstr(s, "()", ""), "{}", ""), "[]", "");
        }
        return  s.length() == 0;
    }
    
    bool isValid1(string s){
        stack<char> ms;
        for(char c : s){
            if(c == '{' || c == '[' || c == '(')
                ms.push(c);
            else if(c == '}' && !ms.empty() && ms.top() == '{')
                ms.pop();
            else if(c == ')' && !ms.empty() && ms.top() == '(')
                ms.pop();
            else if(c == ']' && !ms.empty() && ms.top() == '[')
                ms.pop();
            else
                return false;
        }
        return ms.empty();
    }
};

int main(){
    string str = "()[{}}";
    Solution s;
    std::cout << s.isValid1(str) << std::endl;
    return 0;
}
*/








/*
//Task 27

给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

 

说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
int len = removeElement(nums, val);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
 

示例 1：

输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。
示例 2：

输入：nums = [0,1,2,2,3,0,4,2], val = 2
输出：5, nums = [0,1,4,0,3]
解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。
 */


/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        while (it != nums.end()) {
            if(*it == val){
                it = nums.erase(it);
            }else{
                it++;
            }
        }
        return nums.size();
    }
};

int main(){
    vector<int> test = {3,2,2,3};
    Solution s;
    cout << s.removeElement(test, 3) << endl;
}
*/





/*

 //Task 28
给定一个二叉树，判断它是否是高度平衡的二叉树。

本题中，一棵高度平衡二叉树定义为：

一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。

 

示例 1：


输入：root = [3,9,20,null,null,15,7]
输出：true
示例 2：


输入：root = [1,2,2,3,3,null,null,4,4]
输出：false
示例 3：

输入：root = []
输出：true

*/


/*
#include <iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int getTreeHeight(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int leftHeight = getTreeHeight(root->left);
        if(leftHeight == -1){
            return  -1;
        }
        int rightHeight = getTreeHeight(root->right);
        if(rightHeight == -1){
            return -1;
        }
        return abs(leftHeight-rightHeight) > 1 ? -1: 1+std::max(leftHeight, rightHeight);
    }
    
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        return std::max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return getTreeHeight(root) != -1;
    }
};
*/





/*

 //Task 29
实现 strStr() 函数。

给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回  -1 。

 

说明：

当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。

对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与 C 语言的 strstr() 以及 Java 的 indexOf() 定义相符。

 

示例 1：
输入：haystack = "hello", needle = "ll"
输出：2

示例 2：
输入：haystack = "aaaaa", needle = "bba"
输出：-1
 
示例 3：
输入：haystack = "", needle = ""
输出：0

*/


/*
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        if(haystack == "" || (haystack.length() < needle.length())){
            return -1;
        }
        int index = -1;
        for(int i = 0; i <= haystack.length()-needle.length(); i++){
            for(int j = 0; j < needle.length(); j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == needle.length()-1){
                    return i;
                }
            }
        }
        return -1;
    }
};

int main(){
    string haystack = "aaa";
    string needle = "aaaa";
    
    Solution s;
    std::cout << s.strStr(haystack, needle) << std::endl;
}
*/







/*

//Task 30
给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中最后一个单词的长度。
单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

 

示例 1：
输入：s = "Hello World"
输出：5
 
示例 2：
输入：s = "   fly me   to   the moon  "
输出：4
 
示例 3：
输入：s = "luffy is still joyboy"
输出：6
 
提示：
1 <= s.length <= 104
s 仅有英文字母和空格 ' ' 组成
s 中至少存在一个单词

*/



/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordLenghth = 0;
        for(int i = s.length()-1; i>=0;i--){
            if(s[i] != ' '){
                lastWordLenghth++;
            }
            else if(s[i] == ' ' && lastWordLenghth !=0){
                break;
            }
        }
        return lastWordLenghth;
    }
};

int main(){
    std::string str = "   fly me   to   the moon  ";
    Solution s;
    std::cout << s.lengthOfLastWord(str) <<std::endl;
}
*/







/*

//Task 30
 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

 请你将两个数相加，并以相同形式返回一个表示和的链表。

 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

  

 示例 1：


 输入：l1 = [2,4,3], l2 = [5,6,4]
 输出：[7,0,8]
 解释：342 + 465 = 807.
 示例 2：

 输入：l1 = [0], l2 = [0]
 输出：[0]
 示例 3：

 输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 输出：[8,9,9,9,0,0,0,1]

*/


/*
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root = new ListNode(0);
        ListNode *p = root;
        
        int jinwei = 0;
        while (l1 || l2 || jinwei != 0) {
            int l1Val = l1 ? l1->val : 0;
            int l2Val = l2 ? l2->val : 0;
            
            int sum = l1Val + l2Val + jinwei;
            jinwei  = sum / 10;
            ListNode *node = new ListNode(sum % 10);
            p->next = node;
            p= p->next;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return root->next;
    }
    
    ListNode* listInversion(ListNode* pHead){
        ListNode* pre = nullptr;
        ListNode* temp = nullptr;
        while (pHead) {
            temp = pHead->next;
            pHead->next = pre;
            pre = pHead;
            pHead = temp;
        }
        return pre;
    }
    
    void displayList(ListNode* pHead){
        while (pHead) {
            cout << pHead->val << "->";
            pHead = pHead->next;
        }
        std::cout << std::endl;
    }
};


int main(){
    Solution sl;
    
    ListNode* pHead = new ListNode(1);
    ListNode* p = pHead;
    for(int i = 2; i <= 3; i++){
        ListNode* node = new ListNode(i);
        p->next = node;
        p = p->next;
    }
    
//    sl.displayList(pHead);
    
    sl.displayList(sl.addTwoNumbers(pHead,pHead));
}
*/






/*

//Task 31
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。

 

示例 1:

输入: nums = [1,3,5,6], target = 5
输出: 2
示例 2:

输入: nums = [1,3,5,6], target = 2
输出: 1
示例 3:

输入: nums = [1,3,5,6], target = 7
输出: 4
示例 4:

输入: nums = [1,3,5,6], target = 0
输出: 0
示例 5:

输入: nums = [1], target = 0
输出: 0
 

提示:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums 为无重复元素的升序排列数组
-104 <= target <= 104

*/

/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if(nums[middle] < target){
                left = middle +1;
            }else if (nums[middle] > target){
                right = middle -1;
            }else{
                return middle;
            }
        }
        return right + 1;
    }
};
*/






/*

//Task 32
给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

子数组 是数组中的一个连续部分。

 

示例 1：
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
 
示例 2：
输入：nums = [1]
输出：1
 
示例 3：
输入：nums = [5,4,-1,7,8]
输出：23

*/


/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // 动态规划
//    int maxSubArray(vector<int>& nums) {
//        int pre = 0;
//        int maxAns = nums[0];
//        for(auto &x : nums){
//            pre = max(pre + x, x);
//            maxAns = max(maxAns, pre);
//        }
//        return maxAns;
//    }
    
    
    //贪心算法
    int maxSubArray(vector<int>& nums){
        int maxAns = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            maxAns = max(sum,maxAns);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxAns;
    }
};

int main(){
    std::cout << INT_MIN << std::endl;
}
*/





/*
 //Task 33
给定一个二叉树，找出其最小深度。

最小深度是从根节点到最近叶子节点的最短路径上的节点数量。

说明：叶子节点是指没有子节点的节点。

 

示例 1：


输入：root = [3,9,20,null,null,15,7]
输出：2
示例 2：

输入：root = [2,null,3,null,4,null,5,null,6]
输出：5
*/




/*
#include <iostream>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int lChild = minDepth(root->left);
        int rChild = minDepth(root->right);
        return (lChild && rChild) ? 1 + min(lChild, rChild) : 1 + lChild + rChild;
    }
};
*/










/*
 //Task 34
给你二叉树的根节点 root ，返回它节点值的 前序 遍历。

 

示例 1：


输入：root = [1,null,2,3]
输出：[1,2,3]
示例 2：

输入：root = []
输出：[]
示例 3：

输入：root = [1]
输出：[1]
示例 4：


输入：root = [1,2]
输出：[1,2]
示例 5：


输入：root = [1,null,2]
输出：[1,2]

*/


/*
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    
    void traversal(TreeNode* cur, vector<int>& result){
        if(!cur){
            return;
        }
        result.push_back(cur->val);
        traversal(cur->left, result);
        traversal(cur->right, result);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }
    
    vector<int> preorderTraversalWithStack(TreeNode* root){
        stack<TreeNode*> s;
        vector<int> result;
        s.push(root);
        while (!s.empty()) {
            TreeNode* r = s.top();
            s.pop();
            if(!r) continue;
            result.push_back(r->val);
            s.push(r->right);
            s.push(r->left);
        }
        return result;
    }
};
*/







/*
 //Task 35
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

 

示例 1：

输入：digits = [1,2,3]
输出：[1,2,4]
解释：输入数组表示数字 123。
示例 2：

输入：digits = [4,3,2,1]
输出：[4,3,2,2]
解释：输入数组表示数字 4321。
示例 3：

输入：digits = [0]
输出：[1]

*/

/*
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int jinwei = 1;
        vector<int> result;
        vector<int> finalResult;
        for(int i = digits.size()-1; i >=0; i--){
            if(digits[i] + jinwei == 10){
                result.push_back(0);
                jinwei = 1;
            }
            else{
                result.push_back(digits[i] + jinwei);
                jinwei = 0;
            }
        }
        if(jinwei == 1){
            result.push_back(1);
        }
        
        for(int i = result.size()-1; i >=0; i--){
            finalResult.push_back(result[i]);
        }
        return finalResult;
    }
};
*/




/*
 //Task 36
给你二叉树的根节点 root 和一个表示目标和的整数 targetSum ，判断该树中是否存在 根节点到叶子节点 的路径，这条路径上所有节点值相加等于目标和 targetSum 。

叶子节点 是指没有子节点的节点。

 

示例 1：


输入：root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
输出：true
示例 2：


输入：root = [1,2,3], targetSum = 5
输出：false
示例 3：

输入：root = [1,2], targetSum = 0
输出：false

*/


/*
#include <iostream>
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        if (root->val == targetSum && !root->left && !root->right){
            return true;
        }
        bool leftResult = hasPathSum(root->left, targetSum-root->val);
        bool rightResult = hasPathSum(root->right, targetSum-root->val);
        
        return leftResult || rightResult;
    }
};
 */







/*
//Task 37
 
给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

示例 1:
输入: s = "abcabcbb"
输出: 3
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 
示例 2:
输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 
示例 3:
输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 
示例 4:
输入: s = ""
输出: 0

*/


/*
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        
        int maxLength = 0;
        int currentLength = 0;
        int startIndex = 0;
        
        unordered_map<char, int> hashTable;
        
        for(int i = 0 ; i < s.length(); i++){
            if(hashTable.find(s[i]) == hashTable.end()){
                currentLength++;
                hashTable[s[i]] = i;
            }
            else{
                if(currentLength > maxLength){
                    maxLength = currentLength;
                }
                
                startIndex = max(hashTable[s[i]],startIndex);
                currentLength = i - startIndex;
                hashTable[s[i]] = i;
            }
        }
        if(currentLength > maxLength){
            maxLength = currentLength;
        }
        return maxLength;
    }
    
    void dispalyAllSubStr(string str){
        for(int i = 0; i < str.length(); i++){
            cout << str[i] << endl;
            char subStr[str.length()];
            int m = 0;
            subStr[m] = str[i];
            for(int j = i+1; j < str.length(); j++){
                subStr[++m] = str[j];
                cout << subStr <<endl;
            }
        }
    }
};
*/


/*
//Task 38
给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。

 

示例：
二叉树：[3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层序遍历结果：

[
  [3],
  [9,20],
  [15,7]
]
*/


/*
#include <vector>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        if(!root) {return result;}
        
        queue<TreeNode* > treeQuee;
        treeQuee.push(root);
        while (!treeQuee.empty()) {
            int size = treeQuee.size();
            vector<int> data;
            for(int i = 0; i < size; i++){
                TreeNode *T = treeQuee.front();
                data.push_back(T->val);
                treeQuee.pop();
                
                if(T->left) treeQuee.push(T->left);
                if(T->right) treeQuee.push(T->right);
            }
            result.push_back(data);
        }
        return result;
    }
};
*/







/*
//Task 39

给你两个二进制字符串，返回它们的和（用二进制表示）。

输入为 非空 字符串且只包含数字 1 和 0。

 

示例 1:

输入: a = "11", b = "1"
输出: "100"
示例 2:

输入: a = "1010", b = "1011"
输出: "10101"

*/






/*
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        string ans;
        int n = max(a.size(),b.size());
        int carry = 0;
        for(int i = 0; i < n; i++){
            carry += i < a.size() ? a.at(i) == '1' : 0;
            carry += i < b.size() ? b.at(i) == '1' : 0;
            ans.push_back(carry % 2 ? '1' : '0');
            carry /= 2;
        }
        if(carry){
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

*/






/*
//Task 40

翻转一棵二叉树。

示例：

输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1


*/



/*
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return nullptr;
        }else{
            TreeNode* treeLeft = root->left;
            root->left = root->right;
            root->right = treeLeft;
            
            root->left = invertTree(root->left);
            root->right = invertTree(root->right);
        }
        return root;
    }
};
*/







/*
//Task 41
 
 
给你一个非负整数 x ，计算并返回 x 的 算术平方根 。

由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。

注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。

 

示例 1：

输入：x = 4
输出：2
示例 2：

输入：x = 8
输出：2
解释：8 的算术平方根是 2.82842..., 由于返回类型是整数，小数部分将被舍去。
*/

//#include <iostream>
//
//class Solution {
//public:
//    int mySqrt(int x) {
//        if(x <= 1){
//            return x;
//        }
//        int low = 1, high = x;
//        while (low < high) {
//            int mid = low + (high - low) / 2;
//            if(mid == x / mid){
//                return mid;
//            }else if(mid < x /mid){
//                low ++;
//            }else{
//                high = mid;
//            }
//        }
//        return low-1;
//    }
//};
//
//int main(){
//    Solution s;
//    int result = s.mySqrt(4);
//    std::cout << result << std::endl;
//}



/*
//Task 42
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

 

示例 1：

输入：n = 2
输出：2
解释：有两种方法可以爬到楼顶。
1. 1 阶 + 1 阶
2. 2 阶
示例 2：

输入：n = 3
输出：3
解释：有三种方法可以爬到楼顶。
1. 1 阶 + 1 阶 + 1 阶
2. 1 阶 + 2 阶
3. 2 阶 + 1 阶
 

提示：

1 <= n <= 45

*/

/*
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int p,q =0, r = 1;
        for(int i =0; i < n; i++){
            p = q;
            q = r;
            r = p +q;
        }
        return r;
    }
};

int main(){
    Solution sl;
    std::cout << sl.climbStairs(44) << std::endl;
}
*/




/*
//Task 43
 
给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

 
示例 1：

输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
输出：[1,2,2,3,5,6]
解释：需要合并 [1,2,3] 和 [2,5,6] 。
合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
示例 2：

输入：nums1 = [1], m = 1, nums2 = [], n = 0
输出：[1]
解释：需要合并 [1] 和 [] 。
合并结果是 [1] 。
示例 3：

输入：nums1 = [0], m = 0, nums2 = [1], n = 1
输出：[1]
解释：需要合并的数组是 [] 和 [1] 。
合并结果是 [1] 。
注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。
 

提示：

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109

*/


/*
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1;
        while (n) {
            if(!m || nums1[m-1] < nums2[n-1]){
                nums1[last--] = nums2[--n];
            }else{
                nums1[last--] = nums1[--m];
            }
        }
    }
};
*/








/*
//Task 44

给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。



 

示例 1:

输入: numRows = 5
输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
示例 2:

输入: numRows = 1
输出: [[1]]
 

提示:

1 <= numRows <= 30

*/



/*
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i = 0; i < numRows; i++){
            result[i].resize(i+1);
            result[i][0] = result[i][i] = 1;
            for(int j = 1; j < i; j++){
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
        return result;
    }
};

int main(){
    std::cout << "rookielin";
}
*/







/*
//Task 45

给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。


示例 1:

输入: rowIndex = 3
输出: [1,3,3,1]
示例 2:

输入: rowIndex = 0
输出: [1]
示例 3:

输入: rowIndex = 1
输出: [1,1]
 

提示:

0 <= rowIndex <= 33

*/


/*
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1);
        for(int i = 0; i <= rowIndex; i++){
            for(int j = i; j >=0; j--){
                if(j == 0 || j == i){
                    result[j] = 1;
                }else{
                    result[j] = result[j-1] + result[j];
                }
            }
        }
        return result;
    }
};
*/




/*
//Task 46
 
 编写一个算法来判断一个数 n 是不是快乐数。

 「快乐数」 定义为：

 对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
 然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
 如果这个过程 结果为 1，那么这个数就是快乐数。
 如果 n 是 快乐数 就返回 true ；不是，则返回 false 。

  

 示例 1：

 输入：n = 19
 输出：true
 解释：
 1**2 + 9**2 = 82
 8**2 + 2**2 = 68
 6**2 + 8**2 = 100
 1**2 + 0**2 + 0**2 = 1
 示例 2：

 输入：n = 2
 输出：false
 



#include <unordered_set>
#include <iostream>
using namespace std;
class Solution{
public:
    int sumOfSquareNumber(int n){
        int sum = 0;
        while (n > 0) {
            int heihestPos = n % 10;
            sum += heihestPos *heihestPos;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n){
        unordered_set<int> s;
        s.insert(n);
        while(n != 1){
            n = sumOfSquareNumber(n);
            if (s.find(n) != s.end()){
                return false;
            }
            s.insert(n);
        }
        return true;
    }
};
 */









/*
//Task 45 单词拆分
中等
相关标签
premium lock icon
相关企业
给你一个字符串 s 和一个字符串列表 wordDict 作为字典。如果可以利用字典中出现的一个或多个单词拼接出 s 则返回 true。

注意：不要求字典中出现的单词全部都使用，并且字典中的单词可以重复使用。

 

示例 1：

输入: s = "leetcode", wordDict = ["leet", "code"]
输出: true
解释: 返回 true 因为 "leetcode" 可以由 "leet" 和 "code" 拼接成。
示例 2：

输入: s = "applepenapple", wordDict = ["apple", "pen"]
输出: true
解释: 返回 true 因为 "applepenapple" 可以由 "apple" "pen" "apple" 拼接成。
     注意，你可以重复使用字典中的单词。
示例 3：

输入: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
输出: false
*/

/*
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordDictSet;
        for(auto word :wordDict){
            wordDictSet.insert(word);
        }
        
        auto dp = vector<bool>(s.size()+1);
        dp[0] = true;
        for(int i = 1; i <= s.size(); i++){
            for(int j = 0; j < i; j++){
                if(dp[j] && wordDictSet.find(s.substr(j, i-j)) != wordDictSet.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
int main(){
    Solution sq;
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    return sq.wordBreak(s, wordDict);
}

*/






/*
//Task 46 存在重复元素 II
 给你一个整数数组 nums 和一个整数 k ，判断数组中是否存在两个 不同的索引 i 和 j ，满足 nums[i] == nums[j] 且 abs(i - j) <= k 。如果存在，返回 true ；否则，返回 false 。

  

 示例 1：

 输入：nums = [1,2,3,1], k = 3
 输出：true
 示例 2：

 输入：nums = [1,0,1,1], k = 1
 输出：true
 示例 3：

 输入：nums = [1,2,3,1,2,3], k = 2
 输出：false
*/

/*
#include<vector>
#include<unordered_set>
#include<cmath>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int i = 0; i<nums.size(); i++){
            if(i > k){
                s.erase(nums[i-k-1]);
            }
            if(s.count(nums[i])){
                return true;
            }
            s.emplace(nums[i]);
        }
        return false;
    }
};
*/







/*
//Task 47 最长连续序列
 
 给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。

 请你设计并实现时间复杂度为 O(n) 的算法解决此问题。

  

 示例 1：

 输入：nums = [100,4,200,1,3,2]
 输出：4
 解释：最长数字连续序列是 [1, 2, 3, 4]。它的长度为 4。
 示例 2：

 输入：nums = [0,3,7,2,5,8,4,6,0,1]
 输出：9
 示例 3：

 输入：nums = [1,0,1,2]
 输出：3

 */


/*
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution{
public:
    int longestConsecutive(vector<int> &nums){
        unordered_set<int> numsSet;
        for(auto& n : nums){
            numsSet.insert(n);
        }
        
        int longestStreak = 0;
        for(auto& num : numsSet){
            if(!numsSet.count(num-1)){
                int curentNum = num;
                int curentStreak = 1;
                while(numsSet.count(curentNum+1)){
                    curentNum++;
                    curentStreak++;
                }
                longestStreak = std::max(longestStreak, curentStreak);
            }
        }
        return longestStreak;
    }
};
int main(){
    vector<int> nums = {100,4,200,1,3,2};
    Solution sl;
    std::cout << sl.longestConsecutive(nums) << std::endl;
}
*/








/*
 //Task 48 环形链表
 
 给你一个链表的头节点 head ，判断链表中是否有环。

 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。注意：pos 不作为参数进行传递 。仅仅是为了标识链表的实际情况。

 如果链表中存在环 ，则返回 true 。 否则，返回 false 。

 */

/*
#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution{
public:
    bool hasCycle(ListNode* head){
        unordered_set<ListNode*> node_set;
        while (head) {
            if(node_set.count(head)){
                return true;
            }
            node_set.insert(head);
            head = head->next;
        }
        return false;
    }
};

int main(){
    ListNode* head = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(0);
    ListNode* n4 = new ListNode(-4);
    
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;
    
    Solution sl;
    std::cout << sl.hasCycle(head) << std::endl;
}
*/




/*
 //Task 49 字母异位词分组
 
 给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。

  

 示例 1:

 输入: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]

 输出: [["bat"],["nat","tan"],["ate","eat","tea"]]

 解释：

 在 strs 中没有字符串可以通过重新排列来形成 "bat"。
 字符串 "nat" 和 "tan" 是字母异位词，因为它们可以重新排列以形成彼此。
 字符串 "ate" ，"eat" 和 "tea" 是字母异位词，因为它们可以重新排列以形成彼此。
 示例 2:

 输入: strs = [""]

 输出: [[""]]

 示例 3:

 输入: strs = ["a"]

 输出: [["a"]]

*/



/*
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string> strs){
        // 先对数组进行排序，获取相同key 对应的不同value
        unordered_map<string, vector<string>> mp;
        for(auto str : strs){
            string key = str;
            std::sort(key.begin(),key.end());
            mp[key].emplace_back(str);
        }
        
        // 遍历整个hash map, 将相同key的value取出来
        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++){
            ans.emplace_back(it->second);
        }
        return ans;
    }
};

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sl;
    vector<vector<string>>result = sl.groupAnagrams(strs);
    for(auto it = result.begin(); it != result.end(); it++){
        for(auto it_s = it->begin(); it_s != it->end(); it_s++){
            std::cout << *it_s << std::endl;
        }
    }
}
*/




/*
 //Task 50 汇总区间
 
 给定一个  无重复元素 的 有序 整数数组 nums 。
 
 区间 [a,b] 是从 a 到 b（包含）的所有整数的集合。
 
 返回 恰好覆盖数组中所有数字 的 最小有序 区间范围列表 。也就是说，nums 的每个元素都恰好被某个区间范围所覆盖，并且不存在属于某个区间但不属于 nums 的数字 x 。
 
 列表中的每个区间范围 [a,b] 应该按如下格式输出：
 
 "a->b" ，如果 a != b
 "a" ，如果 a == b
 
 
 示例 1：
 
 输入：nums = [0,1,2,4,5,7]
 输出：["0->2","4->5","7"]
 解释：区间范围是：
 [0,2] --> "0->2"
 [4,5] --> "4->5"
 [7,7] --> "7"
 示例 2：
 
 输入：nums = [0,2,3,4,6,8,9]
 输出：["0","2->4","6","8->9"]
 解释：区间范围是：
 [0,0] --> "0"
 [2,4] --> "2->4"
 [6,6] --> "6"
 [8,9] --> "8->9"
 */



/*
 #include <vector>
 #include <string>
 #include <iostream>
 using namespace std;
 class Solution{
 public:
 vector<string> summaryRanges(vector<int>& nums){
 int n = nums.size();
 int i = 0;
 vector<string> result;
 while(i < n){
 i++;
 int low = nums[i-1];
 while(i < n && nums[i] == nums[i-1] + 1){
 i++;
 }
 
 string temp;
 int high = nums[i-1];
 temp.append(to_string(low));
 if(low < high){
 temp.append("->");
 temp.append(to_string(high));
 }
 result.emplace_back(temp);
 }
 return result;
 }
 };
 
 int main(){
 vector<int> nums = {0,2,3,4,6,8,9};
 Solution sl;
 auto result = sl.summaryRanges(nums);
 for(auto str : result){
 std::cout << str << std::endl;
 }
 }
 */






/*
 //Task 51 搜索二维矩阵
 
 给你一个满足下述两条属性的 m x n 整数矩阵：

 每行中的整数从左到右按非严格递增顺序排列。
 每行的第一个整数大于前一行的最后一个整数。
 给你一个整数 target ，如果 target 在矩阵中，返回 true ；否则，返回 false 。

  

 示例 1：


 输入：matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
 输出：true
 示例 2：


 输入：matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
 输出：false
*/


/*
#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = row * col - 1;
        while(low <= high){
            int mid = (high - low) / 2 + low;
            int x = matrix[mid / col][mid % col];
            if (x == target){
                return true;
            }else if ( x > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;
    Solution sl;
    std::cout << sl.searchMatrix(matrix, target) << std::endl;
}
*/








/*
 //Task 52 简化路径

 给你一个字符串 path ，表示指向某一文件或目录的 Unix 风格 绝对路径 （以 '/' 开头），请你将其转化为 更加简洁的规范路径。

 在 Unix 风格的文件系统中规则如下：

 一个点 '.' 表示当前目录本身。
 此外，两个点 '..' 表示将目录切换到上一级（指向父目录）。
 任意多个连续的斜杠（即，'//' 或 '///'）都被视为单个斜杠 '/'。
 任何其他格式的点（例如，'...' 或 '....'）均被视为有效的文件/目录名称。
 返回的 简化路径 必须遵循下述格式：

 始终以斜杠 '/' 开头。
 两个目录名之间必须只有一个斜杠 '/' 。
 最后一个目录名（如果存在）不能 以 '/' 结尾。
 此外，路径仅包含从根目录到目标文件或目录的路径上的目录（即，不含 '.' 或 '..'）。
 返回简化后得到的 规范路径 。

  

 示例 1：

 输入：path = "/home/"

 输出："/home"

 解释：

 应删除尾随斜杠。

 示例 2：

 输入：path = "/home//foo/"

 输出："/home/foo"

 解释：

 多个连续的斜杠被单个斜杠替换。

 示例 3：

 输入：path = "/home/user/Documents/../Pictures"

 输出："/home/user/Pictures"

 解释：

 两个点 ".." 表示上一级目录（父目录）。

 示例 4：

 输入：path = "/../"

 输出："/"

 解释：

 不可能从根目录上升一级目录。

 示例 5：

 输入：path = "/.../a/../b/c/../d/./"

 输出："/.../b/d"

 解释：

 "..." 在这个问题中是一个合法的目录名。

*/




/*
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution{
public:
    string simplifyPath(string path){
        // lamda函数实现路径切分
        auto split = [](const string& path, char segSymbol){
            vector<string> ans;
            string cur;
            for(auto ch: path){
                if(ch == segSymbol){
                    ans.push_back(std::move(cur));
                }else{
                    cur += ch;
                }
            }
            ans.push_back(std::move(cur));
            return ans;
        };
        
        // 获取切分的路径
        vector<string> names = split(path, '/');
        string ans;
        
        // stack 栈记录
        vector<string> stack;
        for(auto name : names){
            if(name == ".."){
                if(!stack.empty()){
                    stack.pop_back();
                }
            }
            else if(!name.empty() && name!="."){
                stack.push_back(std::move(name));
            }
        }
        
        if (stack.empty()){
            ans = "/";
        }else{
            for(auto sta: stack){
                ans += "/" + sta;
            }
        }
        return ans;

    }
};

int main(){
    string path = "/home/user/Documents/../Pictures";
    Solution sl;
    std::cout << sl.simplifyPath(path) << std::endl;
}
*/




/*
 //Task 53 最小栈
 设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。

 实现 MinStack 类:

 MinStack() 初始化堆栈对象。
 void push(int val) 将元素val推入堆栈。
 void pop() 删除堆栈顶部的元素。
 int top() 获取堆栈顶部的元素。
 int getMin() 获取堆栈中的最小元素。
  

 示例 1:

 输入：
 ["MinStack","push","push","push","getMin","pop","top","getMin"]
 [[],[-2],[0],[-3],[],[],[],[]]

 输出：
 [null,null,null,null,-3,null,0,-2]

 解释：
 MinStack minStack = new MinStack();
 minStack.push(-2);
 minStack.push(0);
 minStack.push(-3);
 minStack.getMin();   --> 返回 -3.
 minStack.pop();
 minStack.top();      --> 返回 0.
 minStack.getMin();   --> 返回 -2.
  

 提示：

 -231 <= val <= 231 - 1
 pop、top 和 getMin 操作总是在 非空栈 上调用
 push, pop, top, and getMin最多被调用 3 * 104 次

 */


/*
#include <stack>
#include <iostream>
using namespace std;
class MinStack{
public:
    stack<int> x_stack;
    stack<int> min_stack;
public:
    MinStack(){
        min_stack.push(INT_MAX);
    }
    
    void push(int val){
        x_stack.push(val);
        min_stack.push(std::min(min_stack.top(),val));
    }
    
    void pop(){
        x_stack.pop();
        min_stack.pop();
    }
    
    int getMin(){
        return min_stack.top();
    }
    
    int top(){
        return x_stack.top();
    }

};

int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    std::cout << minStack.getMin() << std::endl;
    minStack.pop();
    std::cout << minStack.top() << std::endl;
    std::cout << minStack.getMin() << std::endl;
}
*/








/*
 //Task 54 用最少数量的箭引爆气球
 
 有一些球形气球贴在一堵用 XY 平面表示的墙面上。墙面上的气球记录在整数数组 points ，其中points[i] = [xstart, xend] 表示水平直径在 xstart 和 xend之间的气球。你不知道气球的确切 y 坐标。

 一支弓箭可以沿着 x 轴从不同点 完全垂直 地射出。在坐标 x 处射出一支箭，若有一个气球的直径的开始和结束坐标为 xstart，xend， 且满足  xstart ≤ x ≤ xend，则该气球会被 引爆 。可以射出的弓箭的数量 没有限制 。 弓箭一旦被射出之后，可以无限地前进。

 给你一个数组 points ，返回引爆所有气球所必须射出的 最小 弓箭数 。

  
 示例 1：

 输入：points = [[10,16],[2,8],[1,6],[7,12]]
 输出：2
 解释：气球可以用2支箭来爆破:
 -在x = 6处射出箭，击破气球[2,8]和[1,6]。
 -在x = 11处发射箭，击破气球[10,16]和[7,12]。
 示例 2：

 输入：points = [[1,2],[3,4],[5,6],[7,8]]
 输出：4
 解释：每个气球需要射出一支箭，总共需要4支箭。
 示例 3：

 输入：points = [[1,2],[2,3],[3,4],[4,5]]
 输出：2
 解释：气球可以用2支箭来爆破:
 - 在x = 2处发射箭，击破气球[1,2]和[2,3]。
 - 在x = 4处射出箭，击破气球[3,4]和[4,5]。
  

 提示:

 1 <= points.length <= 105
 points[i].length == 2
 -231 <= xstart < xend <= 231 - 1
*/


/*
#include <vector>
#include <iostream>
using namespace std;
class Solution{
public:
    int findMinArrowShots(vector<vector<int>>& points){
        sort(points.begin(),points.end(),[](const vector<int>& u, const vector<int>& v){
            return u[1] < v[1];
        });
        
        int pos = points[0][1];
        int ans = 1;
        for(auto bloom : points){
            if(pos < bloom[0]){
                ans++;
                pos = bloom[1];
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> points = {{10,16},{2,8},{1,6},{7,12}};
    Solution sl;
    std::cout <<  sl.findMinArrowShots(points) << std::endl;
}
*/






/*
 //Task 55 逆波兰表达式求值
 中等
 相关标签
 premium lock icon
 相关企业
 给你一个字符串数组 tokens ，表示一个根据 逆波兰表示法 表示的算术表达式。

 请你计算该表达式。返回一个表示表达式值的整数。

 注意：

 有效的算符为 '+'、'-'、'*' 和 '/' 。
 每个操作数（运算对象）都可以是一个整数或者另一个表达式。
 两个整数之间的除法总是 向零截断 。
 表达式中不含除零运算。
 输入是一个根据逆波兰表示法表示的算术表达式。
 答案及所有中间计算结果可以用 32 位 整数表示。
  

 示例 1：

 输入：tokens = ["2","1","+","3","*"]
 输出：9
 解释：该算式转化为常见的中缀算术表达式为：((2 + 1) * 3) = 9
 示例 2：

 输入：tokens = ["4","13","5","/","+"]
 输出：6
 解释：该算式转化为常见的中缀算术表达式为：(4 + (13 / 5)) = 6
 示例 3：

 输入：tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
 输出：22
 解释：该算式转化为常见的中缀算术表达式为：
   ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
 = ((10 * (6 / (12 * -11))) + 17) + 5
 = ((10 * (6 / -132)) + 17) + 5
 = ((10 * 0) + 17) + 5
 = (0 + 17) + 5
 = 17 + 5
 = 22
  

 提示：

 1 <= tokens.length <= 104
 tokens[i] 是一个算符（"+"、"-"、"*" 或 "/"），或是在范围 [-200, 200] 内的一个整数
  

 逆波兰表达式：

 逆波兰表达式是一种后缀表达式，所谓后缀就是指算符写在后面。

 平常使用的算式则是一种中缀表达式，如 ( 1 + 2 ) * ( 3 + 4 ) 。
 该算式的逆波兰表达式写法为 ( ( 1 2 + ) ( 3 4 + ) * ) 。
 逆波兰表达式主要有以下两个优点：

 去掉括号后表达式无歧义，上式即便写成 1 2 + 3 4 + * 也可以依据次序计算出正确结果。
 适合用栈操作运算：遇到数字则入栈；遇到算符则取出栈顶两个数字进行计算，并将结果压入栈中
*/


/*
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
class Solution{
public:
    int evalRPN(vector<string>& tokens){
        stack<int> sk;
        for(auto token : tokens){
            if(isNumber(token)){
                sk.push(stoi(token));
            }
            else{
                int num2 = sk.top();
                sk.pop();
                int num1 = sk.top();
                sk.pop();
                switch (token[0]) {
                    case '+':
                        sk.push(num1 + num2);
                        break;
                    case '-':
                        sk.push(num1 - num2);
                        break;
                    case '*':
                        sk.push(num1 * num2);
                        break;
                    case '/':
                        sk.push(num1 / num2);
                        break;
                        
                    default:
                        break;
                }
            }
        }
        return sk.top();
    }
    bool isNumber(string str){
        return !(str == "+" || str == "-" || str == "*" || str == "/");
    }

};

int main(){
    vector<string> token = {"2","1","+","3","*"};
    Solution sl;
    std::cout << sl.evalRPN(token) << std::endl;
}
*/





/*
 //Task 56 基本计算器
 给你一个字符串表达式 s ，请你实现一个基本计算器来计算并返回它的值。

 注意:不允许使用任何将字符串作为数学表达式计算的内置函数，比如 eval() 。

  

 示例 1：

 输入：s = "1 + 1"
 输出：2
 示例 2：

 输入：s = " 2-1 + 2 "
 输出：3
 示例 3：

 输入：s = "(1+(4+5+2)-3)+(6+8)"
 输出：23
  

 提示：

 1 <= s.length <= 3 * 105
 s 由数字、'+'、'-'、'('、')'、和 ' ' 组成
 s 表示一个有效的表达式
 '+' 不能用作一元运算(例如， "+1" 和 "+(2 + 3)" 无效)
 '-' 可以用作一元运算(即 "-1" 和 "-(2 + 3)" 是有效的)
 输入中不存在两个连续的操作符
 每个数字和运行的计算将适合于一个有符号的 32位 整数
 */


/*
 #include <string>
 #include <iostream>
 #include <stack>
 using namespace std;
 class Solution{
 public:
 int calculate(string s){
 // 设置一个栈变量，用于存储符号
 stack<int> sk;
 int sign = 1;
 sk.push(sign);
 
 int n = s.length();
 int i = 0;
 int result = 0;
 
 while(i < n){
 if(s[i] == ' '){
 i++;
 }else if(s[i] == '+'){
 sign = sk.top();
 i++;
 }else if(s[i] == '-'){
 sign = -sk.top();
 i++;
 }else if(s[i] == '('){
 sk.push(sign);
 i++;
 }else if(s[i] == ')'){
 sk.pop();
 i++;
 }else{
 long num = 0;
 while(i < n && s[i] >= '0' && s[i] <= '9'){
 num = num * 10 + s[i] - '0';
 i++;
 }
 result += sign * num;
 }
 }
 return result;
 }
 };
 
 int main(){
 string str = " 2-1 + 2 ";
 Solution sl;
 std::cout << sl.calculate(str) << std::endl;
 }
 */







/*
 //Task 57 两数相加
 
 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
 
 请你将两个数相加，并以相同形式返回一个表示和的链表。
 
 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 
 
 
 示例 1：
 
 
 输入：l1 = [2,4,3], l2 = [5,6,4]
 输出：[7,0,8]
 解释：342 + 465 = 807.
 示例 2：
 
 输入：l1 = [0], l2 = [0]
 输出：[0]
 示例 3：
 
 输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
 输出：[8,9,9,9,0,0,0,1]
 
 
 提示：
 
 每个链表中的节点数在范围 [1, 100] 内
 0 <= Node.val <= 9
 题目数据保证列表表示的数字不含前导零
 */


/*
#include <vector>
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};


class Solution{
public:
    ListNode* addTwoNumbers(ListNode* L1, ListNode* L2){
        ListNode* root = new ListNode(0);
        ListNode* p = root;
        int jinwei = 0;
        while(L1 || L2 || jinwei){
            int L1Val = (L1 ? L1->val: 0);
            int L2Val = (L2 ? L2->val: 0);
            
            int L3Val = L1Val + L2Val + jinwei;
            jinwei = L3Val / 10;
            ListNode* L3 = new ListNode();
            L3->val = L3Val % 10;
            p->next = L3;
            p = p->next;
             
            if(L1) L1 = L1->next;
            if(L2) L2 = L2->next;
        }
        return root->next;
    }
};

int main(){
    ListNode* L1 = new ListNode();
    ListNode* L1_1 = new ListNode(2);
    ListNode* L1_2 = new ListNode(4);
    ListNode* L1_3 = new ListNode(3);
    L1->next = L1_1;
    L1_1->next = L1_2;
    L1_2->next = L1_3;
    
    ListNode* L2 = new ListNode();
    ListNode* L2_1 = new ListNode(5);
    ListNode* L2_2 = new ListNode(6);
    ListNode* L2_3 = new ListNode(4);
    L2->next = L2_1;
    L2_1->next = L2_2;
    L2_2->next = L2_3;
    
    Solution sl;
    ListNode* L3 = sl.addTwoNumbers(L1->next, L2->next);
    vector<int> result;
    while(L3){
        result.push_back(L3->val);
        L3 = L3->next;
    }
    for(int i = result.size()-1; i>=0; i--){
        std::cout << result[i] << std::endl;
    }
}
*/





/*
 //Task 58 合并两个有序链表
 
 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

  

 示例 1：


 输入：l1 = [1,2,4], l2 = [1,3,4]
 输出：[1,1,2,3,4,4]
 示例 2：

 输入：l1 = [], l2 = []
 输出：[]
 示例 3：

 输入：l1 = [], l2 = [0]
 输出：[0]
  

 提示：

 两个链表的节点数目范围是 [0, 50]
 -100 <= Node.val <= 100
 l1 和 l2 均按 非递减顺序 排列
*/


/*
 #include <vector>
 #include <iostream>
 using namespace std;
 struct ListNode {
 int val;
 ListNode* next;
 ListNode(): val(0),next(nullptr){}
 ListNode(int x): val(x), next(nullptr){}
 ListNode(int x, ListNode* next): val(x), next(next){}
 };
 
 class Solution{
 public:
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
 if(!list1){
 return list2;
 }
 if(!list2){
 return list1;
 }
 
 if(list1->val < list2->val){
 list1->next = mergeTwoLists(list1->next, list2);
 return list1;
 }else{
 list2->next = mergeTwoLists(list2->next, list1);
 return list2;
 }
 }
 };
 
 int main(){
 ListNode* l1 = new ListNode(1);
 ListNode* l1_2 = new ListNode(2);
 ListNode* l1_3 = new ListNode(4);
 l1->next = l1_2;
 l1_2->next = l1_3;
 
 ListNode* l2 = new ListNode(1);
 ListNode* l2_2 = new ListNode(3);
 ListNode* l2_3 = new ListNode(4);
 l2->next = l2_2;
 l2_2->next = l2_3;
 
 Solution sl;
 ListNode* L3 = sl.mergeTwoLists(l1, l2);
 
 while (L3) {
 std::cout << L3->val << std::endl;
 L3 = L3->next;
 }
 }
 */






/*
 //Task 59 随机链表的复制
 
 给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
 
 构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。新节点的 next 指针和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。复制链表中的指针都不应指向原链表中的节点 。
 
 例如，如果原链表中有 X 和 Y 两个节点，其中 X.random --> Y 。那么在复制链表中对应的两个节点 x 和 y ，同样有 x.random --> y 。
 
 返回复制链表的头节点。
 
 用一个由 n 个节点组成的链表来表示输入/输出中的链表。每个节点用一个 [val, random_index] 表示：
 
 val：一个表示 Node.val 的整数。
 random_index：随机指针指向的节点索引（范围从 0 到 n-1）；如果不指向任何节点，则为  null 。
 你的代码 只 接受原链表的头节点 head 作为传入参数。
 
 
 
 示例 1：
 
 
 
 输入：head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
 输出：[[7,null],[13,0],[11,4],[10,2],[1,0]]
 示例 2：
 
 
 
 输入：head = [[1,1],[2,1]]
 输出：[[1,1],[2,1]]
 示例 3：
 
 
 
 输入：head = [[3,null],[3,0],[3,null]]
 输出：[[3,null],[3,0],[3,null]]
 
 
 提示：
 
 0 <= n <= 1000
 -104 <= Node.val <= 104
 Node.random 为 null 或指向链表中的节点。
 
 */



/*
#include <iostream>
#include <unordered_map>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val):val(_val),next(nullptr), random(nullptr){}
};

class Solution{
public:
    unordered_map<Node*, Node*> cacheNode;
public:
    Node* copyRandomList(Node* head){
        if(!head){
            return nullptr;
        }
        
        if(!cacheNode.count(head)){
            Node* headNew = new Node(head->val);
            cacheNode[head] = headNew;
            headNew->next = copyRandomList(head->next);
            headNew->random = copyRandomList(head->random);
        }
        return cacheNode[head];
    }
};

//head = [[7,null],[13,0],[11,4],[10,2],[1,0]]

int main(){
    Node* head = new Node(7);
    Node* head_1 = new Node(13);
    Node* head_2 = new Node(11);
    Node* head_3 = new Node(10);
    Node* head_4 = new Node(1);
    head->next = head_1;
    head->random = nullptr;
    head_1->next = head_2;
    head_1->random = head;
    head_2->next = head_3;
    head_2->random = head_4;
    head_3->next = head_4;
    head_3->random = head_2;
    head_4->random = head;
    
    Solution sl;
    Node* headNew = sl.copyRandomList(head);
    while (headNew) {
        std::cout << headNew->val <<std::endl;
        if (headNew->random){
            std::cout << headNew->random->val << std::endl;
        }
        
        headNew = headNew->next;
    }
 }
*/








/*
 //Task 60 反转链表2
 
 给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 。请你反转从位置 left 到位置 right 的链表节点，返回 反转后的链表 。
  
 示例 1：

 输入：head = [1,2,3,4,5], left = 2, right = 4
 输出：[1,4,3,2,5]
 示例 2：

 输入：head = [5], left = 1, right = 1
 输出：[5]
  

 提示：

 链表中节点数目为 n
 1 <= n <= 500
 -500 <= Node.val <= 500
 1 <= left <= right <= n
*/


/*
 #include <iostream>
 using namespace std;
 struct ListNode{
 int val;
 ListNode* next;
 ListNode():val(0),next(nullptr){}
 ListNode(int x):val(x), next(nullptr){}
 ListNode(int x, ListNode* next): val(x), next(next){}
 };
 
 
 class Solution{
 public:
 ListNode* reverseBetween(ListNode* head, int left, int right){
 ListNode* dummyNode = new ListNode(-1);
 dummyNode->next = head;
 ListNode* pre = dummyNode;
 for(int i = 1; i < left; i++){
 pre = pre->next;
 }
 
 ListNode* cur = pre->next;
 for(int i = 0; i < right - left; i++){
 ListNode* next = cur->next;
 cur->next = next->next;
 next->next = pre->next;
 pre->next = next;
 }
 return dummyNode->next;
 }
 };
 
 int main(){
 ListNode* head = new ListNode(1);
 ListNode* head_2 = new ListNode(2);
 ListNode* head_3 = new ListNode(3);
 ListNode* head_4 = new ListNode(4);
 ListNode* head_5 = new ListNode(5);
 head->next = head_2;
 head_2->next = head_3;
 head_3->next = head_4;
 head_4->next = head_5;
 
 Solution sl;
 ListNode* headNew = sl.reverseBetween(head, 2, 4);
 while (headNew) {
 std::cout << headNew->val << std::endl;
 headNew = headNew->next;
 }
 }
 */










/*
 //Task 61 K 个一组翻转链表
 
 给你链表的头节点 head ，每 k 个节点一组进行翻转，请你返回修改后的链表。

 k 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。

 你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换。

  

 示例 1：


 输入：head = [1,2,3,4,5], k = 2
 输出：[2,1,4,3,5]
 示例 2：



 输入：head = [1,2,3,4,5], k = 3
 输出：[3,2,1,4,5]
  

 提示：
 链表中的节点数目为 n
 1 <= k <= n <= 5000
 0 <= Node.val <= 1000
*/



/*
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x, ListNode* next):val(x),next(next){}
};

class Solution{
public:
    
    std::pair<ListNode*, ListNode*> myReverse(ListNode* head, ListNode* tail){
        ListNode* prev = tail->next;
        ListNode* pre = head;
        while(tail != prev){
            ListNode* next = pre->next;
            pre->next = prev;
            prev = pre;
            pre = next;
        }
        return{tail, head};
    }

    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode* hair = new ListNode(0);
        hair->next = head;
        ListNode* pre = hair;
        
        while (head) {
            ListNode* tail = pre;
            
            for(int i = 0; i < k; i++){
                tail = tail->next;
                if(!tail){
                    return hair->next;
                }
            }
            
            ListNode* next = tail->next;
            tie(head, tail) = myReverse(head, tail);
            pre->next = head;
            tail->next = next;
            pre = tail;
            head = next;
            
        }
        return hair->next;
    }
};

//输入：head = [1,2,3,4,5], k = 2
//输出：[2,1,4,3,5]
int main(){
    ListNode* head = new ListNode(1);
    ListNode* head_2 = new ListNode(2);
    ListNode* head_3 = new ListNode(3);
    ListNode* head_4 = new ListNode(4);
    ListNode* head_5 = new ListNode(5);
    
    head->next = head_2;
    head_2->next = head_3;
    head_3->next = head_4;
    head_4->next = head_5;
    
    Solution sl;
    ListNode* headNew = sl.reverseKGroup(head, 2);
    while (headNew) {
        std::cout << headNew->val <<std::endl;
        headNew = headNew->next;
    }
}
*/










/*
 //Task 62 删除链表的倒数第N个节点
 
 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

  

 示例 1：


 输入：head = [1,2,3,4,5], n = 2
 输出：[1,2,3,5]
 示例 2：

 输入：head = [1], n = 1
 输出：[]
 示例 3：

 输入：head = [1,2], n = 1
 输出：[1]
  

 提示：

 链表中结点的数目为 sz
 1 <= sz <= 30
 0 <= Node.val <= 100
 1 <= n <= sz
  

 进阶：你能尝试使用一趟扫描实现吗？
 
 */


/*
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};

class Solution{
public:
    int getListLength(ListNode* head){
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode* headNew = new ListNode(0, head);
        ListNode* p = headNew;
        int listLength = getListLength(head);
        for(int i = 1; i < listLength - n + 1; i++){
            p = p->next;
        }
        p->next = p->next->next;
        return headNew->next;
    }
};


int main(){
    ListNode* head = new ListNode(1);
    ListNode* head_2 = new ListNode(2);
    ListNode* head_3 = new ListNode(3);
    ListNode* head_4 = new ListNode(4);
    ListNode* head_5 = new ListNode(5);
    head->next = head_2;
    head_2->next = head_3;
    head_3->next = head_4;
    head_4->next = head_5;
    
    Solution sl;
    ListNode* headNew = sl.removeNthFromEnd(head, 2);
    while (headNew) {
        std::cout << headNew->val << std::endl;
        headNew = headNew->next;
    }
}
*/




/*
 //Task 63 删除排序链表中的重复元素 II
 
 给定一个已排序的链表的头 head ， 删除原始链表中所有重复数字的节点，只留下不同的数字 。返回 已排序的链表 。
 
 
 
 示例 1：
 
 
 输入：head = [1,2,3,3,4,4,5]
 输出：[1,2,5]
 示例 2：
 
 
 输入：head = [1,1,1,2,3]
 输出：[2,3]
 */


/*
#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode* next):val(x), next(next){}
};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode* preHead = new ListNode(0);
        preHead->next = head;
        ListNode* cur = preHead;
        while(cur->next && cur->next->next){
            if(cur->next->val == cur->next->next->val){
                int temp = cur->next->val;
                while(cur->next && cur->next->val == temp){
                    cur->next = cur->next->next;
                }
            }else{
                cur = cur->next;
            }
        }
        return preHead->next;
    }
};


int main(){
    ListNode* head = new ListNode(1);
    ListNode* head_2 = new ListNode(2);
    ListNode* head_3 = new ListNode(3);
    ListNode* head_4 = new ListNode(3);
    ListNode* head_5 = new ListNode(4);
    ListNode* head_6 = new ListNode(4);
    ListNode* head_7 = new ListNode(5);
    head->next = head_2;
    head_2->next = head_3;
    head_3->next = head_4;
    head_4->next = head_5;
    head_5->next = head_6;
    head_6->next = head_7;
    
    Solution sl;
    auto result_head = sl.deleteDuplicates(head);
    while(result_head){
        std::cout << result_head->val <<std::endl;
        result_head = result_head->next;
    }
}
*/





/*
 //Task 64 旋转链表
 给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。

  

 示例 1：


 输入：head = [1,2,3,4,5], k = 2
 输出：[4,5,1,2,3]
 示例 2：


 输入：head = [0,1,2], k = 4
 输出：[2,0,1]
*/


/*
#include <iostream>
#include <math.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int val):val(val),next(nullptr){}
    ListNode(int val, ListNode* next):val(val),next(next){}
};


class Solution{
public:
    ListNode* rotateRight(ListNode* head, int k){
        if(k == 0 || !head || !head->next){
            return head;
        }
        
        int listLength = 1;
        ListNode* iter = head;
        while (iter->next) {
            listLength++;
            iter = iter->next;
        }
        
        int add =listLength-k%listLength;
        if (add == listLength){
            return head;
        }
        
        iter->next = head;
        while (add--) {
            iter = iter->next;
        }
        
        ListNode* ret = iter->next;
        iter->next = nullptr;
        return ret;
    }
};


int main(){
    ListNode* head = new ListNode(0);
    ListNode* head_2 = new ListNode(1);
    ListNode* head_3 = new ListNode(2);
    ListNode* head_4 = new ListNode(4);
    ListNode* head_5 = new ListNode(5);
    
    head->next = head_2;
    head_2->next = head_3;
    head_3->next = head_4;
    head_4->next = head_5;
    
    Solution sl;
    ListNode* headResult = sl.rotateRight(head, 2);
    
    while (headResult) {
        std::cout << headResult->val << std::endl;
        headResult = headResult->next;
    }
}
*/







/*
 //Task 65 分隔链表
 
 给你一个链表的头节点 head 和一个特定值 x ，请你对链表进行分隔，使得所有 小于 x 的节点都出现在 大于或等于 x 的节点之前。
 
 你应当 保留 两个分区中每个节点的初始相对位置。
 
 
 
 示例 1：
 
 
 输入：head = [1,4,3,2,5,2], x = 3
 输出：[1,2,2,4,3,5]
 示例 2：
 
 输入：head = [2,1], x = 2
 输出：[1,2]
 */

/*
 #include <iostream>
 using namespace std;
 struct ListNode{
 int val;
 ListNode* next;
 ListNode():val(0),next(nullptr){}
 ListNode(int val): val(val),next(nullptr){}
 ListNode(int val, ListNode* next):val(val),next(next){}
 };
 
 class Solution{
 public:
 ListNode* partition(ListNode* head, int x){
 ListNode* smallHead = new ListNode(0);
 ListNode* small = smallHead;
 ListNode* largeHead = new ListNode(0);
 ListNode* large = largeHead;
 
 while(head){
 if(head->val < x){
 small->next = head;
 small = small->next;
 }else{
 large->next = head;
 large = large->next;
 }
 head = head->next;
 }
 
 large->next = nullptr;
 small->next = largeHead->next;
 return smallHead->next;
 }
 };
 
 int main(){
 ListNode* head = new ListNode(1);
 ListNode* head_2 = new ListNode(4);
 ListNode* head_3 = new ListNode(3);
 ListNode* head_4 = new ListNode(2);
 ListNode* head_5 = new ListNode(5);
 ListNode* head_6 = new ListNode(2);
 
 head->next = head_2;
 head_2->next = head_3;
 head_3->next = head_4;
 head_4->next = head_5;
 head_5->next = head_6;
 
 Solution sl;
 ListNode* resultHead = sl.partition(head, 3);
 while (resultHead) {
 std::cout << resultHead->val <<std::endl;
 resultHead = resultHead->next;
 }
 
 }
 */






/*
 //Task 66 LRU 缓存
 请你设计并实现一个满足  LRU (最近最少使用) 缓存 约束的数据结构。
 实现 LRUCache 类：
 LRUCache(int capacity) 以 正整数 作为容量 capacity 初始化 LRU 缓存
 int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。
 void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value ；如果不存在，则向缓存中插入该组 key-value 。如果插入操作导致关键字数量超过 capacity ，则应该 逐出 最久未使用的关键字。
 函数 get 和 put 必须以 O(1) 的平均时间复杂度运行。

 示例：

 输入
 ["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
 [[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
 输出
 [null, null, null, 1, null, -1, null, -1, 3, 4]

 解释
 LRUCache lRUCache = new LRUCache(2);
 lRUCache.put(1, 1); // 缓存是 {1=1}
 lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
 lRUCache.get(1);    // 返回 1
 lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
 lRUCache.get(2);    // 返回 -1 (未找到)
 lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
 lRUCache.get(1);    // 返回 -1 (未找到)
 lRUCache.get(3);    // 返回 3
 lRUCache.get(4);    // 返回 4
 
*/


/*
 #include <unordered_map>
 #include <iostream>
 using namespace std;
 
 struct DListNode{
 int key, value;
 DListNode* pre;
 DListNode* next;
 DListNode():key(0),value(0),pre(nullptr),next(nullptr){}
 DListNode(int _key, int _value): key(_key), value(_value),pre(nullptr),next(nullptr){}
 };
 
 class LRUCache{
 private:
 int capacity;
 int size;
 DListNode* head;
 DListNode* tail;
 unordered_map<int, DListNode*> cache;
 
 public:
 LRUCache(int _capacity):capacity(_capacity),size(0){
 head = new DListNode();
 tail = new DListNode();
 head->next = tail;
 tail->pre = head;
 }
 
 int get(int key){
 if(!cache.count(key)){
 return -1;
 }
 DListNode* node = cache[key];
 moveToHead(node);
 return node->value;
 }
 
 void put(int key, int value){
 if(!cache.count(key)){
 DListNode* node = new DListNode(key, value);
 cache[key] = node;
 addToHead(node);
 size++;
 if(size > capacity){
 DListNode* node = removeTail();
 cache.erase(node->key);
 delete node;
 size--;
 }
 }
 else{
 DListNode* node = cache[key];
 node->value = value;
 moveToHead(node);
 }
 }
 
 void addToHead(DListNode* node){
 node->next = head->next;
 head->next->pre = node;
 head->next = node;
 node->pre = head;
 }
 
 void removeNode(DListNode* node){
 node->pre->next = node->next;
 node->next->pre = node->pre;
 
 }
 
 void moveToHead(DListNode* node){
 removeNode(node);
 addToHead(node);
 }
 
 DListNode* removeTail(){
 DListNode* node = tail->pre;
 removeNode(node);
 return node;
 }
 
 };
 //LRUCache lRUCache = new LRUCache(2);
 //lRUCache.put(1, 1); // 缓存是 {1=1}
 //lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
 //lRUCache.get(1);    // 返回 1
 //lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
 //lRUCache.get(2);    // 返回 -1 (未找到)
 //lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
 //lRUCache.get(1);    // 返回 -1 (未找到)
 //lRUCache.get(3);    // 返回 3
 //lRUCache.get(4);    // 返回 4
 
 int main(){
 LRUCache* lru = new LRUCache(1);
 lru->put(2,1);
 //    lru->put(2, 2);
 std::cout << lru->get(2) << std::endl;
 }
 
*/




/*
 //Task 66 二叉树的最大深度
 给定一个二叉树 root ，返回其最大深度。

 二叉树的 最大深度 是指从根节点到最远叶子节点的最长路径上的节点数。

  

 示例 1：

 输入：root = [3,9,20,null,null,15,7]
 输出：3
 示例 2：

 输入：root = [1,null,2]
 输出：2
*/

/*
#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right): val(_val), left(_left), right(_right){}
};

class Solution{
public:
    int maxDepth(TreeNode* root){
        if(!root){
            return 0;
        }
        return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

int main(){
    
}
*/




/*
 //Task 67 相同的树
 给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。

 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。

  

 示例 1：


 输入：p = [1,2,3], q = [1,2,3]
 输出：true
 示例 2：


 输入：p = [1,2], q = [1,null,2]
 输出：false
 示例 3：


 输入：p = [1,2,1], q = [1,1,2]
 输出：false
 */

/*
#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _value):val(_value),left(nullptr),right(nullptr){}
    TreeNode(int _value, TreeNode* _left, TreeNode* _right):val(_value),left(_left),right(_right){}
};

class Solution{
public:
    bool isSameTree(TreeNode* p, TreeNode* q){
        if(p == nullptr && q == nullptr){
            return true;
        }else if(p == nullptr || q == nullptr){
            return false;
        }else if(p->val != q->val){
            return false;
        }else{
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};

int main(){
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(3);
    p->right = new TreeNode(3);
    
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    
    Solution sl;
    std::cout << sl.isSameTree(p, q) << std::endl;
}
*/



/*
 //Task 68 翻转二叉树
 
 给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。
 
 
 
 示例 1：
 
 
 
 输入：root = [4,2,7,1,3,6,9]
 输出：[4,7,2,9,6,3,1]
 示例 2：
 
 
 
 输入：root = [2,1,3]
 输出：[2,3,1]
 示例 3：
 
 输入：root = []
 输出：[]
 */

/*
#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    TreeNode* invertTree(TreeNode* root){
        if(!root){
            return nullptr;
        }
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};


int main(){
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    
    Solution sl;
    TreeNode* rootInvert =  sl.invertTree(root);
    std::cout << rootInvert->val << std::endl;
    std::cout << rootInvert->left->val << std::endl;
    std::cout << rootInvert->right->val <<std::endl;
}
*/




/*
 //Task 69 对称二叉树
 给你一个二叉树的根节点 root ， 检查它是否轴对称。
 
 
 
 示例 1：
 
 
 输入：root = [1,2,2,3,4,4,3]
 输出：true
 示例 2：
 
 
 输入：root = [1,2,2,null,3,null,3]
 输出：false
 */

/*
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    bool isMirror(TreeNode* p, TreeNode* q){
        if(!p && !q){
            return true;
        }
        if(!p || !q){
            return false;
        }
        return p->val == q->val && isMirror(p->right, q->left) && isMirror(p->left, q->right);
    }
    bool isSymmetric(TreeNode* root){
        return isMirror(root->left, root->right);
    }
};
*/





/*
 //Task 70 从前序与中序遍历序列构造二叉树
 
 给定两个整数数组 preorder 和 inorder ，其中 preorder 是二叉树的先序遍历， inorder 是同一棵树的中序遍历，请构造二叉树并返回其根节点。
 
 
 
 示例 1:
 
 
 输入: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
 输出: [3,9,20,null,null,15,7]
 示例 2:
 
 输入: preorder = [-1], inorder = [-1]
 输出: [-1]
 */


/*
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    unordered_map<int, int> inorderMap;
    TreeNode* buildMyTree(vector<int>& preorder, vector<int>& inorder, int preorderLeft, int preorderRight, int inorderLeft, int inorderRight){
        if (preorderLeft > preorderRight){
            return nullptr;
        }
        
        // 查找前序序列中根节点序号
        int preoderRootSqNum = preorderLeft;
        
        // 查找中序序列中根节点序号
        int inorderRootSqNum = inorderMap[preorder[preoderRootSqNum]];
        
        // 创建根节点
        TreeNode* root = new TreeNode(preorder[preoderRootSqNum]);
        
        // 查询根节点下左子树数量
        int sizeLeftTree = inorderRootSqNum - inorderLeft;
        
        // 递归构建左子树
        root->left = buildMyTree(preorder, inorder, preoderRootSqNum+1, preoderRootSqNum+sizeLeftTree, inorderLeft, inorderRootSqNum-1);
        // 递归构建右子树
        root->right = buildMyTree(preorder, inorder, preoderRootSqNum+sizeLeftTree+1, preorderRight, inorderRootSqNum+1, inorderRight);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        int n = preorder.size();
        for(int i = 0; i < n; i++){
            inorderMap[inorder[i]] = i;
        }
        return buildMyTree(preorder, inorder, 0, n-1, 0, n-1);
    }
};
*/








/*
 //Task 71 从中序与后序遍历序列构造二叉树
 给定两个整数数组 inorder 和 postorder ，其中 inorder 是二叉树的中序遍历， postorder 是同一棵树的后序遍历，请你构造并返回这颗 二叉树 。
 
 
 
 示例 1:
 
 
 输入：inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
 输出：[3,9,20,null,null,15,7]
 示例 2:
 
 输入：inorder = [-1], postorder = [-1]
 输出：[-1]
 */


/*
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    int postIdx;
    unordered_map<int, int> inorderMap;
    
    TreeNode* buildMyTree(int inLeft, int inRight, vector<int>& inorder, vector<int>& postorder){
        // 如果左子树坐标大于右子树坐标，则返回kong
        if (inLeft > inRight){
            return nullptr;
        }
        
        // 获取根节点的值
        int rootValue = postorder[postIdx];
        
        // 获取中序数组中根节点的坐标
        int inorderRootSeqNum = inorderMap[rootValue];
        
        // 构建根节点
        TreeNode* root = new TreeNode(rootValue);
        
        postIdx--;
        
        // 构建右子树
        root->right = buildMyTree(inorderRootSeqNum+1, inRight, inorder, postorder);
        root->left = buildMyTree(inLeft, inorderRootSeqNum-1, inorder, postorder);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder){
        // 获取后续遍历数组根节点坐标
        postIdx = (int)inorder.size()-1;
        
        int idx = 0;
        // 创建中序遍历坐标与值映射数组
        for(auto& value : inorder){
            inorderMap[value] = idx++;
        }
        
        // 创建子树
        return buildMyTree(0, postIdx, inorder, postorder);
    }
};
*/





/*
 //Task 72 填充每个节点的下一个右侧节点指针 II
 
 给定一个二叉树：
 
 struct Node {
 int val;
 Node *left;
 Node *right;
 Node *next;
 }
 填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL 。
 
 初始状态下，所有 next 指针都被设置为 NULL 。
 
 
 
 示例 1：
 
 
 输入：root = [1,2,3,4,5,null,7]
 输出：[1,#,2,3,#,4,5,7,#]
 解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。序列化输出按层序遍历顺序（由 next 指针连接），'#' 表示每层的末尾。
 示例 2：
 
 输入：root = []
 输出：[]
 */

/*
#include <queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    
    Node(): val(0),left(nullptr),right(nullptr),next(nullptr){}
    Node(int _val): val(_val),left(nullptr),right(nullptr){}
    Node(int _val, Node* _left, Node* _right, Node* _next): val(_val),left(_left),right(_right),next(_next){}
};

class Solution{
public:
    Node* connect(Node* root){
        // 判断根节点是否为空
        if(!root){
            return nullptr;
        }
        
        // 创建队列并存储第一个根节点
        queue<Node*> q;
        q.push(root);
        
        // 循环获取二叉树每层节点
        while(!q.empty()){
            int n = int(q.size());
            Node* lastNode = nullptr;
            for(int i = 1; i <= n; i++){
                Node* f = q.front();
                q.pop();
                
                // 将左右子树送入队列
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
                
                if(i != 1){
                    lastNode->next = f;
                }
                lastNode = f;
            }
        }
        return root;
    }
};
*/




/*
 //Task 73 二叉树展开为链表
 给你二叉树的根结点 root ，请你将它展开为一个单链表：
 
 展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
 展开后的单链表应该与二叉树 先序遍历 顺序相同。
 
 
 示例 1：
 
 
 输入：root = [1,2,5,3,4,null,6]
 输出：[1,null,2,null,3,null,4,null,5,null,6]
 示例 2：
 
 输入：root = []
 输出：[]
 示例 3：
 
 输入：root = [0]
 输出：[0]
 
 
 提示：
 
 树中结点数在范围 [0, 2000] 内
 -100 <= Node.val <= 100
 */


/*
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    void preorderTraversal(TreeNode* root, vector<TreeNode*> & l){
        if(root){
            l.emplace_back(root);
            preorderTraversal(root->left, l);
            preorderTraversal(root->right, l);
        }
    }
    
    void flatten(TreeNode* root){
        // 创建数组存储节点
        vector<TreeNode*> list;
        
        //前序遍历二叉树并将节点存储在数组中
        preorderTraversal(root, list);
        
        //串联数组中的节点
        int n = int(list.size());
        for(int i = 1; i < n; i++){
            TreeNode* pre = list.at(i-1), *next = list.at(i);
            pre->left = nullptr;
            pre->right = next;
        }
    }
};
*/





/*
 //Task 74 路径总和
 给你二叉树的根节点 root 和一个表示目标和的整数 targetSum 。判断该树中是否存在 根节点到叶子节点 的路径，这条路径上所有节点值相加等于目标和 targetSum 。如果存在，返回 true ；否则，返回 false 。
 
 叶子节点 是指没有子节点的节点。
 
 
 
 示例 1：
 
 
 输入：root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
 输出：true
 解释：等于目标和的根节点到叶节点路径如上图所示。
 示例 2：
 
 
 输入：root = [1,2,3], targetSum = 5
 输出：false
 解释：树中存在两条根节点到叶子节点的路径：
 (1 --> 2): 和为 3
 (1 --> 3): 和为 4
 不存在 sum = 5 的根节点到叶子节点的路径。
 示例 3：
 
 输入：root = [], targetSum = 0
 输出：false
 解释：由于树是空的，所以不存在根节点到叶子节点的路径。
 */


/*
 struct TreeNode{
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode():val(0),left(nullptr),right(nullptr){}
 TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
 TreeNode(int _val, TreeNode* _left, TreeNode* _right): val(_val),left(_left),right(_right){}
 };
 
 class Solution{
 public:
 bool hasPathSum(TreeNode* root, int targetSum){
 if(!root){
 return false;
 }
 if(!root->left && !root->right){
 return root->val == targetSum;
 }
 return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val);
 }
 };
 */




/*
 //Task 75 求根节点到叶节点数字之和
 给你一个二叉树的根节点 root ，树中每个节点都存放有一个 0 到 9 之间的数字。
 每条从根节点到叶节点的路径都代表一个数字：

 例如，从根节点到叶节点的路径 1 -> 2 -> 3 表示数字 123 。
 计算从根节点到叶节点生成的 所有数字之和 。

 叶节点 是指没有子节点的节点。

  

 示例 1：


 输入：root = [1,2,3]
 输出：25
 解释：
 从根到叶子节点路径 1->2 代表数字 12
 从根到叶子节点路径 1->3 代表数字 13
 因此，数字总和 = 12 + 13 = 25
 示例 2：


 输入：root = [4,9,0,5,1]
 输出：1026
 解释：
 从根到叶子节点路径 4->9->5 代表数字 495
 从根到叶子节点路径 4->9->1 代表数字 491
 从根到叶子节点路径 4->0 代表数字 40
 因此，数字总和 = 495 + 491 + 40 = 1026
*/


/*
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    int dfs(TreeNode* root, int preSum){
        // 当根节点为空时，结束递归，返回0
        if(!root){
            return 0;
        }
        
        // 计算截止至当前根节点的总和
        int sum = preSum * 10 + root->val;
        
        // 当当前节点为叶子节点时，返回当前的总和
        if(!root->left && !root->right){
            return sum;
        }
        
        // 递归相加左右节点的值
        return dfs(root->left, sum) + dfs(root->right, sum);
    }

    int sumNumbers(TreeNode* root){
        // 深度优先遍历值
        return dfs(root, 0);
    }
};
*/



/*
 //Task 76 二叉树中的最大路径和
 二叉树中的 路径 被定义为一条节点序列，序列中每对相邻节点之间都存在一条边。同一个节点在一条路径序列中 至多出现一次 。该路径 至少包含一个 节点，且不一定经过根节点。
 
 路径和 是路径中各节点值的总和。
 
 给你一个二叉树的根节点 root ，返回其 最大路径和 。
 
 
 
 示例 1：
 
 
 输入：root = [1,2,3]
 输出：6
 解释：最优路径是 2 -> 1 -> 3 ，路径和为 2 + 1 + 3 = 6
 示例 2：
 
 
 输入：root = [-10,9,20,null,null,15,7]
 输出：42
 解释：最优路径是 15 -> 20 -> 7 ，路径和为 15 + 20 + 7 = 42
 */


/*
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr),right(nullptr){}
    TreeNode(int _val): val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right): val(_val), left(_left), right(_right){}
};

#include <iostream>
using namespace std;
class Solution{
public:
    int maxSum = INT_MIN;
    
    int maxGain(TreeNode* root){
        // 如果root为空，则返回0
        if (!root){
            return 0;
        }
        
        // 递归获取左右子节点的值
        int leftGain = max(maxGain(root->left), 0);
        int rightGain = max(maxGain(root->right), 0);
        
        // 获取当前最大路径和
        int curPathSum = root->val + leftGain + rightGain;
        
        // 记录最大路径和
        maxSum = max(curPathSum, maxSum);
        
        return root->val + max(leftGain, rightGain);
    }
    
    int maxPathSum(TreeNode* root){
        maxGain(root);
        return maxSum;
    }
};
*/


/*
 //Task 77 二叉搜索树迭代器
 
 实现一个二叉搜索树迭代器类BSTIterator ，表示一个按中序遍历二叉搜索树（BST）的迭代器：
 BSTIterator(TreeNode root) 初始化 BSTIterator 类的一个对象。BST 的根节点 root 会作为构造函数的一部分给出。指针应初始化为一个不存在于 BST 中的数字，且该数字小于 BST 中的任何元素。
 boolean hasNext() 如果向指针右侧遍历存在数字，则返回 true ；否则返回 false 。
 int next()将指针向右移动，然后返回指针处的数字。
 注意，指针初始化为一个不存在于 BST 中的数字，所以对 next() 的首次调用将返回 BST 中的最小元素。

 你可以假设 next() 调用总是有效的，也就是说，当调用 next() 时，BST 的中序遍历中至少存在一个下一个数字。

  

 示例：


 输入
 ["BSTIterator", "next", "next", "hasNext", "next", "hasNext", "next", "hasNext", "next", "hasNext"]
 [[[7, 3, 15, null, null, 9, 20]], [], [], [], [], [], [], [], [], []]
 输出
 [null, 3, 7, true, 9, true, 15, true, 20, false]

 解释
 BSTIterator bSTIterator = new BSTIterator([7, 3, 15, null, null, 9, 20]);
 bSTIterator.next();    // 返回 3
 bSTIterator.next();    // 返回 7
 bSTIterator.hasNext(); // 返回 True
 bSTIterator.next();    // 返回 9
 bSTIterator.hasNext(); // 返回 True
 bSTIterator.next();    // 返回 15
 bSTIterator.hasNext(); // 返回 True
 bSTIterator.next();    // 返回 20
 bSTIterator.hasNext(); // 返回 False
  

 提示：

 树中节点的数目在范围 [1, 105] 内
 0 <= Node.val <= 106
 最多调用 105 次 hasNext 和 next 操作
*/


/*
#include <vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val), left(_left), right(_right){}
};

class BSTIterator{
    
public:
    void inOrder(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }
        inOrder(root->left, res);
        res.emplace_back(root->val);
        inOrder(root->right, res);
    }
    
    vector<int> travealInOrder(TreeNode* root){
        vector<int> res;
        inOrder(root, res);
        return res;
    }
    
    int idx;
    vector<int> arr;
    
    BSTIterator(TreeNode* root):idx(0),arr(travealInOrder(root)){
        // 先进行中序遍历获取中序遍历数组
        
    }
    
    int next(){
        return arr[idx++];
    }
    
    bool hasNext(){
        return idx < arr.size();
    }
};
*/







/*
 //Task 78 完全二叉树的节点个数
 
 给你一棵 完全二叉树 的根节点 root ，求出该树的节点个数。
 
 完全二叉树 的定义如下：在完全二叉树中，除了最底层节点可能没填满外，其余每层节点数都达到最大值，并且最下面一层的节点都集中在该层最左边的若干位置。若最底层为第 h 层（从第 0 层开始），则该层包含 1~ 2h 个节点。
 
 
 
 示例 1：
 
 
 输入：root = [1,2,3,4,5,6]
 输出：6
 示例 2：
 
 输入：root = []
 输出：0
 示例 3：
 
 输入：root = [1]
 输出：1
 
 
 提示：
 
 树中节点的数目范围是[0, 5 * 104]
 0 <= Node.val <= 5 * 104
 题目数据保证输入的树是 完全二叉树
 */


/*
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    int countNodes(TreeNode* root){
        if(!root){
            return 0;
        }
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
*/










/*
 //Task 79 二叉树的最近公共祖先
 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。

 百度百科中最近公共祖先的定义为：“对于有根树 T 的两个节点 p、q，最近公共祖先表示为一个节点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”

  

 示例 1：


 输入：root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
 输出：3
 解释：节点 5 和节点 1 的最近公共祖先是节点 3 。
 示例 2：


 输入：root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
 输出：5
 解释：节点 5 和节点 4 的最近公共祖先是节点 5 。因为根据定义最近公共祖先节点可以为节点本身。
 示例 3：

 输入：root = [1,2], p = 1, q = 2
 输出：1
*/



/*
 struct TreeNode{
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode():val(0),left(nullptr),right(nullptr){}
 TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
 TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
 };
 
 class Solution{
 public:
 TreeNode* ans;
 
 // 深度优先搜索判断是否存在
 bool dfs(TreeNode* root, TreeNode* p, TreeNode* q){
 if(!root){
 return false;
 }
 bool lSon = dfs(root->left, p, q);
 bool rSon = dfs(root->right, p, q);
 
 // 如果左节点跟右节点都存在， 则当前父节点满足就是最近都祖先节点
 // 如果当前节点的值跟目标节点一样，且lSon跟rSon 满足一个，则认为当前父节点满足就是最近都祖先节点
 if((lSon && rSon) || ((root->val == p->val || root->val == q->val) && (lSon || rSon))){
 ans = root;
 }
 return lSon || rSon || root->val == p->val || root->val == q->val;
 }
 
 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
 dfs(root, p, q);
 return ans;
 }
 };
 */






/*
 //Task 80 二叉树的右视图
 给定一个二叉树的 根节点 root，想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。
 示例 1：
 
 输入：root = [1,2,3,null,5,null,4]
 
 输出：[1,3,4]
 
 解释：
 
 
 
 示例 2：
 
 输入：root = [1,2,3,4,null,null,null,5]
 
 输出：[1,3,4,5]
 
 解释：
 
 
 
 示例 3：
 
 输入：root = [1,null,3]
 
 输出：[1,3]
 
 示例 4：
 
 输入：root = []
 
 输出：[]
 
 
 
 提示:
 
 二叉树的节点个数的范围是 [0,100]
 -100 <= Node.val <= 100
 */


/*
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){};
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){};
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:

    vector<int> rightSideView(TreeNode* root){
        int maxDepth = -1;
        //记录深度对应的节点
        unordered_map<int, int> rightMostNodeAtDepth;
        stack<TreeNode*> nodeStack;
        stack<int> depthStack;
        nodeStack.push(root);
        depthStack.push(0);
        
        //深度循环遍历节点
        while (!nodeStack.empty()) {
            TreeNode* node = nodeStack.top(); nodeStack.pop();
            int depth =depthStack.top(); depthStack.pop();
            
            // 判断节点是否为空
            if(node){
                maxDepth = max(maxDepth, depth);
                if(rightMostNodeAtDepth.find(depth) == rightMostNodeAtDepth.end()){
                    rightMostNodeAtDepth[depth] = node->val;
                }
                
                // 循环下面的节点，先左节点，再右节点
                nodeStack.push(node->left);
                nodeStack.push(node->right);
                depthStack.push(depth+1);
                depthStack.push(depth+1);
            }
        }
        vector<int> rightView;
        for(int i = 0; i <= maxDepth; i++){
            rightView.emplace_back(rightMostNodeAtDepth[i]);
        }
        return rightView;
    }
};
*/




/*
 //Task 81 二叉树的层平均值
 
 给定一个非空二叉树的根节点 root , 以数组的形式返回每一层节点的平均值。与实际答案相差 10-5 以内的答案可以被接受。

  

 示例 1：

 输入：root = [3,9,20,null,null,15,7]
 输出：[3.00000,14.50000,11.00000]
 解释：第 0 层的平均值为 3,第 1 层的平均值为 14.5,第 2 层的平均值为 11 。
 因此返回 [3, 14.5, 11] 。
 示例 2:



 输入：root = [3,9,20,15,7]
 输出：[3.00000,14.50000,11.00000]
*/


/*
#include <vector>
#include <queue>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val): val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right): val(_val),left(_left),right(_right){}
};

class Solution{
public:
    vector<double> averageOfLevels(TreeNode* root){
        vector<double> averageValue;
        queue<TreeNode*> nodeQueue;
        if(!root){
            averageValue.emplace_back(0);
        }
        
        // nodeQueue插入根节点
        nodeQueue.push(root);
        while(!nodeQueue.empty()){
            int size = int(nodeQueue.size());
            double sum = 0;
            // 遍历同层次所有节点
            for(int i = 0; i < size; i++){
                auto node = nodeQueue.front();
                nodeQueue.pop();
                sum += node->val;
                if(node->left){
                    nodeQueue.push(node->left);
                }
                if(node->right){
                    nodeQueue.push(node->right);
                }
            }
            averageValue.emplace_back(sum/size);
        }
        return averageValue;
    }
};
*/





/*
 //Task 82 二叉树的层次遍历
 
 给你二叉树的根节点 root ，返回其节点值的 层序遍历 。 （即逐层地，从左到右访问所有节点）。
 
 
 
 示例 1：
 
 
 输入：root = [3,9,20,null,null,15,7]
 输出：[[3],[9,20],[15,7]]
 示例 2：
 
 输入：root = [1]
 输出：[[1]]
 示例 3：
 
 输入：root = []
 输出：[]
 */


/*
#include <vector>
#include <queue>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right): val(_val),left(_left),right(_right){}
};

class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>> resVec;
        
        //当root 为空时，返回空结果
        if(!root){
            return resVec;
        }
        
        //使用队列存储每一层节点,首先存入根节点
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        
        while (!nodeQueue.empty()) {
            int size = int(nodeQueue.size());
            // 存储每一层的结果
            vector<int> levelRes;
            for(int i = 0; i < size; i++){
                auto node = nodeQueue.front(); nodeQueue.pop();
                levelRes.emplace_back(node->val);
                if(node->left){
                    nodeQueue.push(node->left);
                }
                if(node->right){
                    nodeQueue.push(node->right);
                }
            }
            resVec.emplace_back(levelRes);
        }
        return resVec;
    }
};
*/




/*
 //Task 83 二叉树的锯齿形层序遍历
 
 给你二叉树的根节点 root ，返回其节点值的 锯齿形层序遍历 。（即先从左往右，再从右往左进行下一层遍历，以此类推，层与层之间交替进行）。
 
 
 
 示例 1：
 
 
 输入：root = [3,9,20,null,null,15,7]
 输出：[[3],[20,9],[15,7]]
 示例 2：
 
 输入：root = [1]
 输出：[[1]]
 示例 3：
 
 输入：root = []
 输出：[]
 */


/*
#include <vector>
#include <queue>
#include <deque>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){};
    TreeNode(int _val): val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> res;
        // 如果头节点为空，则返回空
        if(!root){
            return res;
        }
        
        // 插入头节点
        queue<TreeNode*> queueNode;
        queueNode.push(root);
        bool isOrderLeft = true;
        
        while(!queueNode.empty()){
            int size = int(queueNode.size());
            deque<int> levelRes;
            
            for(int i = 0; i<size; i++){
                auto node = queueNode.front();
                queueNode.pop();
                
                if(isOrderLeft){
                    levelRes.push_back(node->val);
                }else{
                    levelRes.push_front(node->val);
                }
                
                if(node->left){
                    queueNode.push(node->left);
                }
                
                if(node->right){
                    queueNode.push(node->right);
                }
            }
            res.emplace_back(vector<int>{levelRes.begin(),levelRes.end()});
            isOrderLeft = !isOrderLeft;
        }
        return res;
    }
};
*/




/*
 //Task 84 二叉搜索树的最小绝对差
 给你一个二叉搜索树的根节点 root ，返回 树中任意两不同节点值之间的最小差值 。
 
 差值是一个正数，其数值等于两值之差的绝对值。
 
 
 
 示例 1：
 
 
 输入：root = [4,2,6,1,3]
 输出：1
 示例 2：
 
 
 输入：root = [1,0,48,null,null,12,49]
 输出：1
 
 
 提示：
 
 树中节点的数目范围是 [2, 104]
 0 <= Node.val <= 105
 */

/*
#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    void dfs(TreeNode* root, int& pre, int& ans){
        // 判断root不为空
        if(!root){
            return;
        }
        dfs(root->left, pre, ans);
        if(pre == -1){
            pre = root->val;
        }else{
            ans = min(ans, root->val - pre);
            pre = root->val;
        }
        dfs(root->right, pre, ans);
        
    }
    int getMinimumDifference(TreeNode* root){
        // 初始化最小差值为最大值，前一个节点的值为-1；
        int ans = INT_MAX, pre = -1;
        
        // 中序遍历
        dfs(root, pre, ans);
        return ans;
    }
};
*/






/*
 //Task 85 二叉搜索树中第K小的元素
 给定一个二叉搜索树的根节点 root ，和一个整数 k ，请你设计一个算法查找其中第 k 小的元素（k 从 1 开始计数）。

  

 示例 1：


 输入：root = [3,1,4,null,2], k = 1
 输出：1
 示例 2：


 输入：root = [5,3,6,2,4,null,null,1], k = 3
 输出：3
*/


#include <stack>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int _val):val(_val),left(nullptr),right(nullptr){}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right):val(_val),left(_left),right(_right){}
};

class Solution{
public:
    int kthSmallest(TreeNode* root, int k){
        stack<TreeNode*> nodeStack;
        // 当根节点不为空时
        
        while(root != nullptr || nodeStack.size()>0){
            // 将左节点推入栈中
            while (root != nullptr) {
                nodeStack.push(root);
                root = root->left;
            }
            
            // 获取中间节点
            root = nodeStack.top();
            nodeStack.pop();
            
            // 判断k是否为第K小的元素
            k--;
            if(k == 0){
                break;
            }
            
            root=root->right;
        }
        return root->val;
    }
};

