class Point3D{
 private:
 float x,y,z; //privateattributes
 public:
	 //constuctors
	 Point3D();//fillXYZwithrandomvalues(from0to100)
	 Point3D(const float &newx,const float &newy,const float &newz);//fillXYZvalues
	 //Settersandgetters
	 voidsetXYZ(const float &newx,const float &newy,const float &newz);
	 voidsetX(const float &newx);
	 voidsetY(const float &newy);
	 voidsetZ(const float &newz);
	 floatgetX();
	 floatgetY();
	 floatgetZ();
	 //othermethods
	 voidprint(); //printsthecoordinatesofthepoint
	 float distanceTo(const Point3D &otherPoint3D);
 };