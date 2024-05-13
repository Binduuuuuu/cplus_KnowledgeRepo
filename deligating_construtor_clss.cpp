class A {
private:
	int x;
	float y;
	floay z;
public:
	void A(int xArg)
	{
		this->x = xArg;
	}
	void A(int xArg, int yArg)
	{
		this->x = xArg;
		this->y = yArg;
	}
	void A(int xArg, float yArg, float zArg)
	{
		this->x = xArg;
		this->y = yArg;
		this->z = zArg;
	}

	Resolve by deligating
public:
	void A(int xArg)
	{
		this->x = xArg;
	}
	void A(int xArg, int yArg) :A{ int xArg }
	{
		this->y = yArg;
	}
	void A(int xArg, float yArg, float zArg) : A{ int xArg,int yArg }
	{
		this->z = zArg;
	}