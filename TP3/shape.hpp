
class Shape
{
private:
	static int global_id_;
	unsigned id_;
public:
	Shape();
	int get_id();
	/*  Classe abstraite � revoir plus en d�tail
	  virtual int get_area() = 0;
	  virtual void print_data() = 0;
	  */
	virtual int get_area()=0;
	virtual void print_data()=0;
};