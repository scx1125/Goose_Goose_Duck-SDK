#pragma once

/**
 * Name: Goose Goose Duck
 * Version: 1.0.0.0
 */

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * PredefinedClass BasicTypes.VirtualInvokeData
	 * Size -> 0x0000
	 */
	class VirtualInvokeData
	{
	public:
		Il2CppMethodPointer                                        MethodPtr;                                               // 0x0000(0x0000)
		const class MethodInfo*                                    Method;                                                  // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppRuntimeInterfaceOffsetPair
	 * Size -> 0x0000
	 */
	class Il2CppRuntimeInterfaceOffsetPair
	{
	public:
		class Il2CppClass*                                         InterfaceType;                                           // 0x0000(0x0000)
		int32_t                                                    offset;                                                  // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppType
	 * Size -> 0x0000
	 */
	class Il2CppType
	{
	public:
		void*                                                      Data;                                                    // 0x0000(0x0000)
		uint32_t                                                   Bits;                                                    // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppClass_1
	 * Size -> 0x0000
	 */
	class Il2CppClass_1
	{
	public:
		void*                                                      Image;                                                   // 0x0000(0x0000)
		void*                                                      GcDesc;                                                  // 0x0000(0x0000)
		const char*                                                Name;                                                    // 0x0000(0x0000)
		const char*                                                NameSpaze;                                               // 0x0000(0x0000)
		Il2CppType                                                 ByValArg;                                                // 0x0000(0x0000)
		Il2CppType                                                 ThisArg;                                                 // 0x0000(0x0000)
		Il2CppClass*                                               ElementClass;                                            // 0x0000(0x0000)
		Il2CppClass*                                               CastClass;                                               // 0x0000(0x0000)
		Il2CppClass*                                               DeclaringType;                                           // 0x0000(0x0000)
		Il2CppClass*                                               Parent;                                                  // 0x0000(0x0000)
		void*                                                      GenericClass;                                            // 0x0000(0x0000)
		void*                                                      TypeMetadataHandle;                                      // 0x0000(0x0000)
		void*                                                      InteropData;                                             // 0x0000(0x0000)
		Il2CppClass*                                               Klass;                                                   // 0x0000(0x0000)
		void*                                                      Fields;                                                  // 0x0000(0x0000)
		void*                                                      Events;                                                  // 0x0000(0x0000)
		void*                                                      Properties;                                              // 0x0000(0x0000)
		void*                                                      Methods;                                                 // 0x0000(0x0000)
		Il2CppClass**                                              NestedTypes;                                             // 0x0000(0x0000)
		Il2CppClass**                                              ImplementedInterfaces;                                   // 0x0000(0x0000)
		class Il2CppRuntimeInterfaceOffsetPair*                    InterfaceOffsets;                                        // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppClass_2
	 * Size -> 0x0000
	 */
	class Il2CppClass_2
	{
	public:
		Il2CppClass**                                              TypeHierarchy;                                           // 0x0000(0x0000)
		void*                                                      UnityUserData;                                           // 0x0000(0x0000)
		uint32_t                                                   InitializationExceptionGCHandle;                         // 0x0000(0x0000)
		uint32_t                                                   CCtorStarted;                                            // 0x0000(0x0000)
		uint32_t                                                   CCtorFinished;                                           // 0x0000(0x0000)
		size_t                                                     CCtorThread;                                             // 0x0000(0x0000)
		void*                                                      GenericContainerHandle;                                  // 0x0000(0x0000)
		uint32_t                                                   InstanceSize;                                            // 0x0000(0x0000)
		uint32_t                                                   ActualSize;                                              // 0x0000(0x0000)
		uint32_t                                                   ElementSize;                                             // 0x0000(0x0000)
		int32_t                                                    NativeSize;                                              // 0x0000(0x0000)
		uint32_t                                                   StaticFieldsSize;                                        // 0x0000(0x0000)
		uint32_t                                                   ThreadStaticFieldsSize;                                  // 0x0000(0x0000)
		int32_t                                                    ThreadStaticFieldsOffset;                                // 0x0000(0x0000)
		uint32_t                                                   Flags;                                                   // 0x0000(0x0000)
		uint32_t                                                   Token;                                                   // 0x0000(0x0000)
		uint16_t                                                   MethodCount;                                             // 0x0000(0x0000)
		uint16_t                                                   PropertyCount;                                           // 0x0000(0x0000)
		uint16_t                                                   FieldCount;                                              // 0x0000(0x0000)
		uint16_t                                                   EventCount;                                              // 0x0000(0x0000)
		uint16_t                                                   NestedTypeCount;                                         // 0x0000(0x0000)
		uint16_t                                                   VtableCount;                                             // 0x0000(0x0000)
		uint16_t                                                   InterfacesCount;                                         // 0x0000(0x0000)
		uint16_t                                                   InterfaceOffsetsCount;                                   // 0x0000(0x0000)
		uint8_t                                                    TypeHierarchyDepth;                                      // 0x0000(0x0000)
		uint8_t                                                    GenericRecursionDepth;                                   // 0x0000(0x0000)
		uint8_t                                                    Rank;                                                    // 0x0000(0x0000)
		uint8_t                                                    MinimumAlignment;                                        // 0x0000(0x0000)
		uint8_t                                                    NaturalAlignment;                                        // 0x0000(0x0000)
		uint8_t                                                    PackingSize;                                             // 0x0000(0x0000)
		uint8_t                                                    BitFlags1;                                               // 0x0000(0x0000)
		uint8_t                                                    BitFlags2;                                               // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppClass
	 * Size -> 0x0000
	 * Il2CppObject alternative
	 */
	class Il2CppClass
	{
	public:
		Il2CppClass_1                                              Class1;                                                  // 0x0000(0x0000)
		void*                                                      StaticFields;                                            // 0x0000(0x0000)
		Il2CppRgCtxData*                                           RgCtxData;                                               // 0x0000(0x0000)
		Il2CppClass_2                                              Class2;                                                  // 0x0000(0x0000)
		VirtualInvokeData                                          VTable[255];                                             // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppArrayBounds
	 * Size -> 0x0000
	 */
	class Il2CppArrayBounds
	{
	public:
		Il2CppArraySize                                            Length;                                                  // 0x0000(0x0000)
		Il2CppArrayLowerBound                                      LowerBound;                                              // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.MethodInfo
	 * Size -> 0x0000
	 */
	class MethodInfo
	{
	public:
		Il2CppMethodPointer                                        MethodPointer;                                           // 0x0000(0x0000)
		InvokerMethod_t                                            InvokerMethod;                                           // 0x0000(0x0000)
		const char*                                                Name;                                                    // 0x0000(0x0000)
		class Il2CppClass*                                         Klass;                                                   // 0x0000(0x0000)
		const Il2CppType*                                          ReturnType;                                              // 0x0000(0x0000)
		const void**                                               Parameters;                                              // 0x0000(0x0000)
		union
		{
			const Il2CppRgCtxData*                                    RgCtxData;                                               // 0x0000(0x0000)
			const void*                                               MethodMetadataHandle;                                    // 0x0000(0x0000)
		};
		union
		{
			const void*                                               GenericMethod;                                           // 0x0000(0x0000)
			const void*                                               GenericContainerHandle;                                  // 0x0000(0x0000)
		};
		uint32_t                                                   Token;                                                   // 0x0000(0x0000)
		uint16_t                                                   Flags;                                                   // 0x0000(0x0000)
		uint16_t                                                   IFlags;                                                  // 0x0000(0x0000)
		uint16_t                                                   Slot;                                                    // 0x0000(0x0000) Virtual Index
		uint8_t                                                    ParametersCount;                                         // 0x0000(0x0000)
		uint8_t                                                    BitFlags;                                                // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.Il2CppObject
	 * Size -> 0x0000
	 */
	class __declspec(align(8)) Il2CppObject
	{
	public:
		class Il2CppClass*                                         Klass;                                                   // 0x0000(0x0000)
		void*                                                      Monitor;                                                 // 0x0000(0x0000)
	};

}


