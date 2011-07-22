/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/xhprof.h>
#include <php/classes/xhprof.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/xhprof.php line 6 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_XhprofFrame
Variant c_XhprofFrame::os_getInit(CStrRef s) {
  return c_ObjectData::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_XhprofFrame
Variant c_XhprofFrame::os_get(CStrRef s) {
  return c_ObjectData::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_XhprofFrame
Variant &c_XhprofFrame::os_lval(CStrRef s) {
  return c_ObjectData::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_XhprofFrame
Variant * c_XhprofFrame::o_realProp(CStrRef prop, int flags, CStrRef context) const {
  return o_realPropPublic(prop, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_XhprofFrame
Variant * c_XhprofFrame::o_realPropPublic(CStrRef s, int flags) const {
  return c_ObjectData::o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_XhprofFrame
Variant * c_XhprofFrame::o_realPropPrivate(CStrRef s, int flags) const {
  return o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_XhprofFrame
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_XhprofFrame
Variant c_XhprofFrame::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_XhprofFrame
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(XhprofFrame)
bool c_XhprofFrame::o_instanceof(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_INSTANCEOF(0x3D290BF933ED12FDLL, NAMSTR(s_sys_ssd44d37cf, "XhprofFrame"));
      break;
    default:
      break;
  }
  return false;
}
ObjectData *c_XhprofFrame::cloneImpl() {
  ObjectData *obj = coo_XhprofFrame();
  c_XhprofFrame::cloneSet(obj);
  return obj;
}
void c_XhprofFrame::cloneSet(ObjectData *cl) {
  c_XhprofFrame *clone = static_cast<c_XhprofFrame*>(cl);
  ObjectData::cloneSet(clone);
}
CallInfo c_XhprofFrame::ci___destruct((void*)&c_XhprofFrame::i___destruct, (void*)&c_XhprofFrame::ifa___destruct, 0, 4, 0x0000000000000000LL);
CallInfo c_XhprofFrame::ci___construct((void*)&c_XhprofFrame::i___construct, (void*)&c_XhprofFrame::ifa___construct, 1, 4, 0x0000000000000000LL);
Variant c_XhprofFrame::i___destruct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___destruct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("XhprofFrame::__destruct", 0, 1);
  return (self->t___destruct());
}
Variant c_XhprofFrame::i___construct(MethodCallPackage &mcp, CArrRef params) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::i_dummy(mcp, params, i___construct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    return (self->t___construct(arg0), null);
  }
}
Variant c_XhprofFrame::ifa___destruct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___destruct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("XhprofFrame::__destruct", 0, 1);
  return (self->t___destruct());
}
Variant c_XhprofFrame::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_XhprofFrame);
  }
  c_XhprofFrame *self ATTRIBUTE_UNUSED (static_cast<c_XhprofFrame*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
bool c_XhprofFrame::os_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s ATTRIBUTE_UNUSED (*mcp.name);
  if (hash < 0) hash = s->hash();
  switch (hash & 3) {
    case 3:
      HASH_GUARD_LITSTR(0x7F974836AACC1EF3LL, NAMSTR(s_sys_ssa5a7f4f9, "__destruct")) {
        mcp.ci = &c_XhprofFrame::ci___destruct;
        return true;
      }
      HASH_GUARD_LITSTR(0x0D31D0AC229C615FLL, NAMSTR(s_sys_ssa1b87da7, "__construct")) {
        mcp.ci = &c_XhprofFrame::ci___construct;
        return true;
      }
      break;
    default:
      break;
  }
  return c_ObjectData::os_get_call_info(mcp, hash);
}
bool c_XhprofFrame::o_get_call_info(MethodCallPackage &mcp, int64 hash) {
  mcp.obj = this;
  return os_get_call_info(mcp, hash);
}
c_XhprofFrame *c_XhprofFrame::create(CVarRef v_name) {
  CountableHelper h(this);
  init();
  t___construct(v_name);
  return this;
}
void c_XhprofFrame::dynConstruct(CArrRef params) {
  int count ATTRIBUTE_UNUSED = params.size();
  if (UNLIKELY(count != 1)) throw_wrong_arguments("XhprofFrame::__construct", count, 1, 1, 2);
  {
    ArrayData *ad(params.get());
    ssize_t pos = ad ? ad->iter_begin() : ArrayData::invalid_index;
    CVarRef arg0((ad->getValue(pos)));
    (t___construct(arg0));
  }
}
void c_XhprofFrame::getConstructor(MethodCallPackage &mcp) {
  mcp.ci = &c_XhprofFrame::ci___construct;
  mcp.obj = this;
}
struct ObjectStaticCallbacks cw_XhprofFrame = {
  c_XhprofFrame::os_getInit,
  c_XhprofFrame::os_get,
  c_XhprofFrame::os_lval,
  c_XhprofFrame::os_invoke,
  c_XhprofFrame::os_constant,
  c_XhprofFrame::os_get_call_info
};
/* SRC: classes/xhprof.php line 7 */
void c_XhprofFrame::t___construct(Variant v_name) {
  bool oldInCtor = gasInCtor(true);
  x_xhprof_frame_begin(toString(v_name));
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: classes/xhprof.php line 10 */
Variant c_XhprofFrame::t___destruct() {
  setInDtor();
  x_xhprof_frame_end();
  return null;
}
namespace hphp_impl_splitter {}
ObjectData *coo_XhprofFrame() {
  return NEWOBJ(c_XhprofFrame)();
}

// Class tables

// o_getClassPropTable

///////////////////////////////////////////////////////////////////////////////
}
