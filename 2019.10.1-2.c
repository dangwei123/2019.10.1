#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。

示例:

输入: 38
输出: 2 
解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回 2。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-digits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
int addDigits(int num){
int sum=0;
while(num)
{
sum+=num%10;
num/=10;
}
if(sum>9)
{
return addDigits(sum);
}
return sum;

}

*/

/*给你一个字符串 text，你需要使用 text 中的字母来拼凑尽可能多的单词 "balloon"（气球）。

字符串 text 中的每个字母最多只能被使用一次。请你返回最多可以拼凑出多少个单词 "balloon"。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-number-of-balloons
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
int maxNumberOfBalloons(char * text)
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int x = 0;
	int y = 0;
	while (*text != '\0')
	{
		if (*text == 'b')
		{
			count1++;
		}
		if (*text == 'a')
		{
			count2++;
		}
		if (*text == 'l')
		{
			count3++;
		}
		if (*text == 'o')
		{
			count4++;
		}
		if (*text == 'n')
		{
			count5++;
		}
		text++;
	}
	x = (count1>count2 ? count2 : count1);
	x = (x>count5 ? count5 : x);
	y = (count3>count4 ? count4 : count3) / 2;
	return (x>y ? y : x);

}
int main()
{
	char str[] = "nlaebolko";
	int ret = maxNumberOfBalloons(str);
	printf("%d\n", ret);
	return 0;
}