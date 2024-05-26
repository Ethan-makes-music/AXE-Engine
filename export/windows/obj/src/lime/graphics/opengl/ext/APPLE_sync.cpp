// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#include <lime/graphics/opengl/ext/APPLE_sync.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7969c112b28ce208_4_new,"lime.graphics.opengl.ext.APPLE_sync","new",0xc89c95d4,"lime.graphics.opengl.ext.APPLE_sync.new","lime/graphics/opengl/ext/APPLE_sync.hx",4,0x38845a3a)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_sync_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7969c112b28ce208_4_new)
HXLINE(  21)		this->TIMEOUT_IGNORED_APPLE = -1;
HXLINE(  20)		this->SYNC_FLUSH_COMMANDS_BIT_APPLE = 1;
HXLINE(  19)		this->WAIT_FAILED_APPLE = 37149;
HXLINE(  18)		this->CONDITION_SATISFIED_APPLE = 37148;
HXLINE(  17)		this->TIMEOUT_EXPIRED_APPLE = 37147;
HXLINE(  16)		this->ALREADY_SIGNALED_APPLE = 37146;
HXLINE(  15)		this->SIGNALED_APPLE = 37145;
HXLINE(  14)		this->UNSIGNALED_APPLE = 37144;
HXLINE(  13)		this->SYNC_GPU_COMMANDS_COMPLETE_APPLE = 37143;
HXLINE(  12)		this->SYNC_FENCE_APPLE = 37142;
HXLINE(  11)		this->SYNC_FLAGS_APPLE = 37141;
HXLINE(  10)		this->SYNC_STATUS_APPLE = 37140;
HXLINE(   9)		this->SYNC_CONDITION_APPLE = 37139;
HXLINE(   8)		this->OBJECT_TYPE_APPLE = 37138;
HXLINE(   7)		this->MAX_SERVER_WAIT_TIMEOUT_APPLE = 37137;
HXLINE(   6)		this->SYNC_OBJECT_APPLE = 35411;
            	}

Dynamic APPLE_sync_obj::__CreateEmpty() { return new APPLE_sync_obj; }

void *APPLE_sync_obj::_hx_vtable = 0;

Dynamic APPLE_sync_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< APPLE_sync_obj > _hx_result = new APPLE_sync_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_sync_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4865fa4e;
}


APPLE_sync_obj::APPLE_sync_obj()
{
}

