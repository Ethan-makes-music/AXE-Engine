// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400
#include <lime/graphics/opengl/ext/AMD_program_binary_Z400.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67064d08ae812aee_6_new,"lime.graphics.opengl.ext.AMD_program_binary_Z400","new",0x8e433f46,"lime.graphics.opengl.ext.AMD_program_binary_Z400.new","lime/graphics/opengl/ext/AMD_program_binary_Z400.hx",6,0x1635f60c)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void AMD_program_binary_Z400_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_67064d08ae812aee_6_new)
HXDLIN(   6)		this->Z400_BINARY_AMD = 34624;
            	}

Dynamic AMD_program_binary_Z400_obj::__CreateEmpty() { return new AMD_program_binary_Z400_obj; }

void *AMD_program_binary_Z400_obj::_hx_vtable = 0;

Dynamic AMD_program_binary_Z400_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMD_program_binary_Z400_obj > _hx_result = new AMD_program_binary_Z400_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMD_program_binary_Z400_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1233b268;
}


AMD_program_binary_Z400_obj::AMD_program_binary_Z400_obj()
{
}

::hx::Val AMD_program_binary_Z400_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"Z400_BINARY_AMD") ) { return ::hx::Val( Z400_BINARY_AMD ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMD_program_binary_Z400_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"Z400_BINARY_AMD") ) { Z400_BINARY_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_program_binary_Z400_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Z400_BINARY_AMD",9f,d3,76,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMD_program_binary_Z400_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AMD_program_binary_Z400_obj,Z400_BINARY_AMD),HX_("Z400_BINARY_AMD",9f,d3,76,23)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMD_program_binary_Z400_obj_sStaticStorageInfo = 0;
#endif

static ::String AMD_program_binary_Z400_obj_sMemberFields[] = {
	HX_("Z400_BINARY_AMD",9f,d3,76,23),
	::String(null()) };

::hx::Class AMD_program_binary_Z400_obj::__mClass;

void AMD_program_binary_Z400_obj::__register()
{
	AMD_program_binary_Z400_obj _hx_dummy;
	AMD_program_binary_Z400_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.AMD_program_binary_Z400",54,e4,9c,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMD_program_binary_Z400_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMD_program_binary_Z400_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMD_program_binary_Z400_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMD_program_binary_Z400_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
