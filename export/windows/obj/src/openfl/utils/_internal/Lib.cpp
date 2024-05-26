// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1f7e7a5476eb205a_23_notImplemented,"openfl.utils._internal.Lib","notImplemented",0xc17948a5,"openfl.utils._internal.Lib.notImplemented","openfl/utils/_internal/Lib.hx",23,0xb4b581c9)
HX_LOCAL_STACK_FRAME(_hx_pos_1f7e7a5476eb205a_15_boot,"openfl.utils._internal.Lib","boot",0x896cd2e8,"openfl.utils._internal.Lib.boot","openfl/utils/_internal/Lib.hx",15,0xb4b581c9)
HX_LOCAL_STACK_FRAME(_hx_pos_1f7e7a5476eb205a_19_boot,"openfl.utils._internal.Lib","boot",0x896cd2e8,"openfl.utils._internal.Lib.boot","openfl/utils/_internal/Lib.hx",19,0xb4b581c9)
namespace openfl{
namespace utils{
namespace _internal{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x594c902a;
}

 ::openfl::display::Application Lib_obj::application;

 ::openfl::display::MovieClip Lib_obj::current;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_1f7e7a5476eb205a_23_notImplemented)
HXLINE(  24)		::String api = ( (::String)(((posInfo->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic) + HX_(".",2e,00,00,00)) + posInfo->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic))) );
HXLINE(  26)		if (!(::openfl::utils::_internal::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE(  28)			::openfl::utils::_internal::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE(  30)			::lime::utils::Log_obj::warn( ::Dynamic((posInfo->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic) + HX_(" is not implemented",1f,12,d2,b9))),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = ( current ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { outValue = ( application ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast<  ::openfl::display::MovieClip >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=ioValue.Cast<  ::openfl::display::Application >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Application */ ,(void *) &Lib_obj::application,HX_("application",50,ab,3e,2a)},
	{::hx::fsObject /*  ::openfl::display::MovieClip */ ,(void *) &Lib_obj::current,HX_("current",39,9c,e3,cb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lib_obj::_hx___sentWarnings,HX_("__sentWarnings",2f,1b,27,19)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::application,"application");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#endif

::hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_("application",50,ab,3e,2a),
	HX_("current",39,9c,e3,cb),
	HX_("__sentWarnings",2f,1b,27,19),
	HX_("notImplemented",6f,3a,1a,27),
	::String(null())
};

void Lib_obj::__register()
{
	Lib_obj _hx_dummy;
	Lib_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.Lib",78,8d,31,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1f7e7a5476eb205a_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("notImplemented",6f,3a,1a,27), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:NullableParameter",d7,e1,bf,6e))))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1f7e7a5476eb205a_19_boot)
HXDLIN(  19)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
