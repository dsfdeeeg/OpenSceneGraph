// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Image>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/test/CopyOp>
#include <osgFX/AnisotropicLighting>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgFX::AnisotropicLighting)
	I_BaseType(osgFX::Effect);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgFX::AnisotropicLighting &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, className);
	I_Method0(const char *, libraryName);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method0(const char *, effectName);
	I_Method0(const char *, effectDescription);
	I_Method0(const char *, effectAuthor);
	I_Method0(osg::Image *, getLightingMap);
	I_Method0(const osg::Image *, getLightingMap);
	I_Method1(void, setLightingMap, IN, osg::Image *, image);
	I_Method0(int, getLightNumber);
	I_Method1(void, setLightNumber, IN, int, n);
	I_Property(int, LightNumber);
	I_Property(osg::Image *, LightingMap);
END_REFLECTOR

