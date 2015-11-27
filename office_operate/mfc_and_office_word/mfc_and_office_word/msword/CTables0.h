// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

//#import "C:\\Program Files\\Microsoft Office\\root\\Office16\\MSWORD.OLB" no_namespace
// CTables0 wrapper class

class CTables0 : public COleDispatchDriver
{
public:
	CTables0() {} // Calls COleDispatchDriver default constructor
	CTables0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTables0(const CTables0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Tables methods
public:
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(long Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Index);
		return result;
	}
	LPDISPATCH AddOld(LPDISPATCH Range, long NumRows, long NumColumns)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Range, NumRows, NumColumns);
		return result;
	}
	LPDISPATCH Add(LPDISPATCH Range, long NumRows, long NumColumns, VARIANT * DefaultTableBehavior, VARIANT * AutoFitBehavior)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
		InvokeHelper(0xc8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Range, NumRows, NumColumns, DefaultTableBehavior, AutoFitBehavior);
		return result;
	}
	long get_NestingLevel()
	{
		long result;
		InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}

	// Tables properties
public:

};
