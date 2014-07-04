#include <hxcpp.h>

#ifndef INCLUDED_Tank
#include <Tank.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Tank_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Tank","new",0x3c0cd4fc,"Tank.new","Tank.hx",12,0x0a99ddf4)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
	HX_STACK_LINE(17)
	this->rotation = (int)0;
	HX_STACK_LINE(19)
	this->speed = (int)25;
}
;
	return null();
}

//Tank_obj::~Tank_obj() { }

Dynamic Tank_obj::__CreateEmpty() { return  new Tank_obj; }
hx::ObjectPtr< Tank_obj > Tank_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(x,y);
	return result;}

Dynamic Tank_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Tank_obj::collideWorld( ::openfl::display::Sprite world){
{
		HX_STACK_FRAME("Tank","collideWorld",0x3ed2f5d8,"Tank.collideWorld","Tank.hx",23,0x0a99ddf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_LINE(25)
		if (((this->x < (int)0))){
			HX_STACK_LINE(25)
			int _g = world->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			this->x = _g;
		}
		else{
			HX_STACK_LINE(26)
			int _g1 = world->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(26)
			if (((this->x > _g1))){
				HX_STACK_LINE(26)
				this->x = (int)0;
			}
		}
		HX_STACK_LINE(28)
		if (((this->y < (int)0))){
			HX_STACK_LINE(28)
			int _g2 = world->get_stage()->get_stageHeight();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(28)
			this->y = _g2;
		}
		else{
			HX_STACK_LINE(29)
			int _g3 = world->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(29)
			if (((this->y > _g3))){
				HX_STACK_LINE(29)
				this->y = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tank_obj,collideWorld,(void))


Tank_obj::Tank_obj()
{
}

Dynamic Tank_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collideWorld") ) { return collideWorld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tank_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tank_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tank_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(Tank_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Tank_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Tank_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsInt,(int)offsetof(Tank_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("rotation"),
	HX_CSTRING("speed"),
	HX_CSTRING("collideWorld"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tank_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tank_obj::__mClass,"__mClass");
};

#endif

Class Tank_obj::__mClass;

void Tank_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tank"), hx::TCanCast< Tank_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Tank_obj::__boot()
{
}

