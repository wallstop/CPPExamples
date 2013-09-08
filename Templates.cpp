// Here, "typename" can either be "typename" or "class", depending 
//	on how specific you want the template to be.
//	
// The "T" here is completely arbitrary. For general "generic" classes,
// "T" is a perfectly fine name. More specific names help readability,
// such as:
//	template <typename numericType>
// or:
//	template <typename containerType>
// These names would be used inside the function for type specifity.
//	containerType bar(const containerType& input);
template <typename T>
class Foo
{
public:
	Foo(){}
	~Foo(){}
	
	T bar(const T& input)
	{
		input = m_var;
		return m_var;
	}
	
private:
	T m_var;
	T *m_ptr;
}


int main(int argc, char *argv[])
{
	// Type arguments go in <brackets>. Think using std::vector<>
	
	// Notice: simply declaring someFoo calls the constructor for Foo()
	Foo<int> someFoo;
	
	// These two calls are equivalent
	Foo<int> someOtherFoo = Foo();
	
	int tempInt = someFoo.bar();
	


}
