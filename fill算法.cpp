#include <iostream>
#include<vector>
#include<algorithm>//定义copy算法
#include<iterator>
using namespace std;
int main()
{
	vector<int>num = { 1,3,5,7,9 };
	cout << "num:";
	copy(num.begin(), num.end(),ostream_iterator<int>(cout,""));//copy复制迭代器参数指定的元素
	//ostream_iterator用于输出由一个空格分隔开的一些整数
	cout << endl;
	fill(num.begin(), num.end(), 9);//把原来num中的每个元素都设置为字符'9'
	cout << "new num:";
	copy(num.begin(), num.end(), ostream_iterator<int>(cout, ""));
	cout << endl;
	return 0;
}
