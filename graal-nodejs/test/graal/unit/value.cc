/*
 * Copyright (c) 2015, Oracle and/or its affiliates. All rights reserved.
 * ORACLE PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

#define SUITE Value

// Value::IsUndefined

EXPORT_TO_JS(IsUndefinedForUndefined) {
    Local<Value> undefinedValue = Undefined(args.GetIsolate());
    args.GetReturnValue().Set(undefinedValue->IsUndefined());
}

EXPORT_TO_JS(IsUndefinedForNull) {
    Local<Value> nullValue = Null(args.GetIsolate());
    args.GetReturnValue().Set(nullValue->IsUndefined());
}

// Value::IsNull

EXPORT_TO_JS(IsNullForUndefined) {
    Local<Value> undefinedValue = Undefined(args.GetIsolate());
    args.GetReturnValue().Set(undefinedValue->IsNull());
}

EXPORT_TO_JS(IsNullForNull) {
    Local<Value> nullValue = Null(args.GetIsolate());
    args.GetReturnValue().Set(nullValue->IsNull());
}

// Value::IsTrue

EXPORT_TO_JS(IsTrueForTrue) {
    Local<Value> trueValue = True(args.GetIsolate());
    args.GetReturnValue().Set(trueValue->IsTrue());
}

EXPORT_TO_JS(IsTrueForFalse) {
    Local<Value> falseValue = False(args.GetIsolate());
    args.GetReturnValue().Set(falseValue->IsTrue());
}

// Value::IsFalse

EXPORT_TO_JS(IsFalseForTrue) {
    Local<Value> trueValue = True(args.GetIsolate());
    args.GetReturnValue().Set(trueValue->IsFalse());
}

EXPORT_TO_JS(IsFalseForFalse) {
    Local<Value> falseValue = False(args.GetIsolate());
    args.GetReturnValue().Set(falseValue->IsFalse());
}

// Value::IsObject

EXPORT_TO_JS(IsObject) {
    args.GetReturnValue().Set(args[0]->IsObject());
}

// Value::IsArray

EXPORT_TO_JS(IsArray) {
    args.GetReturnValue().Set(args[0]->IsArray());
}

// Value::IsRegExp

EXPORT_TO_JS(IsRegExp) {
    args.GetReturnValue().Set(args[0]->IsRegExp());
}

// Value::IsBoolean

EXPORT_TO_JS(IsBoolean) {
    args.GetReturnValue().Set(args[0]->IsBoolean());
}

// Value::IsNumber

EXPORT_TO_JS(IsNumber) {
    args.GetReturnValue().Set(args[0]->IsNumber());
}

// Value::IsInt32

EXPORT_TO_JS(IsInt32) {
    args.GetReturnValue().Set(args[0]->IsInt32());
}

// Value::IsUint32

EXPORT_TO_JS(IsUint32) {
    args.GetReturnValue().Set(args[0]->IsUint32());
}

// Value::IsFunction

EXPORT_TO_JS(IsFunction) {
    args.GetReturnValue().Set(args[0]->IsFunction());
}

// Value::IsMapIterator

EXPORT_TO_JS(IsMapIterator) {
    args.GetReturnValue().Set(args[0]->IsMapIterator());
}

// Value::IsPromise

EXPORT_TO_JS(IsPromise) {
    args.GetReturnValue().Set(args[0]->IsPromise());
}

// Value::IsProxy

EXPORT_TO_JS(IsProxy) {
    args.GetReturnValue().Set(args[0]->IsProxy());
}

// Value::IsSetIterator

EXPORT_TO_JS(IsSetIterator) {
    args.GetReturnValue().Set(args[0]->IsSetIterator());
}

// Value::IsDataView

EXPORT_TO_JS(IsDataView) {
    args.GetReturnValue().Set(args[0]->IsDataView());
}

// Value::IsUint8Array

EXPORT_TO_JS(IsUint8Array) {
    args.GetReturnValue().Set(args[0]->IsUint8Array());
}

// Value::IsUint8ClampedArray

EXPORT_TO_JS(IsUint8ClampedArray) {
    args.GetReturnValue().Set(args[0]->IsUint8ClampedArray());
}

// Value::IsInt8Array

EXPORT_TO_JS(IsInt8Array) {
    args.GetReturnValue().Set(args[0]->IsInt8Array());
}

// Value::IsUint16Array

EXPORT_TO_JS(IsUint16Array) {
    args.GetReturnValue().Set(args[0]->IsUint16Array());
}

// Value::IsInt16Array

EXPORT_TO_JS(IsInt16Array) {
    args.GetReturnValue().Set(args[0]->IsInt16Array());
}

// Value::IsUint32Array

EXPORT_TO_JS(IsUint32Array) {
    args.GetReturnValue().Set(args[0]->IsUint32Array());
}

// Value::IsInt32Array

EXPORT_TO_JS(IsInt32Array) {
    args.GetReturnValue().Set(args[0]->IsInt32Array());
}

// Value::IsFloat32Array

EXPORT_TO_JS(IsFloat32Array) {
    args.GetReturnValue().Set(args[0]->IsFloat32Array());
}

// Value::IsFloat64Array

EXPORT_TO_JS(IsFloat64Array) {
    args.GetReturnValue().Set(args[0]->IsFloat64Array());
}

// Value::IsExternal

EXPORT_TO_JS(IsExternal) {
    args.GetReturnValue().Set(args[0]->IsExternal());
}

// Value::IsMap

EXPORT_TO_JS(IsMap) {
    args.GetReturnValue().Set(args[0]->IsMap());
}

// Value::IsSet

EXPORT_TO_JS(IsSet) {
    args.GetReturnValue().Set(args[0]->IsSet());
}

// Value::IsString

EXPORT_TO_JS(IsString) {
    args.GetReturnValue().Set(args[0]->IsString());
}

// Value::IsSymbol

EXPORT_TO_JS(IsSymbol) {
    args.GetReturnValue().Set(args[0]->IsSymbol());
}

// Value::IsName

EXPORT_TO_JS(IsName) {
    args.GetReturnValue().Set(args[0]->IsName());
}

//more tests for Value::IsExternal in external.cc

// Value::IsNativeError

EXPORT_TO_JS(IsNativeErrorForRangeError) {
    Isolate* isolate = args.GetIsolate();
    bool result = Exception::RangeError(String::NewFromUtf8(isolate, "range error"))->IsNativeError();
    args.GetReturnValue().Set(result);
}

EXPORT_TO_JS(IsNativeErrorForReferenceError) {
    Isolate* isolate = args.GetIsolate();
    bool result = Exception::ReferenceError(String::NewFromUtf8(isolate, "reference error"))->IsNativeError();
    args.GetReturnValue().Set(result);
}

EXPORT_TO_JS(IsNativeErrorForSyntaxError) {
    Isolate* isolate = args.GetIsolate();
    bool result = Exception::SyntaxError(String::NewFromUtf8(isolate, "syntax error"))->IsNativeError();
    args.GetReturnValue().Set(result);
}

EXPORT_TO_JS(IsNativeErrorForTypeError) {
    Isolate* isolate = args.GetIsolate();
    bool result = Exception::RangeError(String::NewFromUtf8(isolate, "type error"))->IsNativeError();
    args.GetReturnValue().Set(result);
}

EXPORT_TO_JS(IsNativeErrorForError) {
    Isolate* isolate = args.GetIsolate();
    bool result = Exception::Error(String::NewFromUtf8(isolate, "error"))->IsNativeError();
    args.GetReturnValue().Set(result);
}

EXPORT_TO_JS(IsNativeError) {
    args.GetReturnValue().Set(args[0]->IsNativeError());
}

// Value::Equals

EXPORT_TO_JS(Equals) {
    args.GetReturnValue().Set(args[0]->Equals(args[1]));
}

// Value::StrictEquals

EXPORT_TO_JS(StrictEquals) {
    args.GetReturnValue().Set(args[0]->StrictEquals(args[1]));
}

// Value::*Value

EXPORT_TO_JS(IntegerValue) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(Integer::New(isolate, args[0]->IntegerValue()));
}

EXPORT_TO_JS(BooleanValue) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(Boolean::New(isolate, args[0]->BooleanValue()));
}

EXPORT_TO_JS(NumberValue) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(Number::New(isolate, args[0]->NumberValue()));
}

EXPORT_TO_JS(Int32Value) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(Int32::New(isolate, args[0]->Int32Value()));
}

EXPORT_TO_JS(Uint32Value) {
    Isolate* isolate = args.GetIsolate();
    args.GetReturnValue().Set(Uint32::NewFromUnsigned(isolate, args[0]->Uint32Value()));
}

// Value::To*

EXPORT_TO_JS(ToBoolean) {
    args.GetReturnValue().Set(args[0]->ToBoolean());
}

EXPORT_TO_JS(ToNumber) {
    args.GetReturnValue().Set(args[0]->ToNumber());
}

EXPORT_TO_JS(ToString) {
    args.GetReturnValue().Set(args[0]->ToString());
}

EXPORT_TO_JS(ToInteger) {
    args.GetReturnValue().Set(args[0]->ToInteger());
}

EXPORT_TO_JS(ToUint32) {
    args.GetReturnValue().Set(args[0]->ToUint32());
}

EXPORT_TO_JS(ToInt32) {
    args.GetReturnValue().Set(args[0]->ToInt32());
}

EXPORT_TO_JS(ToArrayIndex) {
    Local<Uint32> result = args[0]->ToArrayIndex();
    if (result.IsEmpty()) {
        args.GetReturnValue().SetUndefined();
    } else {
        args.GetReturnValue().Set(result);
    }
}

EXPORT_TO_JS(ToObject) {
    args.GetReturnValue().Set(args[0]->ToObject());
}

#undef SUITE
