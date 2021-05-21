﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int64>
struct Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t347D3779C79809CF27B13110F173902B29B53B07;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_tAA2BE9F7B57F3BA20E480FBFDAC12A6CFDB0D296;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.Resources.ResourceLocator>
struct IEnumerator_1_tF9579AAEDBCFB25ABA9316EA739986095F864E7B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tBD7EB381E8B25356EF3AED6C41B65AECA6B91A19;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t75C3361D3BE51E9742B0BBFA0F3998120E7CB6CE;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Char>
struct KeyCollection_tB6DA7BD3F3255AFC2FAD2CA9A291FBA43E5CD4B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int64>
struct KeyCollection_t6C75FA39C169AFB913CD046927B28E95AA96C54A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t16FDDD229F402DEF0A0B7629138ED4056009E52E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Resources.ResourceLocator>
struct KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Int32>
struct KeyCollection_t19748CBB6EA73F4F3CD39D92D3C0F67BDC5275E1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t1A5CA3D16BAB9F0EFB6C4D76C45A677E77CAC98F;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<System.Int32Enum>
struct UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>
struct ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>
struct ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>
struct ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Char>[]
struct EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int64>[]
struct EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>[]
struct EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>[]
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Resources.ResourceLocator[]
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026;
// TMPro.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m0E5536824B0290A8423C6D1C5D1B13E8EBBE9524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m39A04F34240D264E490AE1461D2EC2EA8C13F59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m638A5935BABD2A8C5E184CE8EAF2A7E2E5DABF82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m6B4AC01603BFBDAA2C503C016191780A0FEDBCC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m90481287360DEBE64875412B912FBDAA50AF796D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mB52BDE3FA9A9792E6E3A0C9D50EA9B336ACCE726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mC86A0CFB431DD5771163DF5832F59F8C9BBDEC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1A3372ADDF931075CF711D2D4DF47901CE8B34DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1AD7E5C4129AB980119A8BCCD22E44411F3F34FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m794B6688B95BE4D32EDE5B1BA39E5541C419FF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82DBC144E23DA502E1AE41260A21F870C94A452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m8A721EADC21A16A3E8FED8C6CC66F8F93D9597E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mD3C482CA0B8F8443AB6DC80CA2629F3E19844F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEAAF035C50899D22251ED355FAA0D6C9CD680CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0B1E1DFDC47DEE71158101DD88E6FE1D5317E6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0BD918E2104C63F093B294CF5D87CAE31A31E050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB21A458B911C5B098866D90CBA76A9FB84B16149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB26036BAF2360B8A98A7A4B2DF16D43F12C48C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCDD4739F36F2743968ED0DADFE79B8A3C7753DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCF6134C4714809D458698BCA671D4325BA54A18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mE30C8222666B4BEE98A06908C509C9217BC0EE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1843A7477532DDB72182CD6CA00784DD37C2EDEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m35A8A667DFD7F85B42F787C8FA60C0CCC08F246D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8786D82858A3E9EF25FBBD4053475D602579A853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mA097DC99699A10DE87F6C02906DC72274C4C7A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mBE67E8C2A87A3860EC8A31F089DE5D7EF799DDE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDA08F769F65339E3BF301BED933C1C1FA5D3551B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mF15EAD292B54B44FCB12F20E339CD29436C82177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m390C87E15C95AD8D542CC3B45E597757DAB146FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m3B1173FC5678457E9AEE909E45B888544BF63F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m6D8B574E1F62F8D531363246A8D60C4CB232AA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m8913600B23FF73BCF799088F6273D9AD3A611D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mA1E39B02C97948D1666D3B25DE47950BD82E7184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mC0EDC977C96519A91ABC6132171044C199E9B373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mF7D7E9A80117F6A529DB7C1BA6E489A5433B8C1E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5;
struct EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20;
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
struct EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44;
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
struct EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45;
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A;
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412;
struct EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734;
struct EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___entries_1)); }
	inline EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___keys_7)); }
	inline KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A4234C2733AA679CBD9BA87755956535D81647E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ___values_8)); }
	inline ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB6DA7BD3F3255AFC2FAD2CA9A291FBA43E5CD4B1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___entries_1)); }
	inline EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___keys_7)); }
	inline KeyCollection_tB6DA7BD3F3255AFC2FAD2CA9A291FBA43E5CD4B1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB6DA7BD3F3255AFC2FAD2CA9A291FBA43E5CD4B1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB6DA7BD3F3255AFC2FAD2CA9A291FBA43E5CD4B1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ___values_8)); }
	inline ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int64>
