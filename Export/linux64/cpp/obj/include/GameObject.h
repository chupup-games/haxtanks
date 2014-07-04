#ifndef INCLUDED_GameObject
#define INCLUDED_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  GameObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();
		Void __construct(Float x,Float y,Float rotation,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameObject_obj > __new(Float x,Float y,Float rotation,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameObject"); }

		int id;
		Float x;
		Float y;
		Float rotation;
		int speed;
		Float radius;
		virtual Float getRadius( );
		Dynamic getRadius_dyn();

		virtual Void collideWorld( ::openfl::display::Sprite world);
		Dynamic collideWorld_dyn();

};


#endif /* INCLUDED_GameObject */ 
