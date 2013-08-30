
// Here, "typename" can either be "typename" or "class", depending 
//	on how specific you want the template to be.
template <typename T>
class Foo
{
public:
	Foo();
	~Foo();
	
	T bar(const T& input);
	
private:
	T m_var;
	T *m_ptr;
}


int main(int argc, char *argv[])
{
	// Type arguments go in <brackets>. Think using std::vector<>
	
	// Notice: simply declaring someFoo call's the constructor for Foo()
	Foo<int> someFoo;
	
	// These two calls are equivalent
	Foo<int> someOtherFoo = Foo();
	
	int tempInt = someFoo.bar();
	


}