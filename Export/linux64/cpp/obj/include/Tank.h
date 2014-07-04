#ifndef INCLUDED_Tank
#define INCLUDED_Tank

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Tank)


class HXCPP_CLASS_ATTRIBUTES  Tank_obj : public ::GameObject_obj{
	public:
		typedef ::GameObject_obj super;
		typedef Tank_obj OBJ_;
		Tank_obj();
		Void __construct(Float x,Float y,Float rotation,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tank_obj > __new(Float x,Float y,Float rotation,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tank_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tank"); }

		virtual Void shoot( );
		Dynamic shoot_dyn();

};


#endif /* INCLUDED_Tank */ 
