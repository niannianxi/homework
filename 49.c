class Solution {
public:
    bool isValid(string s) {
    char* barcesStack = new char[s.size() + 1];  //建立一个栈
	barcesStack[0] = '#';  //栈底元素
	char* top = &barcesStack[0];
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '(':
			top++;  //栈顶指针向上移动
			*top = s[i];  //入栈
			break;
		case '[':
			top++;  //栈顶指针向上移动
			*top = s[i];  //入栈
			break;
		case '{':
			top++;  //栈顶指针向上移动
			*top = s[i];  //入栈
			break;
		case ')':  //与栈顶元素进行匹配，如果可以匹配栈顶元素出栈，否则报错
			if (*top == '(')
			{
				top--;  //出栈，栈顶指针下移
				break;
			}
			else
				return false;
		case ']':  //与栈顶元素进行匹配，如果可以匹配栈顶元素出栈，否则报错
			if (*top == '[')
			{
				top--;
				break;
			}
			else
				return false;
		case '}':  //与栈顶元素进行匹配，如果可以匹配栈顶元素出栈，否则报错
			if (*top == '{')
			{
				top--;
				break;
			}
			else
				return false;
		default:
			//由于题目给定字符串只包含括号，没有其他字符，所以此处不处理
			break;
		}
	}
	if (*top == '#')  //栈为空匹配正确
		return true;
	else  //栈中还有剩余括号，匹配失败
		return false;
    }
}
