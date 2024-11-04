class Point2D{
private:
	float x, y; //privateattributes
public:
	//constuctors
	Point2D();//fillXYZwithrandomvalues(from0to100)
	Point2D(const float &newx, const float &newy);//fillXYZvalues
	//Settersandgetters
	void setXYZ(const float &newx, const float &newy);
	void setX(const float &newx);
	void setY(const float &newy);

	float getX();
	float getY();

	//othermethods
	void print(); //printsthecoordinatesofthepoint
	float distanceTo(const Point2D & otherPoint2D);
};