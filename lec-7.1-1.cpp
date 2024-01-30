#include<iostream>
using namespace std ;

class circle{
	public :
		virtual void subtract () = 0 ;
};

class triangle{
	public :
		virtual void subtract () = 0 ;
};

class rectangle{
	public :
		virtual void subtract () = 0 ;
};

class Shape_Circle : public circle {
	public :
		int Circle_radius;
		
		public :
			
		void subtract(){
			
			cout<<"-:CIRCLE:-"<<endl;
			cout<<"Enter the radius of the circle : ";
			cin>>Circle_radius;
			cout<<"Area of circle is : "<<3.1415*Circle_radius*Circle_radius<<endl;
			cout<<"_____________________________________________________"<<endl;
			}			
};
class Shape_Triangle : public triangle {
	public :
		int Triangle_height,Triangle_width;
		
		public :
			
		void subtract(){
				
			cout<<"-:TRIANGLE:- "<<endl;
			cout<<"Enter the height of the triangle : "; 
			cin>>Triangle_height;
			cout<<"Enter the base of the triangle : "; 
			cin>>Triangle_width;
			cout<<"Area of triangle is :"<<0.5*Triangle_width*Triangle_height<<endl;
			cout<<"_____________________________________________________"<<endl;
			}			
};
class Shape_Rectangle : public rectangle {
	public :
		int Rectangle_height,Rectangle_width;
		
		public :
			
		void subtract(){

			cout<<"-:RECTANGLE:- "<<endl;
			cout<<"Enter the height of the rectangle : "; 
			cin>>Rectangle_height;
			cout<<"Enter the width of the rectangle : "; 
			cin>>Rectangle_width;
			cout<<"Area of rectangle is :"<<Rectangle_height*Rectangle_width<<endl;
			cout<<"_____________________________________________________"<<endl;
		}
};

main(){
	
	circle *c=new Shape_Circle();
	c->subtract();
	
	triangle *t=new Shape_Triangle();
	t->subtract();
	
	rectangle *r=new Shape_Rectangle();
	r->subtract();

}