class Solution {
public:
    bool isValid(string s) {
    char* barcesStack = new char[s.size() + 1];  //����һ��ջ
	barcesStack[0] = '#';  //ջ��Ԫ��
	char* top = &barcesStack[0];
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '(':
			top++;  //ջ��ָ�������ƶ�
			*top = s[i];  //��ջ
			break;
		case '[':
			top++;  //ջ��ָ�������ƶ�
			*top = s[i];  //��ջ
			break;
		case '{':
			top++;  //ջ��ָ�������ƶ�
			*top = s[i];  //��ջ
			break;
		case ')':  //��ջ��Ԫ�ؽ���ƥ�䣬�������ƥ��ջ��Ԫ�س�ջ�����򱨴�
			if (*top == '(')
			{
				top--;  //��ջ��ջ��ָ������
				break;
			}
			else
				return false;
		case ']':  //��ջ��Ԫ�ؽ���ƥ�䣬�������ƥ��ջ��Ԫ�س�ջ�����򱨴�
			if (*top == '[')
			{
				top--;
				break;
			}
			else
				return false;
		case '}':  //��ջ��Ԫ�ؽ���ƥ�䣬�������ƥ��ջ��Ԫ�س�ջ�����򱨴�
			if (*top == '{')
			{
				top--;
				break;
			}
			else
				return false;
		default:
			//������Ŀ�����ַ���ֻ�������ţ�û�������ַ������Դ˴�������
			break;
		}
	}
	if (*top == '#')  //ջΪ��ƥ����ȷ
		return true;
	else  //ջ�л���ʣ�����ţ�ƥ��ʧ��
		return false;
    }
}