struct Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6C75FA39C169AFB913CD046927B28E95AA96C54A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___entries_1)); }
	inline EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___keys_7)); }
	inline KeyCollection_t6C75FA39C169AFB913CD046927B28E95AA96C54A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6C75FA39C169AFB913CD046927B28E95AA96C54A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6C75FA39C169AFB913CD046927B28E95AA96C54A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ___values_8)); }
	inline ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___entries_1)); }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___keys_7)); }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___values_8)); }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t16FDDD229F402DEF0A0B7629138ED4056009E52E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___entries_1)); }
	inline EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___keys_7)); }
	inline KeyCollection_t16FDDD229F402DEF0A0B7629138ED4056009E52E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t16FDDD229F402DEF0A0B7629138ED4056009E52E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t16FDDD229F402DEF0A0B7629138ED4056009E52E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ___values_8)); }
	inline ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___entries_1)); }
	inline EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___keys_7)); }
	inline KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___values_8)); }
	inline ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___entries_1)); }
	inline EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___keys_7)); }
	inline KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___values_8)); }
	inline ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * get_values_8() const { return ___values_8; }
	inline ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t19748CBB6EA73F4F3CD39D92D3C0F67BDC5275E1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___entries_1)); }
	inline EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___keys_7)); }
	inline KeyCollection_t19748CBB6EA73F4F3CD39D92D3C0F67BDC5275E1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t19748CBB6EA73F4F3CD39D92D3C0F67BDC5275E1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t19748CBB6EA73F4F3CD39D92D3C0F67BDC5275E1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ___values_8)); }
	inline ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A5CA3D16BAB9F0EFB6C4D76C45A677E77CAC98F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___entries_1)); }
	inline EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___keys_7)); }
	inline KeyCollection_t1A5CA3D16BAB9F0EFB6C4D76C45A677E77CAC98F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A5CA3D16BAB9F0EFB6C4D76C45A677E77CAC98F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A5CA3D16BAB9F0EFB6C4D76C45A677E77CAC98F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ___values_8)); }
	inline ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour TMPro.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator TMPro.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC, ___dictionary_0)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>
struct ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B, ___dictionary_0)); }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2, ___dictionary_0)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>
struct ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95, ___dictionary_0)); }
	inline Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10, ___dictionary_0)); }
	inline Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>
struct ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>
struct ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB, ___dictionary_0)); }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C, ___dictionary_0)); }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>
struct Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	bool ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574, ___value_3)); }
	inline bool get_value_3() const { return ___value_3; }
	inline bool* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(bool value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Char>
struct Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Il2CppChar ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39, ___value_3)); }
	inline Il2CppChar get_value_3() const { return ___value_3; }
	inline Il2CppChar* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(Il2CppChar value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>
struct Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2, ___value_3)); }
	inline int32_t get_value_3() const { return ___value_3; }
	inline int32_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int32_t value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int64>
struct Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int64_t ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E, ___value_3)); }
	inline int64_t get_value_3() const { return ___value_3; }
	inline int64_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int64_t value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>
struct Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>
struct Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int64_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A, ___key_2)); }
	inline int64_t get_key_2() const { return ___key_2; }
	inline int64_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int64_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>
struct Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___value_3)); }
	inline int32_t get_value_3() const { return ___value_3; }
	inline int32_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int32_t value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>
struct Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>
struct Entry_t208639F3F4F37C945E22645BD356EDD28167B721 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t208639F3F4F37C945E22645BD356EDD28167B721, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t208639F3F4F37C945E22645BD356EDD28167B721, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t208639F3F4F37C945E22645BD356EDD28167B721, ___key_2)); }
	inline uint32_t get_key_2() const { return ___key_2; }
	inline uint32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(uint32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t208639F3F4F37C945E22645BD356EDD28167B721, ___value_3)); }
	inline int32_t get_value_3() const { return ___value_3; }
	inline int32_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int32_t value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>
struct Entry_t03A87BF6367938D67497088665C733ED14E14AC9 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t03A87BF6367938D67497088665C733ED14E14AC9, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t03A87BF6367938D67497088665C733ED14E14AC9, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t03A87BF6367938D67497088665C733ED14E14AC9, ___key_2)); }
	inline uint32_t get_key_2() const { return ___key_2; }
	inline uint32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(uint32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t03A87BF6367938D67497088665C733ED14E14AC9, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Boolean>
struct Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	bool ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8, ___dictionary_0)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8, ___currentValue_3)); }
	inline bool get_currentValue_3() const { return ___currentValue_3; }
	inline bool* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(bool value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Char>
struct Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Il2CppChar ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA, ___dictionary_0)); }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA, ___currentValue_3)); }
	inline Il2CppChar get_currentValue_3() const { return ___currentValue_3; }
	inline Il2CppChar* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Il2CppChar value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
struct Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	int32_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23, ___dictionary_0)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23, ___currentValue_3)); }
	inline int32_t get_currentValue_3() const { return ___currentValue_3; }
	inline int32_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(int32_t value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int64>
struct Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	int64_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F, ___dictionary_0)); }
	inline Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F, ___currentValue_3)); }
	inline int64_t get_currentValue_3() const { return ___currentValue_3; }
	inline int64_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(int64_t value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
struct Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2, ___dictionary_0)); }
	inline Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	int32_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___currentValue_3)); }
	inline int32_t get_currentValue_3() const { return ___currentValue_3; }
	inline int32_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(int32_t value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Int32>
struct Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	int32_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D, ___dictionary_0)); }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D, ___currentValue_3)); }
	inline int32_t get_currentValue_3() const { return ___currentValue_3; }
	inline int32_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(int32_t value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>
struct Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___dictionary_0)); }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493, ___Delegate_0)); }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D, ___Delegate_0)); }
	inline UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9, ___Delegate_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32Enum>
struct InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0, ___Delegate_0)); }
	inline UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF, ___Delegate_0)); }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690, ___Delegate_0)); }
	inline UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF, ___Delegate_0)); }
	inline UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90, ___Delegate_0)); }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>
struct InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B, ___Delegate_0)); }
	inline UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870, ___Delegate_0)); }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD, ___Delegate_0)); }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 
{
public:
	// TMPro.FloatTween/FloatTweenCallback TMPro.FloatTween::m_Target
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	// System.Single TMPro.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single TMPro.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single TMPro.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean TMPro.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Target_0)); }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_pinvoke
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_com
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Target_0)); }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_pinvoke
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_com
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T TMPro.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  ___tweenInfo_2;
	// System.Single TMPro.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___tweenInfo_2)); }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___tweenInfo_2)); }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>
