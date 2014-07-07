#ifndef INCLUDED_Bullet
#define INCLUDED_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS0(GameObject)


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::GameObject_obj{
	public:
		typedef ::GameObject_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(Float x,Float y,Float rotation,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bullet_obj > __new(Float x,Float y,Float rotation,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Bullet"); }

};


#endif /* INCLUDED_Bullet */ 
