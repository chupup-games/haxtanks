#ifndef INCLUDED_Tank
#define INCLUDED_Tank

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Tank)


class HXCPP_CLASS_ATTRIBUTES  Tank_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tank_obj OBJ_;
		Tank_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tank_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tank_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tank"); }

		int id;
		Float x;
		Float y;
		Float rotation;
		int speed;
};


#endif /* INCLUDED_Tank */ 