struct Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___value_3)); }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  get_value_3() const { return ___value_3; }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_3))->____value_0), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>
struct Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___currentValue_3)); }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  get_currentValue_3() const { return ___currentValue_3; }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->____value_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Target_0)); }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_StartColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TargetColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_pinvoke
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_com
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___tweenInfo_2)); }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32Enum>
struct UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574  m_Items[1];

public:
	inline Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Char>[]
struct EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39  m_Items[1];

public:
	inline Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t451329272BBC6DD557728CC31D180CDB00BCFB39  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2  m_Items[1];

public:
	inline Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2  value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int64>[]
struct EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E  m_Items[1];

public:
	inline Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  m_Items[1];

public:
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Object>[]
struct EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A  m_Items[1];

public:
	inline Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  m_Items[1];

public:
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  m_Items[1];

public:
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
// System.Resources.ResourceLocator[]
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  m_Items[1];

public:
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>[]
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  m_Items[1];

public:
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_0), (void*)NULL);
		#endif
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Int32>[]
struct EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t208639F3F4F37C945E22645BD356EDD28167B721  m_Items[1];

public:
	inline Entry_t208639F3F4F37C945E22645BD356EDD28167B721  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t208639F3F4F37C945E22645BD356EDD28167B721 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t208639F3F4F37C945E22645BD356EDD28167B721  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t208639F3F4F37C945E22645BD356EDD28167B721  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t208639F3F4F37C945E22645BD356EDD28167B721 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t208639F3F4F37C945E22645BD356EDD28167B721  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,System.Object>[]
struct EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t03A87BF6367938D67497088665C733ED14E14AC9  m_Items[1];

