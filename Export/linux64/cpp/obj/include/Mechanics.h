#ifndef INCLUDED_Mechanics
#define INCLUDED_Mechanics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Mechanics)


class HXCPP_CLASS_ATTRIBUTES  Mechanics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mechanics_obj OBJ_;
		Mechanics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Mechanics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mechanics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Mechanics"); }

		static bool collide( ::GameObject c1,::GameObject c2);
		static Dynamic collide_dyn();

};


#endif /* INCLUDED_Mechanics */ 
