// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV
#include <lime/graphics/opengl/ext/EXT_texture_type_2_10_10_10_REV.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9ba4fd59f8a4b9b_6_new,"lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV","new",0x9147d7a3,"lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV.new","lime/graphics/opengl/ext/EXT_texture_type_2_10_10_10_REV.hx",6,0x0a1a4a4f)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_texture_type_2_10_10_10_REV_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9ba4fd59f8a4b9b_6_new)
HXDLIN(   6)		this->UNSIGNED_INT_2_10_10_10_REV_EXT = 33640;
            	}

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__CreateEmpty() { return new EXT_texture_type_2_10_10_10_REV_obj; }

void *EXT_texture_type_2_10_10_10_REV_obj::_hx_vtable = 0;

Dynamic EXT_texture_type_2_10_10_10_REV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > _hx_result = new EXT_texture_type_2_10_10_10_REV_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_texture_type_2_10_10_10_REV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x267f4ce1;
}


EXT_texture_type_2_10_10_10_REV_obj::EXT_texture_type_2_10_10_10_REV_obj()
{
}

::hx::Val EXT_texture_type_2_10_10_10_REV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV_EXT") ) { return ::hx::Val( UNSIGNED_INT_2_10_10_10_REV_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_texture_type_2_10_10_10_REV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT_2_10_10_10_REV_EXT") ) { UNSIGNED_INT_2_10_10_10_REV_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_type_2_10_10_10_REV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("UNSIGNED_INT_2_10_10_10_REV_EXT",8c,7b,c3,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_texture_type_2_10_10_10_REV_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_texture_type_2_10_10_10_REV_obj,UNSIGNED_INT_2_10_10_10_REV_EXT),HX_("UNSIGNED_INT_2_10_10_10_REV_EXT",8c,7b,c3,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_texture_type_2_10_10_10_REV_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_texture_type_2_10_10_10_REV_obj_sMemberFields[] = {
	HX_("UNSIGNED_INT_2_10_10_10_REV_EXT",8c,7b,c3,89),
	::String(null()) };

::hx::Class EXT_texture_type_2_10_10_10_REV_obj::__mClass;

void EXT_texture_type_2_10_10_10_REV_obj::__register()
{
	EXT_texture_type_2_10_10_10_REV_obj _hx_dummy;
	EXT_texture_type_2_10_10_10_REV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV",31,ca,bc,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_texture_type_2_10_10_10_REV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_texture_type_2_10_10_10_REV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_texture_type_2_10_10_10_REV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_texture_type_2_10_10_10_REV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
