#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Tank)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		::openfl::display::Tilesheet tilesheet;
		Array< Float > tankList;
		::Tank t1;
		::Tank t2;
		int resetT1X;
		int resetT1Y;
		Float resetT1R;
		int resetT2X;
		int resetT2Y;
		Float resetT2R;
		bool upKey;
		bool downKey;
		bool leftKey;
		bool rightKey;
		bool w_Key;
		bool s_Key;
		bool a_Key;
		bool d_Key;
		bool reset_Key;
		int previousTime;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void update( ::openfl::events::Event event);
		Dynamic update_dyn();

		virtual Void keyDownHandler( ::openfl::events::KeyboardEvent event);
		Dynamic keyDownHandler_dyn();

		virtual Void keyUpHandler( ::openfl::events::KeyboardEvent event);
		Dynamic keyUpHandler_dyn();

		virtual Void moveTank( );
		Dynamic moveTank_dyn();

		virtual Void resetTank( );
		Dynamic resetTank_dyn();

		virtual Void render( );
		Dynamic render_dyn();

};


#endif /* INCLUDED_Main */ 