::hx::Val APPLE_sync_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SIGNALED_APPLE") ) { return ::hx::Val( SIGNALED_APPLE ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS_APPLE") ) { return ::hx::Val( SYNC_FLAGS_APPLE ); }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE_APPLE") ) { return ::hx::Val( SYNC_FENCE_APPLE ); }
		if (HX_FIELD_EQ(inName,"UNSIGNALED_APPLE") ) { return ::hx::Val( UNSIGNALED_APPLE ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SYNC_OBJECT_APPLE") ) { return ::hx::Val( SYNC_OBJECT_APPLE ); }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE_APPLE") ) { return ::hx::Val( OBJECT_TYPE_APPLE ); }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS_APPLE") ) { return ::hx::Val( SYNC_STATUS_APPLE ); }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED_APPLE") ) { return ::hx::Val( WAIT_FAILED_APPLE ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION_APPLE") ) { return ::hx::Val( SYNC_CONDITION_APPLE ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED_APPLE") ) { return ::hx::Val( TIMEOUT_EXPIRED_APPLE ); }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED_APPLE") ) { return ::hx::Val( TIMEOUT_IGNORED_APPLE ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED_APPLE") ) { return ::hx::Val( ALREADY_SIGNALED_APPLE ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED_APPLE") ) { return ::hx::Val( CONDITION_SATISFIED_APPLE ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT_APPLE") ) { return ::hx::Val( MAX_SERVER_WAIT_TIMEOUT_APPLE ); }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT_APPLE") ) { return ::hx::Val( SYNC_FLUSH_COMMANDS_BIT_APPLE ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE_APPLE") ) { return ::hx::Val( SYNC_GPU_COMMANDS_COMPLETE_APPLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val APPLE_sync_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SIGNALED_APPLE") ) { SIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SYNC_FLAGS_APPLE") ) { SYNC_FLAGS_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FENCE_APPLE") ) { SYNC_FENCE_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNALED_APPLE") ) { UNSIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SYNC_OBJECT_APPLE") ) { SYNC_OBJECT_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OBJECT_TYPE_APPLE") ) { OBJECT_TYPE_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_STATUS_APPLE") ) { SYNC_STATUS_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WAIT_FAILED_APPLE") ) { WAIT_FAILED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SYNC_CONDITION_APPLE") ) { SYNC_CONDITION_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"TIMEOUT_EXPIRED_APPLE") ) { TIMEOUT_EXPIRED_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_IGNORED_APPLE") ) { TIMEOUT_IGNORED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ALREADY_SIGNALED_APPLE") ) { ALREADY_SIGNALED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CONDITION_SATISFIED_APPLE") ) { CONDITION_SATISFIED_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAX_SERVER_WAIT_TIMEOUT_APPLE") ) { MAX_SERVER_WAIT_TIMEOUT_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC_FLUSH_COMMANDS_BIT_APPLE") ) { SYNC_FLUSH_COMMANDS_BIT_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SYNC_GPU_COMMANDS_COMPLETE_APPLE") ) { SYNC_GPU_COMMANDS_COMPLETE_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_sync_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("SYNC_OBJECT_APPLE",1e,bc,93,1e));
	outFields->push(HX_("MAX_SERVER_WAIT_TIMEOUT_APPLE",b3,1b,89,8b));
	outFields->push(HX_("OBJECT_TYPE_APPLE",75,33,51,15));
	outFields->push(HX_("SYNC_CONDITION_APPLE",12,97,05,77));
	outFields->push(HX_("SYNC_STATUS_APPLE",d1,7c,b2,aa));
	outFields->push(HX_("SYNC_FLAGS_APPLE",be,8b,0e,31));
	outFields->push(HX_("SYNC_FENCE_APPLE",a8,52,51,7a));
	outFields->push(HX_("SYNC_GPU_COMMANDS_COMPLETE_APPLE",34,e9,d2,71));
	outFields->push(HX_("UNSIGNALED_APPLE",9b,28,8b,90));
	outFields->push(HX_("SIGNALED_APPLE",82,d4,e2,08));
	outFields->push(HX_("ALREADY_SIGNALED_APPLE",a9,58,ab,45));
	outFields->push(HX_("TIMEOUT_EXPIRED_APPLE",42,08,0b,cd));
	outFields->push(HX_("CONDITION_SATISFIED_APPLE",c9,b9,97,5f));
	outFields->push(HX_("WAIT_FAILED_APPLE",42,2d,3b,8f));
	outFields->push(HX_("SYNC_FLUSH_COMMANDS_BIT_APPLE",10,19,72,41));
	outFields->push(HX_("TIMEOUT_IGNORED_APPLE",6f,af,58,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo APPLE_sync_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_OBJECT_APPLE),HX_("SYNC_OBJECT_APPLE",1e,bc,93,1e)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,MAX_SERVER_WAIT_TIMEOUT_APPLE),HX_("MAX_SERVER_WAIT_TIMEOUT_APPLE",b3,1b,89,8b)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,OBJECT_TYPE_APPLE),HX_("OBJECT_TYPE_APPLE",75,33,51,15)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_CONDITION_APPLE),HX_("SYNC_CONDITION_APPLE",12,97,05,77)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_STATUS_APPLE),HX_("SYNC_STATUS_APPLE",d1,7c,b2,aa)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FLAGS_APPLE),HX_("SYNC_FLAGS_APPLE",be,8b,0e,31)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FENCE_APPLE),HX_("SYNC_FENCE_APPLE",a8,52,51,7a)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_GPU_COMMANDS_COMPLETE_APPLE),HX_("SYNC_GPU_COMMANDS_COMPLETE_APPLE",34,e9,d2,71)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,UNSIGNALED_APPLE),HX_("UNSIGNALED_APPLE",9b,28,8b,90)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SIGNALED_APPLE),HX_("SIGNALED_APPLE",82,d4,e2,08)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,ALREADY_SIGNALED_APPLE),HX_("ALREADY_SIGNALED_APPLE",a9,58,ab,45)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,TIMEOUT_EXPIRED_APPLE),HX_("TIMEOUT_EXPIRED_APPLE",42,08,0b,cd)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,CONDITION_SATISFIED_APPLE),HX_("CONDITION_SATISFIED_APPLE",c9,b9,97,5f)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,WAIT_FAILED_APPLE),HX_("WAIT_FAILED_APPLE",42,2d,3b,8f)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,SYNC_FLUSH_COMMANDS_BIT_APPLE),HX_("SYNC_FLUSH_COMMANDS_BIT_APPLE",10,19,72,41)},
	{::hx::fsInt,(int)offsetof(APPLE_sync_obj,TIMEOUT_IGNORED_APPLE),HX_("TIMEOUT_IGNORED_APPLE",6f,af,58,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *APPLE_sync_obj_sStaticStorageInfo = 0;
#endif

static ::String APPLE_sync_obj_sMemberFields[] = {
	HX_("SYNC_OBJECT_APPLE",1e,bc,93,1e),
	HX_("MAX_SERVER_WAIT_TIMEOUT_APPLE",b3,1b,89,8b),
	HX_("OBJECT_TYPE_APPLE",75,33,51,15),
	HX_("SYNC_CONDITION_APPLE",12,97,05,77),
	HX_("SYNC_STATUS_APPLE",d1,7c,b2,aa),
	HX_("SYNC_FLAGS_APPLE",be,8b,0e,31),
	HX_("SYNC_FENCE_APPLE",a8,52,51,7a),
	HX_("SYNC_GPU_COMMANDS_COMPLETE_APPLE",34,e9,d2,71),
	HX_("UNSIGNALED_APPLE",9b,28,8b,90),
	HX_("SIGNALED_APPLE",82,d4,e2,08),
	HX_("ALREADY_SIGNALED_APPLE",a9,58,ab,45),
	HX_("TIMEOUT_EXPIRED_APPLE",42,08,0b,cd),
	HX_("CONDITION_SATISFIED_APPLE",c9,b9,97,5f),
	HX_("WAIT_FAILED_APPLE",42,2d,3b,8f),
	HX_("SYNC_FLUSH_COMMANDS_BIT_APPLE",10,19,72,41),
	HX_("TIMEOUT_IGNORED_APPLE",6f,af,58,06),
	::String(null()) };

::hx::Class APPLE_sync_obj::__mClass;

void APPLE_sync_obj::__register()
{
	APPLE_sync_obj _hx_dummy;
	APPLE_sync_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.APPLE_sync",e2,5b,88,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(APPLE_sync_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< APPLE_sync_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_sync_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_sync_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
