//#define INTEGER int//#define将搜索所有INTEGER并替换为后面的int
	//即搜索前面的内容替换为后面的内容

	//#if 用于包含或排除满足给定条件的代码
//INTEGER multiple(INTEGER a, int b) {
#if 0;//如果条件为真，使用#if #endif之间的代码；为假则禁用代码
int multiple(int a, int b){
	//INTERGER result = a * b;
	int result = a * b;
	return result;
}
#endif
