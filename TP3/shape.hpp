
class Shape
{
private:
	static int global_id_;
	unsigned id_;
public:
	Shape();
	int get_id();
	/*  Classe abstraite à revoir plus en détail
	  virtual int get_area() = 0;
	  virtual void print_data() = 0;
	  */
	virtual int get_area()=0;
	virtual void print_data()=0;
};