public:
	inline Entry_t03A87BF6367938D67497088665C733ED14E14AC9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t03A87BF6367938D67497088665C733ED14E14AC9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t03A87BF6367938D67497088665C733ED14E14AC9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t03A87BF6367938D67497088665C733ED14E14AC9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t03A87BF6367938D67497088665C733ED14E14AC9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t03A87BF6367938D67497088665C733ED14E14AC9  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52_gshared (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 * __this, Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33_gshared (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA * __this, Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156_gshared (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 * __this, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1_gshared (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F * __this, Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E_gshared (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 * __this, Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475_gshared (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7_gshared (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770_gshared (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D * __this, Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4_gshared (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void TMPro.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_mC9D96B33108145F670145DE57210C0D3D24EC172 (FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m5F8B59F75D4CE627BC5F6E34A1345D41941FDCC6 (ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_mF21AE3A616B020B1D351E237D1F3145B508ACB11 (FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52 (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 * __this, Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 *, Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, const RuntimeMethod*))Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52_gshared)(__this, ___dictionary0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33 (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA * __this, Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA *, Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *, const RuntimeMethod*))Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156 (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 * __this, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 *, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1 (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F * __this, Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F *, Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *, const RuntimeMethod*))Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F *, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 * __this, Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 *, Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *, const RuntimeMethod*))Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475 (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 *, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 *, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7 (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 *, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770 (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D * __this, Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D *, Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *, const RuntimeMethod*))Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4 (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 * __this, Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 *, Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *, const RuntimeMethod*))Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4_gshared)(__this, ___dictionary0, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator TMPro.TweenRunner`1<TMPro.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m5F358174FB1ADD089196C4A06A45365FB178CAD9_gshared (FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E * L_0 = (U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E * L_1 = (U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E *)L_0;
		FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return (RuntimeObject*)L_1;
	}
}
// System.Void TMPro.TweenRunner`1<TMPro.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mADBAC9BC0FA65B13BA017656B76C0C114B73587B_gshared (TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void TMPro.TweenRunner`1<TMPro.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m5122B35809FA66ABAA40020C9781B136DA94D0F3_gshared (TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA * __this, FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA *)__this);
		((  void (*) (TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		FloatTween_TweenValue_mC9D96B33108145F670145DE57210C0D3D24EC172((FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 *)(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  L_5 = ___info0;
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TMPro.TweenRunner`1<TMPro.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m35960EE909E5DEA90C61CB58DB44A744C8B71C7C_gshared (TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_1 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TMPro.TweenRunner`1<TMPro.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m49B0A8CFB386E0A98F8943BA47591C6D8138976F_gshared (TweenRunner_1_tE75A3C5885B8A7400F08DD90FD4AE5768176A7DA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m25B8F14E0904DD545969F1C7F9DA8E8910CF6653_gshared (ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388 * L_0 = (U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388 * L_1 = (U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388 *)L_0;
		ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return (RuntimeObject*)L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m37947E11CE7805113E3B020DABF236702307B4DA_gshared (TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m644BE60640B50CE2B6BFF8979DAA7710B0487B82_gshared (TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * __this, ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 *)__this);
		((  void (*) (TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		ColorTween_TweenValue_m5F8B59F75D4CE627BC5F6E34A1345D41941FDCC6((ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 *)(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  L_5 = ___info0;
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_mF65C63AA3C8FD8762A7B8D89ED75269BD58659AC_gshared (TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_1 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBF1550542F6C3B60A2B17D073075F0502BD2E5AD_gshared (TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m888375722375887F4EAA7B28502CB37595BEA876_gshared (FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12 * L_0 = (U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12 * L_1 = (U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12 *)L_0;
		FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return (RuntimeObject*)L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mDBA4ABFF50732BDC4F3B367DD80840325CD893E2_gshared (TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m09DC67B7A264102E3C1B318979F603F9E5B1C05B_gshared (TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * __this, FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D *)__this);
		((  void (*) (TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_2 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		FloatTween_TweenValue_mF21AE3A616B020B1D351E237D1F3145B508ACB11((FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 *)(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  L_5 = ___info0;
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_7 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_mE31B4433E3CB227FF85C4E05730EB271D541B8A4_gshared (TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_1 = (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m926D76D1F26971585F424277168031854039B194_gshared (TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m0251CCA621F83D757C11A2CC5026DDA24A088866_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mADA530A569FA02CEE365550C0B1364847F902DAC_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5529C0F3FFF9E3B541FD5C0239931C2575237973_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mEC0F63D2F925ADACDD0D09B87C83E28BF13DDD5F_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m769BC6D74C17069B97AA096698E2A1072F478C20_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m6E8C5B9F56F1C10C6DF482F1DC1E3CFFBC5FF5F5_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m7320ACEFEBD2FA7D50C947BE9CEC62DAE429A329_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m733035EDF9C22D4D048D98FE8ACEFB31C27FF0EB_gshared (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32Enum>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m74DBA8433434A2BD595BF11212F0DF26D6F6DF3E_gshared (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32Enum>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mDC9B183A81287E65A2FD249F920BB63D36ED75A3_gshared (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * __this, int32_t ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m485418FD970A5024B6BAC1E687F981364B1A7B35_gshared (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m7C92F18128CD7BC314EECF7D6FBE3F0D99B87597_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mF6CE051EB914150BEB88244003A263509CD42FDE_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mA4ADF56200888B2A297C5913DA00A89F11BD87C5_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m16F774E0F869579B89A02E33198957BF2B362763_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mCC90A51C5C963477EEE746E3D3856AEBE78FB78A_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m936D976DB36E14668A40522AADE9283923079869_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF26A01600BF18A3051372F4AA91E74AD1F557A12_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m8C06062E095F203A1291F3CAB67A40EB89DF3712_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF0799ACC3D5BF95C48D11D03FFEDE24F53C00475_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m02ED2BCB3DB958F9E000563E77EC2BCA9E5659C4_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m61A3E25D9705ECD97BB9634081BFE1F51A11BB72_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4915ABA44B9B53926A3A694CDF011EF8C7345CD6_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m5AA1F690449F2F9671E0B94633F97A1FAD7E3ED1_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m490BFF59EA4C5D89B467DFF2EBB8294B4D2B625D_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mBE8D06B5C36F3C91DE37A9D965AEB4B499832596_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m66976206F24D939E2132FAB88213AB25CBC0AEED_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_m651D5F00C6EE2A9CA6062F24B5D035E3AC420B15_gshared (UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m187DC25F0CA9BE27006704A22A602F8B58956D8C_gshared (UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m92BA91531F4F7AE3599CCF0BB6A49B34BC9352D5_gshared (UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_mFDB050A103FC2F2DAEA4B25D4E8FA74ACBA64EFD_gshared (UnityAction_3_t8F495B8B0B41EBBD05F7C0A266F5164D7FA777E6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m6F58BD0703FA3C41CC7D6F3230771D8B1DF6CEC4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m88F46BFD94198E51067773C687AF1EA4E56BA6C9_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m61C295D3CAE75DAA73F736514C0F8305F21BF4D4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m77B1860A1697D777A50B461899187B1F788FED67_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m33FE7C261E18C40BF698970133F4C4AAE221453C_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m340C3A0B9B1D3D5617E73EFF0AECC0D26BA2434B_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mD613D87947DBD4EAA4AFAB2EAA52C64E61B53393_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m4737379F2E23EA022A5577626A9B77BC652C6C81_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m85C211C6A8878EB2C829C518B2E2825592A6BAD2_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_mB08C5D84E6AF7F4ED076E863ABC8924F3683531F_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___action0;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_1 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)((InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_6 = V_2;
		bool L_7 = ___arg00;
		NullCheck((InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_6);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_6, (bool)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		bool L_21 = ___arg00;
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m142F8EC4F0B95BE4817D1B8BAB5311BF82761B7B_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3324210C9047391B2DBB94831C131C6111A43128_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m87D815FEE9AA0E17B7B827751412B54C5BB32B60_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m5835ECDAF9B756B926230F6D6C9E10F55C02E581_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_2 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m8A50FC09BAF3824EA8CE8A51E5EE425D06B1CA60_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___action0;
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_1 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2C3D89FA16884071FFCCB2A7CE61A84C80F170F5_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)((InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_6 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___arg00;
		NullCheck((InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1) */, (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_6, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ___arg00;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m9F6A762AD5938FB4E433C68A6CAE0E064358B79E_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m042F0FF8A168ACCAC76DFF33398FF72BE89A13D4_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___action0;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_1 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE8363C790213266D22FCF15CD7888B6877B69CE1_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4B2DEFA282AA624C8AB341A9C0057C1AFF76768A_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32Enum>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mD224BED27BA52E7AC6F73C03A4993BC4BD3CCA8A_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32Enum>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_mDD2D26D8227EA2995329733330EC8E793208DA67_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 * L_2 = (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32Enum>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_mFA0F9A61E964D7C7AEC8BF38C9ABD2E1838ACE0A_gshared (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD * L_0 = ___action0;
		InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 * L_1 = (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *, UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t8E314CE9A49CA6AB7DD04ED83B96940EEB001BDD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m737D4B17859A00D896B4A8D187B5EF444DCFD559_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)((InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32Enum>::Invoke(T1) */, (InvokableCall_1_t2C92319644AD32CDD1B7383DB623896E8F911FE0 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = (int32_t)L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m7B52283F3C9BA5BFFADCEA8C22119BD2DEF4FD39_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m38113512C8395BCA851A99D1A947C8C56FF66C45_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___action0;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_1 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_22 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_26 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m0622108A7CD81D5EF2A59382C769DC733EF3530F_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m67C17B30C677E6D59E0477957BC1B3645C39EE0C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_2 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m40926337FC4AF792D319B9B4879DB2A5A8F723BC_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___action0;
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_1 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)((InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_6 = V_2;
		float L_7 = ___arg00;
		NullCheck((InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_6);
		VirtActionInvoker1< float >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1) */, (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_6, (float)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		float L_21 = ___arg00;
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m69EA39B3DD1F41AAE09CE783C7D03AF61BA91E6B_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4D54629C431821D2153C7E23584EDD379051B9DE_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m8C7040459D38C21B6CA252658570FF207DFD5634_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m1443B62E96235B67C0275343AE1E00E5F456E82F_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_2 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m46723BEB228E805D70546FE0076C2F7B923334BE_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___action0;
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_1 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)((InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_6 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___arg00;
		NullCheck((InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_6);
		VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_6, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = ___arg00;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_2_GetDelegate_m8F25D40B052080876D1C4762AA6E7E6703D0249E_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 * L_2 = (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m6FBC41AB3A4D2642700248D95261F0CFC35E5421_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mC8C97894717FFC1EE749269DDBB81729A64BDE45_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12;
		L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_mA32D41ADFDE40D2DDB758CE26A84EC3A2A0F67B2_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B * L_2 = (InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mED047EE19D201ADBA872D17FEB7D8F769938C834_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_00bc;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)((InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		int32_t L_8 = ___arg11;
		int32_t L_9 = ___arg22;
		NullCheck((InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)L_6);
		((  void (*) (InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_tA4FF3AEE82D9ED5DBACD6A797FE2FB294781CC6B *)L_6, (RuntimeObject *)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00b7;
	}

IL_0034:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_10);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_12;
		L_12 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_10, (int32_t)L_11, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_12, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_15 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_15);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_15, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0058:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_16);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_18;
		L_18 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_16, (int32_t)L_17, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_18;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_3(L_21);
	}

IL_007d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_23 = ___arg00;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_25 = ___arg11;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_29 = ___arg22;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_32 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_32);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_32, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_33);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_35 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_36 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_36, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_35) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_8;
		if (L_38)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12;
		L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_m4D1CD01F37200B3D0525A100BCE71287EA769653_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m26C8551C3DFE1944095EB400B91BC4E678824510_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_00bc;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)((InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		RuntimeObject * L_8 = ___arg11;
		RuntimeObject * L_9 = ___arg22;
		NullCheck((InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)L_6);
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)L_6, (RuntimeObject *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00b7;
	}

IL_0034:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_10);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_12;
		L_12 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_10, (int32_t)L_11, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_12, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_15 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_15);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_15, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0058:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_16);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_18;
		L_18 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_16, (int32_t)L_17, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_18;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_3(L_21);
	}

IL_007d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_23 = ___arg00;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_25 = ___arg11;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_27 = ___arg22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_27);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_28 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_28);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_28, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_29);
	}

IL_00b6:
	{
	}

IL_00b7:
	{
		int32_t L_30 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_31 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_32 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_32, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_31) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_8;
		if (L_34)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_mAD32A45894B24DF8063BA635592B37EAEAB2C63A_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15;
		L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_4_GetDelegate_mCC9B16CF07EAAA26AE65B3BB31CFFC22031EE4A0_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD * L_2 = (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m8913600B23FF73BCF799088F6273D9AD3A611D34_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m8913600B23FF73BCF799088F6273D9AD3A611D34_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  ValueCollection_GetEnumerator_m3AF1BEBD3FE59AF39ABBE35320997A0F670D3F12_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52((&L_1), (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m90481287360DEBE64875412B912FBDAA50AF796D_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m90481287360DEBE64875412B912FBDAA50AF796D_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m90481287360DEBE64875412B912FBDAA50AF796D_RuntimeMethod_var)));
	}

IL_002e:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_11 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m90481287360DEBE64875412B912FBDAA50AF796D_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_14 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_16 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_17 = (EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		bool L_26 = (bool)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (bool)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m8F3CA354CDEF92DBBF8EF13B3E5A5B33D9D696A7_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m28C34861DBEF2EE25B7C3EE8805FF09413F38D4C_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEAAF035C50899D22251ED355FAA0D6C9CD680CD5_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEAAF035C50899D22251ED355FAA0D6C9CD680CD5_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1843A7477532DDB72182CD6CA00784DD37C2EDEE_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1843A7477532DDB72182CD6CA00784DD37C2EDEE_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB21A458B911C5B098866D90CBA76A9FB84B16149_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB21A458B911C5B098866D90CBA76A9FB84B16149_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_mAD53FA171AAB058CF4CAE001699D96F0F0294927_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		bool L_1 = ___item0;
		NullCheck((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0FC44B07080525934E2C793469065B7092AEEB64_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52((&L_1), (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  L_2 = (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m93EEA5EEC5A3E9F6F6BE67609AE3CD251BBB7891_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_0 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mE286CB7723F9376AE32B2A720F0EBEBB53837B52((&L_1), (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8  L_2 = (Enumerator_tE364715984977A2834C9CF8842C2AD71085075A8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_gshared (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_19 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC *)__this);
		((  void (*) (ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC *, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tAC9371FC72C759652E224BBBE13669CD7F4FC7EC *)__this, (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_29 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * L_31 = (Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_32 = (EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t7732497AB9D637A1BADCC6C2B28E6F66569559D5* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			bool L_41 = (bool)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			bool L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m2F4D71DD403D473FA3990F25CCAEE21BA25711AB_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m3B1173FC5678457E9AEE909E45B888544BF63F39_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m3B1173FC5678457E9AEE909E45B888544BF63F39_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  ValueCollection_GetEnumerator_m59CF100AE10A2EED9FBC92EFD0CBB9E37F0BA07C_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33((&L_1), (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m638A5935BABD2A8C5E184CE8EAF2A7E2E5DABF82_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* V_1 = NULL;
	int32_t V_2 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m638A5935BABD2A8C5E184CE8EAF2A7E2E5DABF82_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m638A5935BABD2A8C5E184CE8EAF2A7E2E5DABF82_RuntimeMethod_var)));
	}

IL_002e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_11 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m638A5935BABD2A8C5E184CE8EAF2A7E2E5DABF82_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_14 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_16 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_17 = (EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Il2CppChar L_26 = (Il2CppChar)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m963851DD20720F46B0EE4261D37C1F053087D62B_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m59FF34D71E8EEAC0F1F323D430D8781E7D183B36_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1AD7E5C4129AB980119A8BCCD22E44411F3F34FC_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1AD7E5C4129AB980119A8BCCD22E44411F3F34FC_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mBE67E8C2A87A3860EC8A31F089DE5D7EF799DDE9_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mBE67E8C2A87A3860EC8A31F089DE5D7EF799DDE9_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB26036BAF2360B8A98A7A4B2DF16D43F12C48C79_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mB26036BAF2360B8A98A7A4B2DF16D43F12C48C79_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m3AB51794291938C7949C0420121B602FA3D24E0D_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		Il2CppChar L_1 = ___item0;
		NullCheck((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7F3ED3F1FFB0BCCF05D02627F39C72991F3CC67B_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33((&L_1), (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  L_2 = (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mE9EFA5788987A908B4F1FFFF3EE1122356380320_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_0 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m688BDB3301350B13FECBEB226015A335BFE70E33((&L_1), (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA  L_2 = (Enumerator_t1BC50C19E6A2CA319C01C7B0341BAEB30817C9CA )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Char>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_gshared (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_19 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B *)__this);
		((  void (*) (ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tDEA922C20FE7390F1063807C7F0EAE8B2C022A7B *)__this, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_29 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * L_31 = (Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_32 = (EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tB85F10076BA2A751C87B4BDE98DF0468F760AD20* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			Il2CppChar L_41 = (Il2CppChar)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			Il2CppChar L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m8C4FD1069EA30C37EE55E08DE143EB2A4891A80E_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6D8B574E1F62F8D531363246A8D60C4CB232AA4E_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m6D8B574E1F62F8D531363246A8D60C4CB232AA4E_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  ValueCollection_GetEnumerator_mBD2CE5FF0C0786A287CC76A834574197ADCEEDDB_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156((&L_1), (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m6B4AC01603BFBDAA2C503C016191780A0FEDBCC6_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6B4AC01603BFBDAA2C503C016191780A0FEDBCC6_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6B4AC01603BFBDAA2C503C016191780A0FEDBCC6_RuntimeMethod_var)));
	}

IL_002e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_11 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6B4AC01603BFBDAA2C503C016191780A0FEDBCC6_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_14 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_16 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_17 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m9C27376ACE75A30397407255AF08499C5C2DC68A_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mD307B9473900B453EE99A2CA17E3F973BF845EA6_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1A3372ADDF931075CF711D2D4DF47901CE8B34DA_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1A3372ADDF931075CF711D2D4DF47901CE8B34DA_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m35A8A667DFD7F85B42F787C8FA60C0CCC08F246D_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m35A8A667DFD7F85B42F787C8FA60C0CCC08F246D_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0BD918E2104C63F093B294CF5D87CAE31A31E050_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0BD918E2104C63F093B294CF5D87CAE31A31E050_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m106FF012A1057B9EDC2B47C8A72D21CA1D067A07_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		int32_t L_1 = ___item0;
		NullCheck((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m38147E76F89D456576C522EAE560A750B8066B0A_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156((&L_1), (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  L_2 = (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1A08C83B9120A11C93ED1F0C455058874D6015D2_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m9175EF416D2D8DBE705B9399735A2B976D46C156((&L_1), (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23  L_2 = (Enumerator_t14F019BE91B99D807B381372BC77449E905F0B23 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_gshared (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_19 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 *)__this);
		((  void (*) (ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 *)__this, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_29 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_31 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_32 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			int32_t L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9E9EBEEB9063094DA84A072F4BBB929B3B293AAD_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF7D7E9A80117F6A529DB7C1BA6E489A5433B8C1E_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mF7D7E9A80117F6A529DB7C1BA6E489A5433B8C1E_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  ValueCollection_GetEnumerator_m37D9C34E10BA4EE8A4471C54A4FD1BA378C837C9_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1((&L_1), (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m0E5536824B0290A8423C6D1C5D1B13E8EBBE9524_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m0E5536824B0290A8423C6D1C5D1B13E8EBBE9524_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m0E5536824B0290A8423C6D1C5D1B13E8EBBE9524_RuntimeMethod_var)));
	}

IL_002e:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_11 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m0E5536824B0290A8423C6D1C5D1B13E8EBBE9524_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_14 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_16 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_17 = (EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int64_t L_26 = (int64_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int64_t)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m046B0AF45AB60507AB3F2BB20EFB6DE07E85809C_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m71A59AC1924EA16FAB7A8CD043AF0243A1CA02CE_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82DBC144E23DA502E1AE41260A21F870C94A452D_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, int64_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82DBC144E23DA502E1AE41260A21F870C94A452D_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mF15EAD292B54B44FCB12F20E339CD29436C82177_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, int64_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mF15EAD292B54B44FCB12F20E339CD29436C82177_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCDD4739F36F2743968ED0DADFE79B8A3C7753DF0_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCDD4739F36F2743968ED0DADFE79B8A3C7753DF0_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m78D69AD41D7512AA92DE26014365764ADF7D67D5_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, int64_t ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		int64_t L_1 = ___item0;
		NullCheck((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m504E7169A979177519B5E6B7B87C2CAF0B7352DB_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1((&L_1), (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  L_2 = (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mD53017F0DCABBFD46923BC5C287304C2978D35FF_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_0 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m615E2DC318A84EF68EC120CF3EC1BD562E7A79B1((&L_1), (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F  L_2 = (Enumerator_t5B40201DFAEFBA5BE3FEEF31E632FAC0B3E9FC2F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_gshared (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_19 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 *)__this);
		((  void (*) (ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 *, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tDD2C80682AF4CF18883668E136B1980110C79D95 *)__this, (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_29 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 * L_31 = (Dictionary_2_t9AE0BA863BA88FABCBFC4CA835E0A6E00D948984 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_32 = (EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tB210152E9D3EBE4609E3432D20C529E7C1B65D44* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			int64_t L_41 = (int64_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			int64_t L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m9F68EEDB89D78224B0586808F4F3A0F5A8633D79_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_11 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_14 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_16 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_17 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m0F6276D7AD48BD293B9E4274685242F3E26C8D8A_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mA97CFD92664C189ECE8A6DB8658912E2E59C4674_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m56D50B8FE493854B8D0714ACD11F40E27AE0DE18_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9E614F4CFD02D00F2CAB9A856F284F38D1EF8AD8_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_2 = (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDDFD2317A55E70B3DB696012AFF982C7DF237866_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_2 = (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_19 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *)__this);
		((  void (*) (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_29 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_31 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_32 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m390C87E15C95AD8D542CC3B45E597757DAB146FF_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m390C87E15C95AD8D542CC3B45E597757DAB146FF_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  ValueCollection_GetEnumerator_m3AA8241F2E2C7CF69D30EBEB67FD5DCEC9584C08_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E((&L_1), (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mB52BDE3FA9A9792E6E3A0C9D50EA9B336ACCE726_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mB52BDE3FA9A9792E6E3A0C9D50EA9B336ACCE726_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mB52BDE3FA9A9792E6E3A0C9D50EA9B336ACCE726_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_11 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mB52BDE3FA9A9792E6E3A0C9D50EA9B336ACCE726_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_14 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_16 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_17 = (EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mAD943C02127872764A264B2C35B0D3DAFF8AD3F9_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m587CC758921C2146B56F4E0CAA1008951E091826_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mD3C482CA0B8F8443AB6DC80CA2629F3E19844F1C_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mD3C482CA0B8F8443AB6DC80CA2629F3E19844F1C_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8786D82858A3E9EF25FBBD4053475D602579A853_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8786D82858A3E9EF25FBBD4053475D602579A853_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mE30C8222666B4BEE98A06908C509C9217BC0EE7B_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mE30C8222666B4BEE98A06908C509C9217BC0EE7B_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_mEAF4AFAA6C366BB7271F362FD62067C88720CB9B_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mC2DB9D871E7494947692FF5701D69171543B57A4_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E((&L_1), (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  L_2 = (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9FF656AFB35C2899B577688CF5715500DB5C4006_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_0 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mBFE66B9C413A3C3AF059E708AE48FE1FA757D90E((&L_1), (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2  L_2 = (Enumerator_tBF4B510D987FC9A6078D1010A51D9AC9F5611BC2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_gshared (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_19 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 *)__this);
		((  void (*) (ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tE16ED6DFB218FE1E5E8729436D481A5AD1D82C10 *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_29 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * L_31 = (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_32 = (EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t09DFC45FB52797A74E5223B0C57834458C443E45* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m953A21A77AE4AFFB58CFD01FC1E44929A0CB5950_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  ValueCollection_GetEnumerator_mE049A745DF2689CBA71F592F6FA146A4759D4176_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_002e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_11 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_14 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_16 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_17 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m985BCA61A2A06A9168547247414618602BB457DC_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mD4867B2A2D8D73F3E6BD84BAA8CC3A42002090DE_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m5AE2691CA73C84474D879E6C0F8D98A623F05A42_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		int32_t L_1 = ___item0;
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m267B7F7412F5016D2F014656FFB50EBE8786E24D_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_2 = (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDEB78FB8CE3E70488BEA295553ACFE002E9AD324_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_2 = (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_19 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *)__this);
		((  void (*) (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *)__this, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_29 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_31 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_32 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			int32_t L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_11 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_14 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_16 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_17 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mF19B1FB9B0DD226A0E7C38405ACB31C13FEC28AD_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m65D5625DA1C2FEAA9BD4DD90CA367F21C7A7C288_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m61660CBF2AB0BFAFA98B73C17978FE9BFA9C5E9F_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mCC42FF1A9647D2CA97817F67BD44AFFE5394AF21_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_2 = (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m883729DAC8F3537A33DE83D42778BD27F46839B7_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_2 = (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_19 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *)__this);
		((  void (*) (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_29 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_31 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_32 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  ValueCollection_GetEnumerator_m133ACECF2F504CF00C8DC7C1694E904FC002A47A_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_002e:
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_11 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_14 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_16 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_17 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_26 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mDA6619EBB6B0BD3D75007074361B37FA352CD73F_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m55312B4F6D366B2C1E5C53559D445CE688B5EA29_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m91F2E8C8141F53C4F789D6105EA3ED521822F4B0_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_1 = ___item0;
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15D97F02928D7DDA88D4B9678E3E213E6A5DA8F6_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_2 = (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m0B27E44A14428F86D9560A50C86D3BFCA448F04C_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_2 = (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_19 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)((ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *)__this);
		((  void (*) (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *, ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *)__this, (ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_29 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_31 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_32 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_41 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_42 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mA1E39B02C97948D1666D3B25DE47950BD82E7184_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mA1E39B02C97948D1666D3B25DE47950BD82E7184_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  ValueCollection_GetEnumerator_m7A6C73A9555F72FBD9AB7F7736E79C67303E0076_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770((&L_1), (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mC86A0CFB431DD5771163DF5832F59F8C9BBDEC1D_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC86A0CFB431DD5771163DF5832F59F8C9BBDEC1D_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC86A0CFB431DD5771163DF5832F59F8C9BBDEC1D_RuntimeMethod_var)));
	}

IL_002e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_11 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC86A0CFB431DD5771163DF5832F59F8C9BBDEC1D_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_14 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_16 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_17 = (EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m1DCEC654015F0265D69E670750A703CB8E1EA437_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9B25BB171C8933991D79A79CD33B3F67354BF5C9_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m794B6688B95BE4D32EDE5B1BA39E5541C419FF6F_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m794B6688B95BE4D32EDE5B1BA39E5541C419FF6F_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDA08F769F65339E3BF301BED933C1C1FA5D3551B_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDA08F769F65339E3BF301BED933C1C1FA5D3551B_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0B1E1DFDC47DEE71158101DD88E6FE1D5317E6B5_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m0B1E1DFDC47DEE71158101DD88E6FE1D5317E6B5_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m791FE1C222F774608DEA572CFFBF03B87335ABEA_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		int32_t L_1 = ___item0;
		NullCheck((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m79D26F34AD3FA20FF6C4807584852B5929491566_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770((&L_1), (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  L_2 = (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m8AFE60834716CF58F0ED25884807009C1C4663AD_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_0 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m62F84F2B08591904DA0D589121DF423CD547E770((&L_1), (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D  L_2 = (Enumerator_t397F910A24E1A03A1942D92BB3C89BED167FE81D )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_gshared (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_19 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB *)__this);
		((  void (*) (ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t5021005DA85ABB38062E53F64AC0587152FDBBDB *)__this, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_29 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * L_31 = (Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_32 = (EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tC50D8F28F6587BCDF43C9B72744CAD4892BE7734* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			int32_t L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m7972CAF88F2BBC38D95D58B8CDD7B0333F6F53BA_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC0EDC977C96519A91ABC6132171044C199E9B373_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mC0EDC977C96519A91ABC6132171044C199E9B373_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  ValueCollection_GetEnumerator_m168EB3C4C3CF96DB50361487D34E2B7C3C5DD710_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4((&L_1), (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m39A04F34240D264E490AE1461D2EC2EA8C13F59B_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m39A04F34240D264E490AE1461D2EC2EA8C13F59B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m39A04F34240D264E490AE1461D2EC2EA8C13F59B_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_11 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m39A04F34240D264E490AE1461D2EC2EA8C13F59B_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_14 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_16 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_17 = (EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m16B159F0B81AE5DA1E9C836A74B3CC4BFC8DFAB9_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mDF46955024EF7E6C8D6A7B6EEECF55B984A0DA74_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m8A721EADC21A16A3E8FED8C6CC66F8F93D9597E9_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m8A721EADC21A16A3E8FED8C6CC66F8F93D9597E9_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mA097DC99699A10DE87F6C02906DC72274C4C7A21_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mA097DC99699A10DE87F6C02906DC72274C4C7A21_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCF6134C4714809D458698BCA671D4325BA54A18A_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mCF6134C4714809D458698BCA671D4325BA54A18A_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m776947C686D32B02AC5D7D905F649FEEE06BFA9D_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mDAA32FAC5862947A55C30AAE082448F107D526F0_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4((&L_1), (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  L_2 = (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m3C03AE09873FB11F132AA08255235A43D88BE6AF_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_0 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA49758F5B6B4369AC85E618F7A25CBA727544CB4((&L_1), (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92  L_2 = (Enumerator_t9EEAF651D88531DF7DE715FD861390FCCAF99A92 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_gshared (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_19 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C *)__this);
		((  void (*) (ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t8324CFCE2467C0D2309B723020650799D278951C *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_29 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * L_31 = (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_32 = (EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t7EA822197054D9F86EFEC5F43775E887A9AC6AD0* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m3CD1D91F7927F73F40FB05E4E1D4CEA1C6BEFA57_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
