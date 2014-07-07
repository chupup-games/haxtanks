#include <hxcpp.h>

#ifndef INCLUDED_GameObject
#include <GameObject.h>
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

Void GameObject_obj::__construct(Float x,Float y,Float rotation,Float radius)
{
HX_STACK_FRAME("GameObject","new",0xef0f99e3,"GameObject.new","GameObject.hx",19,0xe33972ed)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(rotation,"rotation")
HX_STACK_ARG(radius,"radius")
{
	HX_STACK_LINE(21)
	this->x = x;
	HX_STACK_LINE(22)
	this->y = y;
	HX_STACK_LINE(24)
	this->rotation = rotation;
	HX_STACK_LINE(25)
	this->radius = radius;
	HX_STACK_LINE(28)
	this->resetX = this->x;
	HX_STACK_LINE(29)
	this->resetY = this->y;
	HX_STACK_LINE(30)
	this->resetR = this->rotation;
}
;
	return null();
}

//GameObject_obj::~GameObject_obj() { }

Dynamic GameObject_obj::__CreateEmpty() { return  new GameObject_obj; }
hx::ObjectPtr< GameObject_obj > GameObject_obj::__new(Float x,Float y,Float rotation,Float radius)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(x,y,rotation,radius);
	return result;}

Dynamic GameObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float GameObject_obj::getRadius( ){
	HX_STACK_FRAME("GameObject","getRadius",0xfc01a74b,"GameObject.getRadius","GameObject.hx",36,0xe33972ed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return this->radius;
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,getRadius,return )

Void GameObject_obj::collideWorld( ::openfl::display::Sprite world){
{
		HX_STACK_FRAME("GameObject","collideWorld",0xa289dc11,"GameObject.collideWorld","GameObject.hx",40,0xe33972ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(world,"world")
		HX_STACK_LINE(42)
		if (((this->x < (int)0))){
			HX_STACK_LINE(42)
			int _g = world->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			this->x = _g;
		}
		else{
			HX_STACK_LINE(43)
			int _g1 = world->get_stage()->get_stageWidth();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			if (((this->x > _g1))){
				HX_STACK_LINE(43)
				this->x = (int)0;
			}
		}
		HX_STACK_LINE(45)
		if (((this->y < (int)0))){
			HX_STACK_LINE(45)
			int _g2 = world->get_stage()->get_stageHeight();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(45)
			this->y = _g2;
		}
		else{
			HX_STACK_LINE(46)
			int _g3 = world->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(46)
			if (((this->y > _g3))){
				HX_STACK_LINE(46)
				this->y = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,collideWorld,(void))

Void GameObject_obj::reset( ){
{
		HX_STACK_FRAME("GameObject","reset",0xd32bba12,"GameObject.reset","GameObject.hx",50,0xe33972ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->x = this->resetX;
		HX_STACK_LINE(53)
		this->y = this->resetY;
		HX_STACK_LINE(54)
		this->rotation = this->resetR;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,reset,(void))


GameObject_obj::GameObject_obj()
{
}

Dynamic GameObject_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resetX") ) { return resetX; }
		if (HX_FIELD_EQ(inName,"resetY") ) { return resetY; }
		if (HX_FIELD_EQ(inName,"resetR") ) { return resetR; }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRadius") ) { return getRadius_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collideWorld") ) { return collideWorld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
	case 6:
		if (HX_FIELD_EQ(inName,"resetX") ) { resetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetY") ) { resetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetR") ) { resetR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("resetX"));
	outFields->push(HX_CSTRING("resetY"));
	outFields->push(HX_CSTRING("resetR"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GameObject_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,resetX),HX_CSTRING("resetX")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,resetY),HX_CSTRING("resetY")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,resetR),HX_CSTRING("resetR")},
	{hx::fsInt,(int)offsetof(GameObject_obj,speed),HX_CSTRING("speed")},
	{hx::fsFloat,(int)offsetof(GameObject_obj,radius),HX_CSTRING("radius")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("rotation"),
	HX_CSTRING("resetX"),
	HX_CSTRING("resetY"),
	HX_CSTRING("resetR"),
	HX_CSTRING("speed"),
	HX_CSTRING("radius"),
	HX_CSTRING("getRadius"),
	HX_CSTRING("collideWorld"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

#endif

Class GameObject_obj::__mClass;

void GameObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameObject"), hx::TCanCast< GameObject_obj> ,sStaticFields,sMemberFields,
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

void GameObject_obj::__boot()
{
}

