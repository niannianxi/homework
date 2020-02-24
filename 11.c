//编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
int hammingWeight(uint32_t n) {
	short count=0;
	while(n!=0)
	{
		if(n%2==1)
		count++;
		n=n/2;
	}
    return count;
}
