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


