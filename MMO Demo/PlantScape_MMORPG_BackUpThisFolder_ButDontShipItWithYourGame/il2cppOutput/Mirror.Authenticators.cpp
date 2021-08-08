#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// Mirror.Authenticators.BasicAuthenticator
struct BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE;
// Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9
struct U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796;
// Mirror.Authenticators.TimeoutAuthenticator
struct TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C;
// Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9
struct U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F;
// Mirror.InterestManagement
struct InterestManagement_tBBE575A899DE49E8ABA2601D8251035970EC7DBF;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D;
// Mirror.NetworkBehaviour
struct NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83;
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E;
// Mirror.NetworkConnection
struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD;
// Mirror.NetworkIdentity
struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D;
// Mirror.NetworkReader
struct NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25;
// Mirror.NetworkVisibility
struct NetworkVisibility_tBBA494FA6735929A3998FC205790E82E03E906E5;
// Mirror.NetworkWriter
struct NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D;
// Mirror.Unbatcher
struct Unbatcher_tCBF2B2937231C19DAC75D73925FF34337CF554EC;
// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D;
// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867;
// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931;
// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A;
// System.Action`2<Mirror.NetworkWriter,Mirror.EntityStateMessage>
struct Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>
struct Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>
struct Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct Action_2_tDE724019003497875B1E8F63658DB7652C26F34B;
// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4;
// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F;
// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>
struct Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB;
// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F;
// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD;
// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct Action_2_t306D18212C9B62F1499CD039EF84E3296880F321;
// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB;
// System.Action`2<Mirror.NetworkWriter,System.Byte[]>
struct Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C;
// System.Action`2<Mirror.NetworkWriter,System.Char>
struct Action_2_t40925B0EE1207A395998710348464524F4248F45;
// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36;
// System.Action`2<Mirror.NetworkWriter,System.Double>
struct Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41;
// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511;
// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C;
// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D;
// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5;
// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0;
// System.Action`2<Mirror.NetworkWriter,System.Single>
struct Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6;
// System.Action`2<Mirror.NetworkWriter,System.String>
struct Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D;
// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49;
// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct Action_2_t0A3328221E03EB69862A26598F6466242D9824AF;
// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B;
// System.Action`2<Mirror.NetworkWriter,System.Uri>
struct Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>
struct Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>
struct Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B;
// System.Action`2<System.Object,Mirror.AddPlayerMessage>
struct Action_2_t189818EA99699C42D0196A24536EE1F8520322AF;
// System.Action`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_tF4F86EFFCDCC66299B5543A6A722427423918E76;
// System.Action`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_t474E007DA746CC4DB397A087EFA3C05A7CB9F22A;
// System.Action`2<System.Object,Mirror.CommandMessage>
struct Action_2_tE8D9416B255855E4AC9FE56AC3E69957B9C4CCA5;
// System.Action`2<System.Object,Mirror.EntityStateMessage>
struct Action_2_tE714749BAFA9DDEEED17C39973E93D01132E0D8D;
// System.Action`2<System.Object,Mirror.NetworkPingMessage>
struct Action_2_t10E12F5D3B468E64358E7C7E75787D4008F906B3;
// System.Action`2<System.Object,Mirror.NetworkPongMessage>
struct Action_2_t94C4DFFB2CC3D5B126DFFB8FCC31AD000E185206;
// System.Action`2<System.Object,Mirror.NotReadyMessage>
struct Action_2_tE9AC936C32A8CDE8B110729EE4EC9D787E4E8FD7;
// System.Action`2<System.Object,Mirror.ObjectDestroyMessage>
struct Action_2_tDF0FF16640A553185BCFED43E92F904F63A284C7;
// System.Action`2<System.Object,Mirror.ObjectHideMessage>
struct Action_2_tE5ED6AFB38EB208516228C39B8DBE2CF029A6F7E;
// System.Action`2<System.Object,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t5113D80256B10F3F5A8315868D98BA5D81FD79DB;
// System.Action`2<System.Object,Mirror.ObjectSpawnStartedMessage>
struct Action_2_t0CD1E6251382C984E63F432FAF513295BDE2DE43;
// System.Action`2<System.Object,Mirror.ReadyMessage>
struct Action_2_t03E8CF3A70627D762CBEA55F42A6DB315A4F217A;
// System.Action`2<System.Object,Mirror.RpcMessage>
struct Action_2_t55FF81AE4EC9D1892E4B4F02DF7C226AE7E32380;
// System.Action`2<System.Object,Mirror.SceneMessage>
struct Action_2_t6ED5997E22394DE7E9AC707D80217C0B4C85CBE0;
// System.Action`2<System.Object,Mirror.SpawnMessage>
struct Action_2_t4325B69B1F01AE3D1372F1FB1C507BCBB08025DB;
// System.Action`2<System.Object,System.ArraySegment`1<System.Byte>>
struct Action_2_t06879D4BD9F0F2C9272DF4E8F1156BFE637E2E00;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t429E4750D84EBAC7EB494EB565EE0C8E1177C576;
// System.Action`2<System.Object,System.Byte>
struct Action_2_t05F0205EE790E2F22E5E2F7AE765EE5ADCEE78B9;
// System.Action`2<System.Object,System.ByteEnum>
struct Action_2_tE79F2C8392E61A4C069D172902FC74DE25814FA8;
// System.Action`2<System.Object,System.Char>
struct Action_2_t6343A470CAE0F9565593BE7629500BD401005B05;
// System.Action`2<System.Object,System.Decimal>
struct Action_2_t05CE1570964528F8EB81521F87E9912301B29A0C;
// System.Action`2<System.Object,System.Double>
struct Action_2_t592A6E9209F5BDDB2DD3455E9762B2C941AFF7C5;
// System.Action`2<System.Object,System.Guid>
struct Action_2_t51C1ED5572057FD29BF6CFD0CE83435670F82F95;
// System.Action`2<System.Object,System.Int16>
struct Action_2_tD0051F9DF92B9FECA64CA287A9A7925694BD763D;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t88A472856F183AE803521FC39DAC3AE446810479;
// System.Action`2<System.Object,System.Int64>
struct Action_2_t41072607CA683E5CBA8201B5F0B81B7442A50AA0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<System.Object,System.SByte>
struct Action_2_tA18047183F92984171A34936E67C06600FC004B4;
// System.Action`2<System.Object,System.Single>
struct Action_2_tF730F282D8C62A330ACE30E2B210DAF8CECB4A04;
// System.Action`2<System.Object,System.UInt16>
struct Action_2_tC11B4486EB4AA58093B8ED7718604D672420179B;
// System.Action`2<System.Object,System.UInt32>
struct Action_2_t53108CC5A687E8B14821F06EE710306F23ED71BE;
// System.Action`2<System.Object,System.UInt64>
struct Action_2_t87A32F527B551C38E1744F73F62F0167862B74F9;
// System.Action`2<System.Object,UnityEngine.Color32>
struct Action_2_t83C8FD51565BF1191DE3889480E7068377E3B15D;
// System.Action`2<System.Object,UnityEngine.Color>
struct Action_2_t910AE5A0783DD1F7D9592A8514368283179D22EC;
// System.Action`2<System.Object,UnityEngine.Matrix4x4>
struct Action_2_tCBBA4406306838C79AF84ADDFF63F62912E081EB;
// System.Action`2<System.Object,UnityEngine.Plane>
struct Action_2_t9F0CCE18D705B7792538DC7A16AE4656D6D76DC6;
// System.Action`2<System.Object,UnityEngine.Quaternion>
struct Action_2_t7F47A55704A5770239068D5DE78E46EE70DE5F4E;
// System.Action`2<System.Object,UnityEngine.Ray>
struct Action_2_t734F2B7A4A56565A6817475FDFFA478E2DC7B4C4;
// System.Action`2<System.Object,UnityEngine.Rect>
struct Action_2_t229FFA51168DEE74F7BD255D75D8C08051D2E336;
// System.Action`2<System.Object,UnityEngine.Vector2>
struct Action_2_t59C9E68A867D468F50C36E1D4D34A1EA4EC18D30;
// System.Action`2<System.Object,UnityEngine.Vector2Int>
struct Action_2_t37422F42F09D61FECACAE02AE84712B005E3F851;
// System.Action`2<System.Object,UnityEngine.Vector3>
struct Action_2_tF3B8F15DE1E6E2A949F669A672050C44E92C2140;
// System.Action`2<System.Object,UnityEngine.Vector3Int>
struct Action_2_tB0F9EC6D4318CA63A01DDB9F16ECE841B8BE9DE9;
// System.Action`2<System.Object,UnityEngine.Vector4>
struct Action_2_t2F5AF4A5A234D3C8CB4DD4B3E4C1B330D4D44BA6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.SpawnHandlerDelegate>
struct Dictionary_2_t7D0A2757EC1F68310A04665689B6CF9C7A5F2571;
// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.UnSpawnDelegate>
struct Dictionary_2_t3EFB1077128C9388F981BB217D8A7EDE4CB73B84;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>
struct Dictionary_2_t7FB24FD20970C09FA28EFD52B28887380B6EF210;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher>
struct Dictionary_2_t3070FC8914A7466BAF333A02B7F8826D936E5AEC;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection>
struct Dictionary_2_tB1DFFB0099DFD718B9150DB936D216DA3E4D7EDF;
// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate>
struct Dictionary_2_t99909EEA343A8A1D6DA0B5B239D06536D8E000E5;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_t87D371CBCAE4927881E558E63DBB1DF1ED9C4D36;
// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity>
struct Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE;
// System.Collections.Generic.List`1<Mirror.SyncObject>
struct List_1_t6FC6097DFAA0B7DB09B56CD2A00B8CA58502FF21;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>
struct Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88;
// System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Func_2_t1728381655CAD983688CD059AA1704C0BE018793;
// System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162;
// System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>
struct Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B;
// System.Func`2<Mirror.NetworkReader,Mirror.EntityStateMessage>
struct Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>
struct Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>
struct Func_2_t597BD424264436C8850D43108B60117716AD99CE;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>
struct Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>
struct Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F;
// System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>
struct Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>
struct Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>
struct Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>
struct Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>
struct Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68;
// System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>
struct Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F;
// System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>
struct Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B;
// System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>
struct Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37;
// System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>
struct Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC;
// System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>
struct Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD;
// System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>
struct Func_2_tF450654C730338273C90867D294A49409661B91A;
// System.Func`2<Mirror.NetworkReader,System.Boolean>
struct Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234;
// System.Func`2<Mirror.NetworkReader,System.Byte>
struct Func_2_t698A81C87DAD21453BE12E465FEB469EED017279;
// System.Func`2<Mirror.NetworkReader,System.Byte[]>
struct Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815;
// System.Func`2<Mirror.NetworkReader,System.Char>
struct Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961;
// System.Func`2<Mirror.NetworkReader,System.Decimal>
struct Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308;
// System.Func`2<Mirror.NetworkReader,System.Double>
struct Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD;
// System.Func`2<Mirror.NetworkReader,System.Guid>
struct Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D;
// System.Func`2<Mirror.NetworkReader,System.Int16>
struct Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46;
// System.Func`2<Mirror.NetworkReader,System.Int32>
struct Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC;
// System.Func`2<Mirror.NetworkReader,System.Int64>
struct Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6;
// System.Func`2<Mirror.NetworkReader,System.SByte>
struct Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC;
// System.Func`2<Mirror.NetworkReader,System.Single>
struct Func_2_t9A360B6748840F99170B6123237D1853036F7404;
// System.Func`2<Mirror.NetworkReader,System.String>
struct Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58;
// System.Func`2<Mirror.NetworkReader,System.UInt16>
struct Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180;
// System.Func`2<Mirror.NetworkReader,System.UInt32>
struct Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8;
// System.Func`2<Mirror.NetworkReader,System.UInt64>
struct Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F;
// System.Func`2<Mirror.NetworkReader,System.Uri>
struct Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>
struct Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Color>
struct Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127;
// System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>
struct Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>
struct Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>
struct Func_2_t610BD76229872BDC0AADC016BA65D8293073C520;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>
struct Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>
struct Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>
struct Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>
struct Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>
struct Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>
struct Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>
struct Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>
struct Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>
struct Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68;
// System.Func`2<System.Object,Mirror.AddPlayerMessage>
struct Func_2_t450953B544F1631EF08EC0FF2FDBC52329A5F992;
// System.Func`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Func_2_t5FB70F77E686B4D63187B74FB80E4028C9D813C1;
// System.Func`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Func_2_tD6F3A1A3BDABFADBFB4E6B906917943221A21844;
// System.Func`2<System.Object,Mirror.CommandMessage>
struct Func_2_tDBE3F6734719B9FD0DF7B587C1CBFC75D78CEAA7;
// System.Func`2<System.Object,Mirror.EntityStateMessage>
struct Func_2_tD19035E991F5A356CBDB03DEBDC461DEC104C501;
// System.Func`2<System.Object,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Func_2_tC5704393745D2D9B2D18203DCDDDF2EA234F5409;
// System.Func`2<System.Object,Mirror.NetworkPingMessage>
struct Func_2_t4226989F223BB263366037E1BD0A856E164594CD;
// System.Func`2<System.Object,Mirror.NetworkPongMessage>
struct Func_2_t60266A44E4BE85FCE00E008E65BD86400CE95C91;
// System.Func`2<System.Object,Mirror.NotReadyMessage>
struct Func_2_tAB7701C2C9CCB4A787FCC8A398D5A7C7AD3D663C;
// System.Func`2<System.Object,Mirror.ObjectDestroyMessage>
struct Func_2_tADA7E8016C231453460B295C292441C9ACC3F064;
// System.Func`2<System.Object,Mirror.ObjectHideMessage>
struct Func_2_tB9186CD2245675BD2BEDBFE4B3B6C9BF3A78454A;
// System.Func`2<System.Object,Mirror.ObjectSpawnFinishedMessage>
struct Func_2_tC8F35122FC914A2F063452AEDBEDF5E2C0A45D2B;
// System.Func`2<System.Object,Mirror.ObjectSpawnStartedMessage>
struct Func_2_t840B4FDCB298B59F5AFEDB56061837ABDD25C860;
// System.Func`2<System.Object,Mirror.ReadyMessage>
struct Func_2_tB85EE7631619F0345AF7E9B42AC91D2F17E22B3C;
// System.Func`2<System.Object,Mirror.RpcMessage>
struct Func_2_t24801AA16BB5288ADB96FB3FF9E04C42F474537F;
// System.Func`2<System.Object,Mirror.SceneMessage>
struct Func_2_tA7FEA01A3E247F686DA0AD5B1DBB18E0E2B88B03;
// System.Func`2<System.Object,Mirror.SpawnMessage>
struct Func_2_t1266E11C672AAB9212F74207BBD48606DAC9E384;
// System.Func`2<System.Object,System.ArraySegment`1<System.Byte>>
struct Func_2_tB16ADD39DE5859118BFAF071A3BB6B39F0A070C8;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.Byte>
struct Func_2_t69EA513D48AB15B9AF41D19647E00FCDD56CEF58;
// System.Func`2<System.Object,System.ByteEnum>
struct Func_2_t62073200495E12F1288EF3446E1BC24D423D7CC7;
// System.Func`2<System.Object,System.Char>
struct Func_2_t35A82FD662231855ADBAD55597E202E12D19C71B;
// System.Func`2<System.Object,System.Decimal>
struct Func_2_t299520B8082D54DE1C0F8105446C89BDC2AAB5A6;
// System.Func`2<System.Object,System.Double>
struct Func_2_tBF6AC9AFBCEB2E4108A595A6FC86DF1C45D76201;
// System.Func`2<System.Object,System.Guid>
struct Func_2_t7A522573DBFFDD917ACFCEA449593C7747B78B41;
// System.Func`2<System.Object,System.Int16>
struct Func_2_t2D44E871FE744671BB2DA5DFDE2AFA249336A068;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.Int64>
struct Func_2_t82B378444729B3A0021330940E7867B6D348F383;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,System.SByte>
struct Func_2_t6D422476C050307A851901BC024E38D2FF5B357D;
// System.Func`2<System.Object,System.Single>
struct Func_2_t589A4145FEA383C8A0740F08D3B674F8A50FD666;
// System.Func`2<System.Object,System.UInt16>
struct Func_2_t1653BA8AEA4494A58AFAA4986F3E679B81D98AD4;
// System.Func`2<System.Object,System.UInt32>
struct Func_2_tE499B0DC827151EE1184263C0158F0659D83F51A;
// System.Func`2<System.Object,System.UInt64>
struct Func_2_t7BA70DBF573F9E47309559529537D32BFE386C63;
// System.Func`2<System.Object,UnityEngine.Color32>
struct Func_2_tCCFFE9DC17C436D23E68DBDCC4C947E73C11A27E;
// System.Func`2<System.Object,UnityEngine.Color>
struct Func_2_t3A9D40790D3BE3F8A0A22A2D474337EE6D08EF35;
// System.Func`2<System.Object,UnityEngine.Matrix4x4>
struct Func_2_tB2535BAC6531F67692279C1202B85178D8681DD0;
// System.Func`2<System.Object,UnityEngine.Plane>
struct Func_2_t2450F0DFC89F3D428580601217C6325CC61165A0;
// System.Func`2<System.Object,UnityEngine.Quaternion>
struct Func_2_tF87E519BB75F4904AB71546F9573E34A704B04BC;
// System.Func`2<System.Object,UnityEngine.Ray>
struct Func_2_tBDA38672EF01D58B30E800711AC87F8F584EED0B;
// System.Func`2<System.Object,UnityEngine.Rect>
struct Func_2_tA3F7228E2FBA453391B2AA250D31FBEC90A64F5C;
// System.Func`2<System.Object,UnityEngine.Vector2>
struct Func_2_t984BD41FEBA1BE0CF7831F79B0ACD53E4EC1BE51;
// System.Func`2<System.Object,UnityEngine.Vector2Int>
struct Func_2_t65800DC8E0FCEC0F1CD26BB339EC491738BE5694;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342;
// System.Func`2<System.Object,UnityEngine.Vector3Int>
struct Func_2_t4E3EBA601DF70158AEC31C75868B2CC5E16F56D2;
// System.Func`2<System.Object,UnityEngine.Vector4>
struct Func_2_t57D5F55852D17203B700DFEA64E7315B7F71804F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t0A3328221E03EB69862A26598F6466242D9824AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t306D18212C9B62F1499CD039EF84E3296880F321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t40925B0EE1207A395998710348464524F4248F45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDE724019003497875B1E8F63658DB7652C26F34B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1728381655CAD983688CD059AA1704C0BE018793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t597BD424264436C8850D43108B60117716AD99CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t610BD76229872BDC0AADC016BA65D8293073C520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t698A81C87DAD21453BE12E465FEB469EED017279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9A360B6748840F99170B6123237D1853036F7404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF450654C730338273C90867D294A49409661B91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t96811337C69D6C006FD794567F115917A678521C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3EEBB38327CD8BBB45A632C28A42F5208A399629;
IL2CPP_EXTERN_C String_t* _stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184;
IL2CPP_EXTERN_C String_t* _stringLiteralBB5EA3016445205A412037153C2EF6B08FBC6520;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m01D6C98B78CC1795558B61A92E96CE22B3212E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m02617273A8BE9C0B3EEAA0A425A520451B2192C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0BE950FEA6490AB326F80C4250E3D76309082A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0BE9ADBD0DB77A9060311ED0FB1E31CFECFA7ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0EBB84CCC6ED0222C1A9C215062AAB3DFE41B2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m138418EED9A02E0000C3AFDA5D14915778BE5661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1CF3E048606312D85781FED6CC6794472FA57EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2235267C2908EA6D02BCAEA851931E7AAA8B67DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2373FED09B272983A8A35DAE4E80C1A33004EC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m299E51549DA95E4296A0D8B46333BA6F052EB649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2D815DB6B9D63E982524088E9B7139A09263AEE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m3D8764A928978074A6111C0494524040E01FD798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m412D55B41569241805AA38C2351891B511A1BB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m44A72DE5A0965D310F1FE2A84908B9D1DD775714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m44E4631D19BE138B66C4D874FEFC44F92E07B22B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4585C192C831599ADB087E6D2B6E169D56E2B533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4626DA187071DB49D1186D7AD201121BEBE8D9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m479A979C8FDFD1FA738AB1540E94AE7FDE3FBE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4C7C7C14957ECB554AE918E4B9078597CA2CED75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m54103EF7379CFF63C35F8A5DD2A08748DC69A2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m54570F73507D3CCEAD81B7A949E09A2E784CD728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m54F0FDAAB7D4EFA3D9C7F4D8DBCD66F9566E2175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m589B45FE1E2B0143C15CE227E06BA236735E744A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m58B2261CDE5B716414C8A804911B7F873E38964B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m61FDDF49FCF1E57B7D94DAAD8AC61120F1100EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m726AC5430F97D346AC521B68F18F29F5483C056F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m7613F21D1BA48CBD54DA30F5327830A8DD705BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m81022617AC6116A0A079BF2B036F7B9CF5F8C9D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m84029CE9709FCF881615909E631B78B571FD02E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8D16A04029C1C7D2007F971325FF1D79242A7225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m939171154DBD3ACB579794BAC0E915C7D85BC17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m999F35194EE4916C35D50A28C7569AF6EB11FDAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m9B703B75776D69C6FAB31EC9F8334AE14173438E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m9F08FB1D55E703A6B7D430530CC5CEBD8A6C85CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA01DBDD8470F0112F21565CF58F8FDCD24BCDC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA89E5A817D384EE64B5B7282CBF6104BADADC50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA9BEF94712C4230080541C60D72F2B425BC6A19C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB4387E5709C9EDC49EC76151FE53F25B8641AD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB6B3FC585308494667A356184F80F2DBE66CA9C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB790C111B9F0E19E5012977C205142E82C3D28AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mBF03F31AADEB3271E1EA7991998EBF4FCC3B83BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC0F791B15F4F605F533F59C4E0BF632320316675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC7BDE4D8C29E4F76B63896362624F1AFB13D01BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD1C90FAD9B546E0657C71C14E2AC3A236162A743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE05F66BE346DE3DE9350A92DFE359CCE5204EF26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE7543FD1692105363D20B0D6F097AA6853F565A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mEADDB48F00AD9890E8CDB4B6A0C18BEF727BE119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mECAD02095BA6C60E73B40E4C9D2136AB72805D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF0D1BEBCACAA52DB77862E60784BB90A68E25386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF40893A335EFF87218E3BF810276950F525309D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mFBF9354947B9CCBF16AB4C41C6BFF56A62BF7B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m00D28A9C18AB209910AAA3D0785A8419AF9AB895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m01AD9FBAAF0B544302B224005CC681C9930EC277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0C675173979310FDC48C82B73CF42AA2B89D00FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0F58A97E34A168589EBE6BFE9A53BA4E0D333B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0FCB7EF250BEAE6CEF3EE4A30665E95B202D074A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m11E96A4ADB4CA8D939B498743E46014B9348E475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1608C4AFB23AF8B729D351853415CE4DA0742646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1658A7C64B250B0A09C6F5E259E54481ADB69938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1C0F50205A7E807525669CFE20984A28E26B535F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1F79DE1846A8EF1A507C07832D7053570FE93676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m215EC2F7C637B559E9565E7DD0339C710AAA9B5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m23093F76796FDE176420A09E31F2C7C34F996475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2D6CCD3352487A85E53B6AC6C8699421EAE4BF8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m316FD5676147CBF1145DA14B9AA5A61889F32005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m53716F485A123F63E390E4FF6AA84B5191FA64C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m585F131352B012B24C9B5174DE60745A630D92AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m5EA4CFE00E036E2FAA797D554E3280CD97B1568E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6062F4141E91D2BC37D0559AEF2E31764FCF422B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m65AEED96E6D7457711214F1B359E51242D70BDD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m65E6859D99AF1E0E6F5FF85DD2067C06CC831BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m693C5C4901E27CF091042335EDC65A543FDA7788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6BE7167086AA3E6881509E66CBEC5A27F5FC60CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m7D6BF024B95CE683DB4017E62FC583265FDD8DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8E52D37C2FF38F8B84D60E0AB8F731D1096AC083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9B86E814D0EE72EDA0A54D4084405D7C8D9E6918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA55B0E648A4E20B1511BE4D0FC179FF519D025F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA74D3CF2B53350D8DC506210FD175E6F65D1F616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA7D2CE32A0FF39A00D34F2C42A9EE49434690554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mAAD583B9AA9964A0744B85ED3D9B3CCC8F598825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB1EA53DA0C057962D1352D901372DACB92101D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB77B30CDB11C83AF276817169AB7E5CFA5E55E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB9C68EF9E302DE8C95506D74105D38157A7209EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBB0C62146EAF207D4970419DD4B1B149E86D772A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC270B48DDCD673C6FB15D9406A7229DD941321EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC4F3C05EF7F881DD60766450AC52C7D2BB1F2490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC7DE9BB4F20379E2FC582BE52979C2A94F556C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC8D11F9EB8CDA11AF76948A9DB8D2827A40A0A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD0CE92B35012A2516E42C68A9828C3863634E419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD20D7828B66CE686C779EE4632B411EE998C8D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD25737902751766E0EDB44884827D16A2549753C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD286333868137BF85A8336FC1E2CA63EE50F2FF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD2F066521551F7C47DA7690EF978FF36FC119CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD4CB71826A6A21C9082AC34C24A25AE65D2D1F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD7DAAB9441FD46B1525FE1D0FDE0437780B1EB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD9212DFB999EDF561E3967695ED6E10622E191DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mDF27A383813AB6BD09B022BF9706D2E652B6F529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE0A12F9122D435543EAC3BE4961B0341697881B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE3DB85A209C35E388B8780967CF82C384BDCF8C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF1A3634FB7C5F17CAA9DAD1910F8F0AD146687A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF39D455DF3310699A3BBDD0DE79B47D82B5990B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF73D703CB4103F897E2CFC8785C6B2D73FE0F520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF85ED4404B631A868BECA94BF0AEAAE5FA259F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m264FCFFBB1C505E01D3831668EAAD07BE031E898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mC20A57D10E197099E20FCB6304CC074590BC8949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_mFD95DBD4A52EF7EB1AAAFBFE020A4E8AD26C222E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_CommandMessage_m30CF7613B628FCA060D3028BC1679FFC7687661C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_EntityStateMessage_m792B29E99DBE36E29143C4D1DC0BE1B65BD91D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_m98AF57541D49BFBD7D62653C63090E10311324C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_mF487E5DEE9C99048CB050EBDFEAE3AC13CCBFC43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mDBCB8A1E137E48B9E3C2738D2F7C6C988BF68463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m686E47B45DAFAF001795218660DA054AEAC4E434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_mC6DE5DCFCAB8D00C51D9816436FD20A37E978A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_mCCFE88F44EE2AAAEEC78AB8265B05B9088FA5A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_m2AFB7E3609D339ABAAC07C71CC2BE277AFBD2614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ReadyMessage_m333E2438821BCE0308B276A0743C0F9B2A34ABA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_RpcMessage_mC1275440C09A8D01194C630FEAC86950A4820C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SceneMessage_mB2E4D466F252F16937F497C945EE936A4D22BBD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SpawnMessage_m7D1F92A4AEB1A350E5552FD5FDE73F0E7096854F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mB7A38860635D372F06A249BB2BC2FF8906FA1267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mDC4F5DDF14CD01999DCFFD04007B928E3F15E273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_m6D05E2B431141F217D43DCD58B889D682AD61046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_CommandMessage_m129987B61F98C7AB0A413FC603DB15EE9D67F20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_EntityStateMessage_m48C6ED6790E903B64029A6EE60E40426433DB863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m63EBF4BD0C78F90D00DC086620C709402AEBF2D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_m20FB0EC57978FD2779A3327D87DB016384F486B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NotReadyMessage_mF61ED5D3E74B9ACFFEEF9462E332F6D4F2DD38BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m330AB506A1091B04CF5063CE801912160FCF12FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m11603C6B99A5FA3EAD6288567987674D71393BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m3895A23BB905E3C888D503941137E3B3EE5DBBF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_mCB3B7A378B7C88A88250DFFE573FB00825D00E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ReadyMessage_m464C7D44082690A88CD811FA5ECBAA0A0BA034ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_RpcMessage_mE1C70DD9843502F910207AE89277A7E1322EFD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SceneMessage_mD3D13D43D390D4CF287BF26421493BC3A025EDD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SpawnMessage_m92490B34FA3AF23017BC21840F8F981F9F254616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBytesAndSize_m470D9ED0184AD4ACD3E19B05B76A6AB2BD8761B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadChar_mACFE053E8B07E677264931800D20B6ECAAA6B67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadColor32_m50B22DD146E709AA1D4071E5FD94631A30FFE208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadColor_m7D14373FEA67BC197EBF4CDCD58CF07208F1B9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadDecimal_mA6962E770412779FD09E8EB47EE9A19C240E8C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadFloat_mA28914962BF46493563D25492061089A7EA21724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadGameObject_m9E5CBFD81A7BF32F17C1BFBCEDE3B6173C86F871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadGuid_mF5051D5420D27EFE9528DEC1AA26B4737757D1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadLong_m6FC4A7B662CE119BC9AEE64B7251C85FA467949F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadMatrix4x4_m01156CFDC6A527F32124DE1B710EFB71F36A4CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkBehaviourSyncVar_m748B952B66504568E23B970657F5CB6C2B919BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkBehaviour_m619C0C1EB91CC32FFECA8511DE41B3F1E6E1580B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkIdentity_mADB84529862C7551B8FBA24B832967F13BBA4358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadPlane_m2F9D729B0CBB60BCEA90EEEECCB842310DFB8157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadQuaternion_mB76E21A340B13F01281C940362D6DFF0A2B26437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadRay_m7A68A5A3C35EB184299328500C3BDE9F77D84BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadRect_mEAE69E8CAE5DF5647AF6E3E226C502CF41EBB93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadSByte_m958BBA53AD7C66000CF73A24637B73CD3D211F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadShort_mAF6F083FE74623DF5B95949A2A9ED9A663CD99B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadTransform_mAD022F78AA9379D17468DFB76800283639744AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadULong_m240E007556EDA81FC4279A3774ED1898A6EA6BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUShort_m1E7C683AD0C267AE798F9A0792C77B0AB4E352DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUri_m39913AB35ADC2CEA6A4EA586CB68C77C8C69D8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector2Int_m3878D94B794DE843659726E0F08E0874CDF80B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector2_mD362013B8BD675E4EF63B0CFCC8DA038ED07E7E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector3Int_m2586E02A6E19C5F5FE0F45FAC2A4952AF815C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector3_mF8892E49F8CDAE6B3C738E6ABFC2130DA0B6709F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector4_m5B517C31BEFE1701064C7ECC5A1E9DCAC9929096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBytesAndSize_m96213AFCB04A9EC9F3F982F4F9BA3E2EBE2FA24A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteChar_mED44727F7A3BEE7C6D94E9CE6A0A4DA0B19C057A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteColor32_m4EA8BE7083D92813A0899C3C40427CED61464192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteColor_m994F1B4D02EA3C5BD4BD4834A0CD58EB1A5352DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteDecimal_m57B122E9BA3F6FD264F0915A98E3B6BEF2FD12BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteFloat_mD75F0D2C29FCF82D9331F06A9B765372D788F0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteGameObject_m42A44142EBBD20C4AA9F4E2FEB30BFC2116FCE31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteGuid_m0A123A3A718A0F3FDD467CCB9622DCAA90D617AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteLong_mD9D01650FDF450A1723C2F1EA817AE6B8C637B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteMatrix4x4_m42AC2750C7724369857C2926F6E434C2D91829E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteNetworkBehaviour_m11F3313AF04A2C05D122E961F32857C91FBA0736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteNetworkIdentity_m999B9107633A1F5C2E37EC48C9D802D53C8CF46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WritePlane_mC59D1041360E9E21AFF0DB4E0E3C2CAE471DB26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteQuaternion_m53DA908E5BD159704B406BE0329A7B6EC41EA2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteRay_m9C160BE768EB303EE7AD9A694816B5BF3DB79BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteRect_m64F3075E1E966A7CAD7B8DCCAA837BB7C8E9665C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteSByte_mA926969811A9C7D0C82FFD6A6E82F12DE2DE56FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteShort_mF6C5BFE6019FC7BFE037226FEB50B673A81EBCA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteTransform_m55A32385430D751090387711ECC6F9BFDB7873E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteULong_m489A66CF31742C7FDC0EFAD34134CC82651E5F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUShort_m51D24CBE5F0428ACDFB3A43E350DA09E8C25AF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUri_m0C38A8803AFDAE8E5807741E56E674D4ABE92F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector2Int_m49061DB21DB24954724839EB7B9B7B46A5732A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector2_m9E01EEC43B44A955E43C38D73F2B0A3702B88CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector3Int_m921712D87942033A1D0AE3FFD8BFB3B420345FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector3_mBAE8D4DE624FBAC9F5D08EBF6470CFF2517C450F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector4_mDD28538D18DBDAF73E8C6E0BA6B51B54AC4B93C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__2_0_mC0466F814ED12FF12AE26A2797CC53B1E727461B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutAuthenticator_U3CAwakeU3Eb__2_1_mDEAB05F74B80593CF1419E04755EEFCC2799E974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_Reset_m8BE43CCCA2BA82C71E9BFC4B67888BB4BEBDCA0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_Reset_m6B86F6D54FE681C8DDA3EA44047ABFF719C17685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnClientAuthenticate_mC1F9DB3F8F9DB4628282E06EACDF1CC4B79545BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStopClient_mAB867A002551180D852D96DA4CCEDAA80B0219BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicAuthenticator_OnStopServer_mAB7E23C90A5D71AE78EAD5BC426B6BDCA955F142_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode_InitReadWriters_m1303C5A626116F37C21AFC8DF2543E7B44EA6AD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mC20A57D10E197099E20FCB6304CC074590BC8949_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_mFD95DBD4A52EF7EB1AAAFBFE020A4E8AD26C222E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_CommandMessage_m30CF7613B628FCA060D3028BC1679FFC7687661C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_EntityStateMessage_m792B29E99DBE36E29143C4D1DC0BE1B65BD91D06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_m98AF57541D49BFBD7D62653C63090E10311324C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_mF487E5DEE9C99048CB050EBDFEAE3AC13CCBFC43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m686E47B45DAFAF001795218660DA054AEAC4E434_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_mC6DE5DCFCAB8D00C51D9816436FD20A37E978A2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_RpcMessage_mC1275440C09A8D01194C630FEAC86950A4820C19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SceneMessage_mB2E4D466F252F16937F497C945EE936A4D22BBD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SpawnMessage_m7D1F92A4AEB1A350E5552FD5FDE73F0E7096854F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mDC4F5DDF14CD01999DCFFD04007B928E3F15E273_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_m6D05E2B431141F217D43DCD58B889D682AD61046_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_CommandMessage_m129987B61F98C7AB0A413FC603DB15EE9D67F20C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_EntityStateMessage_m48C6ED6790E903B64029A6EE60E40426433DB863_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m63EBF4BD0C78F90D00DC086620C709402AEBF2D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_m20FB0EC57978FD2779A3327D87DB016384F486B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m330AB506A1091B04CF5063CE801912160FCF12FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m11603C6B99A5FA3EAD6288567987674D71393BBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_RpcMessage_mE1C70DD9843502F910207AE89277A7E1322EFD67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SceneMessage_mD3D13D43D390D4CF287BF26421493BC3A025EDD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SpawnMessage_m92490B34FA3AF23017BC21840F8F981F9F254616_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554Mirror_Authenticators_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_OnClientAuthenticate_mFE96CD9C8DC4FBF7AA0E427ECAB816574E536C54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__2_0_mC0466F814ED12FF12AE26A2797CC53B1E727461B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutAuthenticator_U3CAwakeU3Eb__2_1_mDEAB05F74B80593CF1419E04755EEFCC2799E974_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__9_MoveNext_m5B06058BC518B958C3FC684894F942CE8E282E04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_Reset_m8BE43CCCA2BA82C71E9BFC4B67888BB4BEBDCA0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__9_MoveNext_mBBAF7CD80A7782D91973BA4EDAC7EDA4D40D2C6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_Reset_m6B86F6D54FE681C8DDA3EA44047ABFF719C17685_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E0727A591CEBCB552F72CC4EBB40DE1B2BEEDF2 
{
public:

public:
};


// System.Object


// Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9
struct U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::waitTime
	float ___waitTime_2;
	// Mirror.Authenticators.BasicAuthenticator Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::<>4__this
	BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * ___U3CU3E4__this_3;
	// Mirror.NetworkConnection Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::conn
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796, ___U3CU3E4__this_3)); }
	inline BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_conn_4() { return static_cast<int32_t>(offsetof(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796, ___conn_4)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_conn_4() const { return ___conn_4; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_conn_4() { return &___conn_4; }
	inline void set_conn_4(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___conn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_4), (void*)value);
	}
};


// Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9
struct U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F  : public RuntimeObject
{
public:
	// System.Int32 Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mirror.Authenticators.TimeoutAuthenticator Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::<>4__this
	TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * ___U3CU3E4__this_2;
	// Mirror.NetworkConnection Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::conn
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F, ___U3CU3E4__this_2)); }
	inline TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_conn_3() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F, ___conn_3)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_conn_3() const { return ___conn_3; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_conn_3() { return &___conn_3; }
	inline void set_conn_3(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___conn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conn_3), (void*)value);
	}
};


// Mirror.GeneratedNetworkCode
struct GeneratedNetworkCode_t662A10C682AFAEB952A380769A157FAF75728785  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::observing
	HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * ___observing_1;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_2;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_3;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_4;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_5;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_6;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3CidentityU3Ek__BackingField_7;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * ___clientOwnedObjects_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.Batcher> Mirror.NetworkConnection::batches
	Dictionary_2_t3070FC8914A7466BAF333A02B7F8826D936E5AEC * ___batches_9;
	// System.Double Mirror.NetworkConnection::<remoteTimeStamp>k__BackingField
	double ___U3CremoteTimeStampU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_observing_1() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___observing_1)); }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * get_observing_1() const { return ___observing_1; }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE ** get_address_of_observing_1() { return &___observing_1; }
	inline void set_observing_1(HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * value)
	{
		___observing_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observing_1), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_2() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___connectionId_2)); }
	inline int32_t get_connectionId_2() const { return ___connectionId_2; }
	inline int32_t* get_address_of_connectionId_2() { return &___connectionId_2; }
	inline void set_connectionId_2(int32_t value)
	{
		___connectionId_2 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_3() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isAuthenticated_3)); }
	inline bool get_isAuthenticated_3() const { return ___isAuthenticated_3; }
	inline bool* get_address_of_isAuthenticated_3() { return &___isAuthenticated_3; }
	inline void set_isAuthenticated_3(bool value)
	{
		___isAuthenticated_3 = value;
	}

	inline static int32_t get_offset_of_authenticationData_4() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___authenticationData_4)); }
	inline RuntimeObject * get_authenticationData_4() const { return ___authenticationData_4; }
	inline RuntimeObject ** get_address_of_authenticationData_4() { return &___authenticationData_4; }
	inline void set_authenticationData_4(RuntimeObject * value)
	{
		___authenticationData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_4), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_5() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isReady_5)); }
	inline bool get_isReady_5() const { return ___isReady_5; }
	inline bool* get_address_of_isReady_5() { return &___isReady_5; }
	inline void set_isReady_5(bool value)
	{
		___isReady_5 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_6() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___lastMessageTime_6)); }
	inline float get_lastMessageTime_6() const { return ___lastMessageTime_6; }
	inline float* get_address_of_lastMessageTime_6() { return &___lastMessageTime_6; }
	inline void set_lastMessageTime_6(float value)
	{
		___lastMessageTime_6 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CidentityU3Ek__BackingField_7)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3CidentityU3Ek__BackingField_7() const { return ___U3CidentityU3Ek__BackingField_7; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3CidentityU3Ek__BackingField_7() { return &___U3CidentityU3Ek__BackingField_7; }
	inline void set_U3CidentityU3Ek__BackingField_7(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3CidentityU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_8() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___clientOwnedObjects_8)); }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * get_clientOwnedObjects_8() const { return ___clientOwnedObjects_8; }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE ** get_address_of_clientOwnedObjects_8() { return &___clientOwnedObjects_8; }
	inline void set_clientOwnedObjects_8(HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * value)
	{
		___clientOwnedObjects_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_8), (void*)value);
	}

	inline static int32_t get_offset_of_batches_9() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___batches_9)); }
	inline Dictionary_2_t3070FC8914A7466BAF333A02B7F8826D936E5AEC * get_batches_9() const { return ___batches_9; }
	inline Dictionary_2_t3070FC8914A7466BAF333A02B7F8826D936E5AEC ** get_address_of_batches_9() { return &___batches_9; }
	inline void set_batches_9(Dictionary_2_t3070FC8914A7466BAF333A02B7F8826D936E5AEC * value)
	{
		___batches_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batches_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremoteTimeStampU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CremoteTimeStampU3Ek__BackingField_10)); }
	inline double get_U3CremoteTimeStampU3Ek__BackingField_10() const { return ___U3CremoteTimeStampU3Ek__BackingField_10; }
	inline double* get_address_of_U3CremoteTimeStampU3Ek__BackingField_10() { return &___U3CremoteTimeStampU3Ek__BackingField_10; }
	inline void set_U3CremoteTimeStampU3Ek__BackingField_10(double value)
	{
		___U3CremoteTimeStampU3Ek__BackingField_10 = value;
	}
};


// Mirror.NetworkReaderExtensions
struct NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A  : public RuntimeObject
{
public:

public:
};

struct NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_StaticFields
{
public:
	// System.Text.UTF8Encoding Mirror.NetworkReaderExtensions::encoding
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * ___encoding_0;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_StaticFields, ___encoding_0)); }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * get_encoding_0() const { return ___encoding_0; }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}
};


// Mirror.NetworkWriter
struct NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_1;
	// System.Int32 Mirror.NetworkWriter::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};


// Mirror.NetworkWriterExtensions
struct NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F  : public RuntimeObject
{
public:

public:
};

struct NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_StaticFields
{
public:
	// System.Text.UTF8Encoding Mirror.NetworkWriterExtensions::encoding
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * ___encoding_0;
	// System.Byte[] Mirror.NetworkWriterExtensions::stringBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___stringBuffer_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_StaticFields, ___encoding_0)); }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * get_encoding_0() const { return ___encoding_0; }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_1() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_StaticFields, ___stringBuffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_stringBuffer_1() const { return ___stringBuffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_stringBuffer_1() { return &___stringBuffer_1; }
	inline void set_stringBuffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___stringBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_1), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.AddPlayerMessage>
struct Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B_StaticFields, ___read_0)); }
	inline Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 * get_read_0() const { return ___read_0; }
	inline Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t1728381655CAD983688CD059AA1704C0BE018793 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD_StaticFields, ___read_0)); }
	inline Func_2_t1728381655CAD983688CD059AA1704C0BE018793 * get_read_0() const { return ___read_0; }
	inline Func_2_t1728381655CAD983688CD059AA1704C0BE018793 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t1728381655CAD983688CD059AA1704C0BE018793 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574_StaticFields, ___read_0)); }
	inline Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 * get_read_0() const { return ___read_0; }
	inline Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.CommandMessage>
struct Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6_StaticFields, ___read_0)); }
	inline Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B * get_read_0() const { return ___read_0; }
	inline Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.EntityStateMessage>
struct Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501_StaticFields, ___read_0)); }
	inline Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 * get_read_0() const { return ___read_0; }
	inline Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A_StaticFields, ___read_0)); }
	inline Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE * get_read_0() const { return ___read_0; }
	inline Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkBehaviour>
struct Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64_StaticFields, ___read_0)); }
	inline Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB * get_read_0() const { return ___read_0; }
	inline Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkIdentity>
struct Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t597BD424264436C8850D43108B60117716AD99CE * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173_StaticFields, ___read_0)); }
	inline Func_2_t597BD424264436C8850D43108B60117716AD99CE * get_read_0() const { return ___read_0; }
	inline Func_2_t597BD424264436C8850D43108B60117716AD99CE ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t597BD424264436C8850D43108B60117716AD99CE * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkPingMessage>
struct Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788_StaticFields, ___read_0)); }
	inline Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 * get_read_0() const { return ___read_0; }
	inline Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkPongMessage>
struct Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4_StaticFields, ___read_0)); }
	inline Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F * get_read_0() const { return ___read_0; }
	inline Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NotReadyMessage>
struct Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7_StaticFields, ___read_0)); }
	inline Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 * get_read_0() const { return ___read_0; }
	inline Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectDestroyMessage>
struct Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D_StaticFields, ___read_0)); }
	inline Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B * get_read_0() const { return ___read_0; }
	inline Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectHideMessage>
struct Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166_StaticFields, ___read_0)); }
	inline Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 * get_read_0() const { return ___read_0; }
	inline Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectSpawnFinishedMessage>
struct Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010_StaticFields, ___read_0)); }
	inline Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 * get_read_0() const { return ___read_0; }
	inline Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectSpawnStartedMessage>
struct Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96_StaticFields, ___read_0)); }
	inline Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 * get_read_0() const { return ___read_0; }
	inline Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ReadyMessage>
struct Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569_StaticFields, ___read_0)); }
	inline Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F * get_read_0() const { return ___read_0; }
	inline Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.RpcMessage>
struct Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A_StaticFields, ___read_0)); }
	inline Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B * get_read_0() const { return ___read_0; }
	inline Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SceneMessage>
struct Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA_StaticFields, ___read_0)); }
	inline Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 * get_read_0() const { return ___read_0; }
	inline Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SceneOperation>
struct Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD_StaticFields, ___read_0)); }
	inline Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC * get_read_0() const { return ___read_0; }
	inline Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SpawnMessage>
struct Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874_StaticFields, ___read_0)); }
	inline Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD * get_read_0() const { return ___read_0; }
	inline Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.ArraySegment`1<System.Byte>>
struct Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tF450654C730338273C90867D294A49409661B91A * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661_StaticFields, ___read_0)); }
	inline Func_2_tF450654C730338273C90867D294A49409661B91A * get_read_0() const { return ___read_0; }
	inline Func_2_tF450654C730338273C90867D294A49409661B91A ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tF450654C730338273C90867D294A49409661B91A * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Boolean>
struct Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B_StaticFields, ___read_0)); }
	inline Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 * get_read_0() const { return ___read_0; }
	inline Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Byte>
struct Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981_StaticFields, ___read_0)); }
	inline Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 * get_read_0() const { return ___read_0; }
	inline Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Byte[]>
struct Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075_StaticFields, ___read_0)); }
	inline Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 * get_read_0() const { return ___read_0; }
	inline Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Char>
struct Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F_StaticFields, ___read_0)); }
	inline Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 * get_read_0() const { return ___read_0; }
	inline Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Decimal>
struct Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183_StaticFields, ___read_0)); }
	inline Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 * get_read_0() const { return ___read_0; }
	inline Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Double>
struct Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81_StaticFields, ___read_0)); }
	inline Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD * get_read_0() const { return ___read_0; }
	inline Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Guid>
struct Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13_StaticFields, ___read_0)); }
	inline Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D * get_read_0() const { return ___read_0; }
	inline Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int16>
struct Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99_StaticFields, ___read_0)); }
	inline Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 * get_read_0() const { return ___read_0; }
	inline Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int32>
struct Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA_StaticFields, ___read_0)); }
	inline Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC * get_read_0() const { return ___read_0; }
	inline Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int64>
struct Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D_StaticFields, ___read_0)); }
	inline Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 * get_read_0() const { return ___read_0; }
	inline Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.SByte>
struct Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD_StaticFields, ___read_0)); }
	inline Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC * get_read_0() const { return ___read_0; }
	inline Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Single>
struct Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t9A360B6748840F99170B6123237D1853036F7404 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6_StaticFields, ___read_0)); }
	inline Func_2_t9A360B6748840F99170B6123237D1853036F7404 * get_read_0() const { return ___read_0; }
	inline Func_2_t9A360B6748840F99170B6123237D1853036F7404 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t9A360B6748840F99170B6123237D1853036F7404 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.String>
struct Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964_StaticFields, ___read_0)); }
	inline Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 * get_read_0() const { return ___read_0; }
	inline Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt16>
struct Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1_StaticFields, ___read_0)); }
	inline Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 * get_read_0() const { return ___read_0; }
	inline Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt32>
struct Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B_StaticFields, ___read_0)); }
	inline Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 * get_read_0() const { return ___read_0; }
	inline Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt64>
struct Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12_StaticFields, ___read_0)); }
	inline Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F * get_read_0() const { return ___read_0; }
	inline Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Uri>
struct Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE_StaticFields, ___read_0)); }
	inline Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 * get_read_0() const { return ___read_0; }
	inline Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Color32>
struct Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688_StaticFields, ___read_0)); }
	inline Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D * get_read_0() const { return ___read_0; }
	inline Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Color>
struct Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E_StaticFields, ___read_0)); }
	inline Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 * get_read_0() const { return ___read_0; }
	inline Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.GameObject>
struct Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638_StaticFields, ___read_0)); }
	inline Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 * get_read_0() const { return ___read_0; }
	inline Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Matrix4x4>
struct Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4_StaticFields, ___read_0)); }
	inline Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 * get_read_0() const { return ___read_0; }
	inline Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Plane>
struct Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1_StaticFields, ___read_0)); }
	inline Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 * get_read_0() const { return ___read_0; }
	inline Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Quaternion>
struct Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2_StaticFields, ___read_0)); }
	inline Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 * get_read_0() const { return ___read_0; }
	inline Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Ray>
struct Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150_StaticFields, ___read_0)); }
	inline Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF * get_read_0() const { return ___read_0; }
	inline Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Rect>
struct Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678_StaticFields, ___read_0)); }
	inline Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 * get_read_0() const { return ___read_0; }
	inline Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Transform>
struct Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4_StaticFields, ___read_0)); }
	inline Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 * get_read_0() const { return ___read_0; }
	inline Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector2>
struct Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433_StaticFields, ___read_0)); }
	inline Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 * get_read_0() const { return ___read_0; }
	inline Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector2Int>
struct Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6_StaticFields, ___read_0)); }
	inline Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 * get_read_0() const { return ___read_0; }
	inline Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector3>
struct Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061_StaticFields, ___read_0)); }
	inline Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 * get_read_0() const { return ___read_0; }
	inline Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector3Int>
struct Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235_StaticFields, ___read_0)); }
	inline Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 * get_read_0() const { return ___read_0; }
	inline Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector4>
struct Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0_StaticFields, ___read_0)); }
	inline Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 * get_read_0() const { return ___read_0; }
	inline Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.AddPlayerMessage>
struct Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074_StaticFields, ___write_0)); }
	inline Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 * get_write_0() const { return ___write_0; }
	inline Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA_StaticFields, ___write_0)); }
	inline Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 * get_write_0() const { return ___write_0; }
	inline Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202_StaticFields, ___write_0)); }
	inline Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 * get_write_0() const { return ___write_0; }
	inline Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.CommandMessage>
struct Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03_StaticFields, ___write_0)); }
	inline Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A * get_write_0() const { return ___write_0; }
	inline Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.EntityStateMessage>
struct Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9_StaticFields, ___write_0)); }
	inline Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 * get_write_0() const { return ___write_0; }
	inline Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkBehaviour>
struct Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6_StaticFields, ___write_0)); }
	inline Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 * get_write_0() const { return ___write_0; }
	inline Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkIdentity>
struct Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382_StaticFields, ___write_0)); }
	inline Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E * get_write_0() const { return ___write_0; }
	inline Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPingMessage>
struct Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3_StaticFields, ___write_0)); }
	inline Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 * get_write_0() const { return ___write_0; }
	inline Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPongMessage>
struct Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDE724019003497875B1E8F63658DB7652C26F34B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA_StaticFields, ___write_0)); }
	inline Action_2_tDE724019003497875B1E8F63658DB7652C26F34B * get_write_0() const { return ___write_0; }
	inline Action_2_tDE724019003497875B1E8F63658DB7652C26F34B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDE724019003497875B1E8F63658DB7652C26F34B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NotReadyMessage>
struct Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB_StaticFields, ___write_0)); }
	inline Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 * get_write_0() const { return ___write_0; }
	inline Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectDestroyMessage>
struct Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A_StaticFields, ___write_0)); }
	inline Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 * get_write_0() const { return ___write_0; }
	inline Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectHideMessage>
struct Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B_StaticFields, ___write_0)); }
	inline Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 * get_write_0() const { return ___write_0; }
	inline Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnFinishedMessage>
struct Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C_StaticFields, ___write_0)); }
	inline Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C * get_write_0() const { return ___write_0; }
	inline Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnStartedMessage>
struct Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914_StaticFields, ___write_0)); }
	inline Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 * get_write_0() const { return ___write_0; }
	inline Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ReadyMessage>
struct Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D_StaticFields, ___write_0)); }
	inline Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F * get_write_0() const { return ___write_0; }
	inline Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.RpcMessage>
struct Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5_StaticFields, ___write_0)); }
	inline Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 * get_write_0() const { return ___write_0; }
	inline Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneMessage>
struct Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F_StaticFields, ___write_0)); }
	inline Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 * get_write_0() const { return ___write_0; }
	inline Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneOperation>
struct Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC_StaticFields, ___write_0)); }
	inline Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB * get_write_0() const { return ___write_0; }
	inline Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SpawnMessage>
struct Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969_StaticFields, ___write_0)); }
	inline Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F * get_write_0() const { return ___write_0; }
	inline Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.ArraySegment`1<System.Byte>>
struct Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3_StaticFields, ___write_0)); }
	inline Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD * get_write_0() const { return ___write_0; }
	inline Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Boolean>
struct Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0_StaticFields, ___write_0)); }
	inline Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 * get_write_0() const { return ___write_0; }
	inline Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte>
struct Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484_StaticFields, ___write_0)); }
	inline Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB * get_write_0() const { return ___write_0; }
	inline Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte[]>
struct Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE_StaticFields, ___write_0)); }
	inline Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C * get_write_0() const { return ___write_0; }
	inline Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Char>
struct Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t40925B0EE1207A395998710348464524F4248F45 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9_StaticFields, ___write_0)); }
	inline Action_2_t40925B0EE1207A395998710348464524F4248F45 * get_write_0() const { return ___write_0; }
	inline Action_2_t40925B0EE1207A395998710348464524F4248F45 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t40925B0EE1207A395998710348464524F4248F45 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Decimal>
struct Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383_StaticFields, ___write_0)); }
	inline Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 * get_write_0() const { return ___write_0; }
	inline Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Double>
struct Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D_StaticFields, ___write_0)); }
	inline Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 * get_write_0() const { return ___write_0; }
	inline Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Guid>
struct Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2_StaticFields, ___write_0)); }
	inline Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 * get_write_0() const { return ___write_0; }
	inline Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int16>
struct Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17_StaticFields, ___write_0)); }
	inline Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C * get_write_0() const { return ___write_0; }
	inline Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int32>
struct Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204_StaticFields, ___write_0)); }
	inline Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D * get_write_0() const { return ___write_0; }
	inline Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int64>
struct Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB_StaticFields, ___write_0)); }
	inline Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 * get_write_0() const { return ___write_0; }
	inline Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.SByte>
struct Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B_StaticFields, ___write_0)); }
	inline Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 * get_write_0() const { return ___write_0; }
	inline Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Single>
struct Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F_StaticFields, ___write_0)); }
	inline Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 * get_write_0() const { return ___write_0; }
	inline Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.String>
struct Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7_StaticFields, ___write_0)); }
	inline Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D * get_write_0() const { return ___write_0; }
	inline Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16>
struct Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E_StaticFields, ___write_0)); }
	inline Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 * get_write_0() const { return ___write_0; }
	inline Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt32>
struct Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0A3328221E03EB69862A26598F6466242D9824AF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D_StaticFields, ___write_0)); }
	inline Action_2_t0A3328221E03EB69862A26598F6466242D9824AF * get_write_0() const { return ___write_0; }
	inline Action_2_t0A3328221E03EB69862A26598F6466242D9824AF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0A3328221E03EB69862A26598F6466242D9824AF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt64>
struct Writer_1_t96811337C69D6C006FD794567F115917A678521C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t96811337C69D6C006FD794567F115917A678521C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t96811337C69D6C006FD794567F115917A678521C_StaticFields, ___write_0)); }
	inline Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B * get_write_0() const { return ___write_0; }
	inline Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Uri>
struct Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8_StaticFields, ___write_0)); }
	inline Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 * get_write_0() const { return ___write_0; }
	inline Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color32>
struct Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC_StaticFields, ___write_0)); }
	inline Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF * get_write_0() const { return ___write_0; }
	inline Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color>
struct Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD_StaticFields, ___write_0)); }
	inline Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 * get_write_0() const { return ___write_0; }
	inline Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.GameObject>
struct Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A_StaticFields, ___write_0)); }
	inline Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 * get_write_0() const { return ___write_0; }
	inline Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Matrix4x4>
struct Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC_StaticFields, ___write_0)); }
	inline Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE * get_write_0() const { return ___write_0; }
	inline Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Plane>
struct Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6_StaticFields, ___write_0)); }
	inline Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF * get_write_0() const { return ___write_0; }
	inline Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Quaternion>
struct Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B_StaticFields, ___write_0)); }
	inline Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 * get_write_0() const { return ___write_0; }
	inline Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Ray>
struct Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA_StaticFields, ___write_0)); }
	inline Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 * get_write_0() const { return ___write_0; }
	inline Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Rect>
struct Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB_StaticFields, ___write_0)); }
	inline Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 * get_write_0() const { return ___write_0; }
	inline Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Transform>
struct Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02_StaticFields, ___write_0)); }
	inline Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C * get_write_0() const { return ___write_0; }
	inline Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2>
struct Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737_StaticFields, ___write_0)); }
	inline Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 * get_write_0() const { return ___write_0; }
	inline Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2Int>
struct Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08_StaticFields, ___write_0)); }
	inline Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C * get_write_0() const { return ___write_0; }
	inline Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3>
struct Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B_StaticFields, ___write_0)); }
	inline Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 * get_write_0() const { return ___write_0; }
	inline Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3Int>
struct Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C_StaticFields, ___write_0)); }
	inline Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 * get_write_0() const { return ___write_0; }
	inline Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector4>
struct Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048_StaticFields, ___write_0)); }
	inline Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B * get_write_0() const { return ___write_0; }
	inline Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Mirror.AddPlayerMessage
struct AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D__padding[1];
	};

public:
};


// Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage::authUsername
	String_t* ___authUsername_0;
	// System.String Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage::authPassword
	String_t* ___authPassword_1;

public:
	inline static int32_t get_offset_of_authUsername_0() { return static_cast<int32_t>(offsetof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905, ___authUsername_0)); }
	inline String_t* get_authUsername_0() const { return ___authUsername_0; }
	inline String_t** get_address_of_authUsername_0() { return &___authUsername_0; }
	inline void set_authUsername_0(String_t* value)
	{
		___authUsername_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authUsername_0), (void*)value);
	}

	inline static int32_t get_offset_of_authPassword_1() { return static_cast<int32_t>(offsetof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905, ___authPassword_1)); }
	inline String_t* get_authPassword_1() const { return ___authPassword_1; }
	inline String_t** get_address_of_authPassword_1() { return &___authPassword_1; }
	inline void set_authPassword_1(String_t* value)
	{
		___authPassword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authPassword_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_pinvoke
{
	char* ___authUsername_0;
	char* ___authPassword_1;
};
// Native definition for COM marshalling of Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_com
{
	Il2CppChar* ___authUsername_0;
	Il2CppChar* ___authPassword_1;
};

// Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 
{
public:
	// System.Byte Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage::code
	uint8_t ___code_0;
	// System.String Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3, ___code_0)); }
	inline uint8_t get_code_0() const { return ___code_0; }
	inline uint8_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(uint8_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_pinvoke
{
	uint8_t ___code_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_com
{
	uint8_t ___code_0;
	Il2CppChar* ___message_1;
};

// Mirror.NetworkBehaviour/NetworkBehaviourSyncVar
struct NetworkBehaviourSyncVar_tB69CFB02A83C07266345D67C482D3A69CBC29D13 
{
public:
	// System.UInt32 Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::netId
	uint32_t ___netId_0;
	// System.Byte Mirror.NetworkBehaviour/NetworkBehaviourSyncVar::componentIndex
	uint8_t ___componentIndex_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tB69CFB02A83C07266345D67C482D3A69CBC29D13, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tB69CFB02A83C07266345D67C482D3A69CBC29D13, ___componentIndex_1)); }
	inline uint8_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline uint8_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(uint8_t value)
	{
		___componentIndex_1 = value;
	}
};


// Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E 
{
public:
	// System.Int32 Mirror.NetworkIdentitySerialization::tick
	int32_t ___tick_0;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::ownerWriter
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___ownerWriter_1;
	// Mirror.NetworkWriter Mirror.NetworkIdentitySerialization::observersWriter
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___observersWriter_2;
	// System.Int32 Mirror.NetworkIdentitySerialization::ownerWritten
	int32_t ___ownerWritten_3;
	// System.Int32 Mirror.NetworkIdentitySerialization::observersWritten
	int32_t ___observersWritten_4;

public:
	inline static int32_t get_offset_of_tick_0() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E, ___tick_0)); }
	inline int32_t get_tick_0() const { return ___tick_0; }
	inline int32_t* get_address_of_tick_0() { return &___tick_0; }
	inline void set_tick_0(int32_t value)
	{
		___tick_0 = value;
	}

	inline static int32_t get_offset_of_ownerWriter_1() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E, ___ownerWriter_1)); }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * get_ownerWriter_1() const { return ___ownerWriter_1; }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D ** get_address_of_ownerWriter_1() { return &___ownerWriter_1; }
	inline void set_ownerWriter_1(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * value)
	{
		___ownerWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownerWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_observersWriter_2() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E, ___observersWriter_2)); }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * get_observersWriter_2() const { return ___observersWriter_2; }
	inline NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D ** get_address_of_observersWriter_2() { return &___observersWriter_2; }
	inline void set_observersWriter_2(NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * value)
	{
		___observersWriter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersWriter_2), (void*)value);
	}

	inline static int32_t get_offset_of_ownerWritten_3() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E, ___ownerWritten_3)); }
	inline int32_t get_ownerWritten_3() const { return ___ownerWritten_3; }
	inline int32_t* get_address_of_ownerWritten_3() { return &___ownerWritten_3; }
	inline void set_ownerWritten_3(int32_t value)
	{
		___ownerWritten_3 = value;
	}

	inline static int32_t get_offset_of_observersWritten_4() { return static_cast<int32_t>(offsetof(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E, ___observersWritten_4)); }
	inline int32_t get_observersWritten_4() const { return ___observersWritten_4; }
	inline int32_t* get_address_of_observersWritten_4() { return &___observersWritten_4; }
	inline void set_observersWritten_4(int32_t value)
	{
		___observersWritten_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E_marshaled_pinvoke
{
	int32_t ___tick_0;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___ownerWriter_1;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___observersWriter_2;
	int32_t ___ownerWritten_3;
	int32_t ___observersWritten_4;
};
// Native definition for COM marshalling of Mirror.NetworkIdentitySerialization
struct NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E_marshaled_com
{
	int32_t ___tick_0;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___ownerWriter_1;
	NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___observersWriter_2;
	int32_t ___ownerWritten_3;
	int32_t ___observersWritten_4;
};

// Mirror.NetworkPingMessage
struct NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 
{
public:
	// System.Double Mirror.NetworkPingMessage::clientTime
	double ___clientTime_0;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}
};


// Mirror.NetworkPongMessage
struct NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB 
{
public:
	// System.Double Mirror.NetworkPongMessage::clientTime
	double ___clientTime_0;
	// System.Double Mirror.NetworkPongMessage::serverTime
	double ___serverTime_1;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}

	inline static int32_t get_offset_of_serverTime_1() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB, ___serverTime_1)); }
	inline double get_serverTime_1() const { return ___serverTime_1; }
	inline double* get_address_of_serverTime_1() { return &___serverTime_1; }
	inline void set_serverTime_1(double value)
	{
		___serverTime_1 = value;
	}
};


// Mirror.NotReadyMessage
struct NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B__padding[1];
	};

public:
};


// Mirror.ObjectDestroyMessage
struct ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053 
{
public:
	// System.UInt32 Mirror.ObjectDestroyMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectHideMessage
struct ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F 
{
public:
	// System.UInt32 Mirror.ObjectHideMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553__padding[1];
	};

public:
};


// Mirror.ObjectSpawnStartedMessage
struct ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83__padding[1];
	};

public:
};


// Mirror.ReadyMessage
struct ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632__padding[1];
	};

public:
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.SByte
struct SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>
struct UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_One_4)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Up_5)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Down_6)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Left_7)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Right_8)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Right_8 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// Mirror.CommandMessage
struct CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85 
{
public:
	// System.UInt32 Mirror.CommandMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.CommandMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.CommandMessage::functionHash
	int32_t ___functionHash_2;
	// System.ArraySegment`1<System.Byte> Mirror.CommandMessage::payload
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85, ___payload_3)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_payload_3() const { return ___payload_3; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_3))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.CommandMessage
struct CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;
};
// Native definition for COM marshalling of Mirror.CommandMessage
struct CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;
};

// Mirror.ConnectState
struct ConnectState_t7924BD8196594BB62381669507845F5E35FF0EFD 
{
public:
	// System.Int32 Mirror.ConnectState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectState_t7924BD8196594BB62381669507845F5E35FF0EFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.EntityStateMessage
struct EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280 
{
public:
	// System.UInt32 Mirror.EntityStateMessage::netId
	uint32_t ___netId_0;
	// System.ArraySegment`1<System.Byte> Mirror.EntityStateMessage::payload
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280, ___payload_1)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_payload_1() const { return ___payload_1; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_1))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.EntityStateMessage
struct EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280_marshaled_pinvoke
{
	uint32_t ___netId_0;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_1;
};
// Native definition for COM marshalling of Mirror.EntityStateMessage
struct EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280_marshaled_com
{
	uint32_t ___netId_0;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_1;
};

// Mirror.NetworkReader
struct NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___buffer_0;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25, ___buffer_0)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_buffer_0() const { return ___buffer_0; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_0))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}
};


// Mirror.RpcMessage
struct RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8 
{
public:
	// System.UInt32 Mirror.RpcMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.RpcMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.RpcMessage::functionHash
	int32_t ___functionHash_2;
	// System.ArraySegment`1<System.Byte> Mirror.RpcMessage::payload
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8, ___payload_3)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_payload_3() const { return ___payload_3; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_3))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.RpcMessage
struct RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;
};
// Native definition for COM marshalling of Mirror.RpcMessage
struct RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_3;
};

// Mirror.SceneOperation
struct SceneOperation_tA100027114736D4678F7D3ECE988E79E7D9091D7 
{
public:
	// System.Byte Mirror.SceneOperation::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneOperation_tA100027114736D4678F7D3ECE988E79E7D9091D7, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SpawnMessage
struct SpawnMessage_t212E908511817556383D47E933676AB9809FEED7 
{
public:
	// System.UInt32 Mirror.SpawnMessage::netId
	uint32_t ___netId_0;
	// System.Boolean Mirror.SpawnMessage::isLocalPlayer
	bool ___isLocalPlayer_1;
	// System.Boolean Mirror.SpawnMessage::isOwner
	bool ___isOwner_2;
	// System.UInt64 Mirror.SpawnMessage::sceneId
	uint64_t ___sceneId_3;
	// System.Guid Mirror.SpawnMessage::assetId
	Guid_t  ___assetId_4;
	// UnityEngine.Vector3 Mirror.SpawnMessage::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_5;
	// UnityEngine.Quaternion Mirror.SpawnMessage::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_6;
	// UnityEngine.Vector3 Mirror.SpawnMessage::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_7;
	// System.ArraySegment`1<System.Byte> Mirror.SpawnMessage::payload
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_8;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_isLocalPlayer_1() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___isLocalPlayer_1)); }
	inline bool get_isLocalPlayer_1() const { return ___isLocalPlayer_1; }
	inline bool* get_address_of_isLocalPlayer_1() { return &___isLocalPlayer_1; }
	inline void set_isLocalPlayer_1(bool value)
	{
		___isLocalPlayer_1 = value;
	}

	inline static int32_t get_offset_of_isOwner_2() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___isOwner_2)); }
	inline bool get_isOwner_2() const { return ___isOwner_2; }
	inline bool* get_address_of_isOwner_2() { return &___isOwner_2; }
	inline void set_isOwner_2(bool value)
	{
		___isOwner_2 = value;
	}

	inline static int32_t get_offset_of_sceneId_3() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___sceneId_3)); }
	inline uint64_t get_sceneId_3() const { return ___sceneId_3; }
	inline uint64_t* get_address_of_sceneId_3() { return &___sceneId_3; }
	inline void set_sceneId_3(uint64_t value)
	{
		___sceneId_3 = value;
	}

	inline static int32_t get_offset_of_assetId_4() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___assetId_4)); }
	inline Guid_t  get_assetId_4() const { return ___assetId_4; }
	inline Guid_t * get_address_of_assetId_4() { return &___assetId_4; }
	inline void set_assetId_4(Guid_t  value)
	{
		___assetId_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___position_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_5() const { return ___position_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___rotation_6)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_6() const { return ___rotation_6; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___scale_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_7() const { return ___scale_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_payload_8() { return static_cast<int32_t>(offsetof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7, ___payload_8)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_payload_8() const { return ___payload_8; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_payload_8() { return &___payload_8; }
	inline void set_payload_8(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___payload_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_8))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.SpawnMessage
struct SpawnMessage_t212E908511817556383D47E933676AB9809FEED7_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_5;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_7;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_8;
};
// Native definition for COM marshalling of Mirror.SpawnMessage
struct SpawnMessage_t212E908511817556383D47E933676AB9809FEED7_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_5;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_7;
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___payload_8;
};

// Mirror.SyncMode
struct SyncMode_t14CF1DE5508251C64EF81B4FFE756051A4F7B4B3 
{
public:
	// System.Int32 Mirror.SyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SyncMode_t14CF1DE5508251C64EF81B4FFE756051A4F7B4B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.UnityEventNetworkConnection
struct UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6  : public UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C
{
public:

public:
};


// Mirror.Visibility
struct Visibility_t2871E0E4A1263D55CF889C8EF193533B5B24C0DF 
{
public:
	// System.Int32 Mirror.Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_t2871E0E4A1263D55CF889C8EF193533B5B24C0DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Uri/Flags
struct Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Ray
struct Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// Mirror.NetworkClient
struct NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980  : public RuntimeObject
{
public:

public:
};

struct NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt16,Mirror.NetworkMessageDelegate> Mirror.NetworkClient::handlers
	Dictionary_2_t99909EEA343A8A1D6DA0B5B239D06536D8E000E5 * ___handlers_0;
	// Mirror.NetworkConnection Mirror.NetworkClient::<connection>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CconnectionU3Ek__BackingField_1;
	// System.Boolean Mirror.NetworkClient::ready
	bool ___ready_2;
	// Mirror.NetworkIdentity Mirror.NetworkClient::<localPlayer>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3ClocalPlayerU3Ek__BackingField_3;
	// Mirror.ConnectState Mirror.NetworkClient::connectState
	int32_t ___connectState_4;
	// System.Action Mirror.NetworkClient::OnConnectedEvent
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnConnectedEvent_5;
	// System.Action Mirror.NetworkClient::OnDisconnectedEvent
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDisconnectedEvent_6;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject> Mirror.NetworkClient::prefabs
	Dictionary_2_t7FB24FD20970C09FA28EFD52B28887380B6EF210 * ___prefabs_7;
	// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.SpawnHandlerDelegate> Mirror.NetworkClient::spawnHandlers
	Dictionary_2_t7D0A2757EC1F68310A04665689B6CF9C7A5F2571 * ___spawnHandlers_8;
	// System.Collections.Generic.Dictionary`2<System.Guid,Mirror.UnSpawnDelegate> Mirror.NetworkClient::unspawnHandlers
	Dictionary_2_t3EFB1077128C9388F981BB217D8A7EDE4CB73B84 * ___unspawnHandlers_9;
	// System.Boolean Mirror.NetworkClient::isSpawnFinished
	bool ___isSpawnFinished_10;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkClient::spawnableObjects
	Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * ___spawnableObjects_11;
	// Mirror.Unbatcher Mirror.NetworkClient::unbatcher
	Unbatcher_tCBF2B2937231C19DAC75D73925FF34337CF554EC * ___unbatcher_12;
	// Mirror.InterestManagement Mirror.NetworkClient::aoi
	InterestManagement_tBBE575A899DE49E8ABA2601D8251035970EC7DBF * ___aoi_13;
	// System.Boolean Mirror.NetworkClient::isLoadingScene
	bool ___isLoadingScene_14;
	// System.Collections.Generic.List`1<System.UInt32> Mirror.NetworkClient::removeFromSpawned
	List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * ___removeFromSpawned_15;

public:
	inline static int32_t get_offset_of_handlers_0() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___handlers_0)); }
	inline Dictionary_2_t99909EEA343A8A1D6DA0B5B239D06536D8E000E5 * get_handlers_0() const { return ___handlers_0; }
	inline Dictionary_2_t99909EEA343A8A1D6DA0B5B239D06536D8E000E5 ** get_address_of_handlers_0() { return &___handlers_0; }
	inline void set_handlers_0(Dictionary_2_t99909EEA343A8A1D6DA0B5B239D06536D8E000E5 * value)
	{
		___handlers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___U3CconnectionU3Ek__BackingField_1)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CconnectionU3Ek__BackingField_1() const { return ___U3CconnectionU3Ek__BackingField_1; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CconnectionU3Ek__BackingField_1() { return &___U3CconnectionU3Ek__BackingField_1; }
	inline void set_U3CconnectionU3Ek__BackingField_1(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CconnectionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_ready_2() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___ready_2)); }
	inline bool get_ready_2() const { return ___ready_2; }
	inline bool* get_address_of_ready_2() { return &___ready_2; }
	inline void set_ready_2(bool value)
	{
		___ready_2 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPlayerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___U3ClocalPlayerU3Ek__BackingField_3)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3ClocalPlayerU3Ek__BackingField_3() const { return ___U3ClocalPlayerU3Ek__BackingField_3; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3ClocalPlayerU3Ek__BackingField_3() { return &___U3ClocalPlayerU3Ek__BackingField_3; }
	inline void set_U3ClocalPlayerU3Ek__BackingField_3(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3ClocalPlayerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalPlayerU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_connectState_4() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___connectState_4)); }
	inline int32_t get_connectState_4() const { return ___connectState_4; }
	inline int32_t* get_address_of_connectState_4() { return &___connectState_4; }
	inline void set_connectState_4(int32_t value)
	{
		___connectState_4 = value;
	}

	inline static int32_t get_offset_of_OnConnectedEvent_5() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___OnConnectedEvent_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnConnectedEvent_5() const { return ___OnConnectedEvent_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnConnectedEvent_5() { return &___OnConnectedEvent_5; }
	inline void set_OnConnectedEvent_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnConnectedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectedEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectedEvent_6() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___OnDisconnectedEvent_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDisconnectedEvent_6() const { return ___OnDisconnectedEvent_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDisconnectedEvent_6() { return &___OnDisconnectedEvent_6; }
	inline void set_OnDisconnectedEvent_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDisconnectedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_prefabs_7() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___prefabs_7)); }
	inline Dictionary_2_t7FB24FD20970C09FA28EFD52B28887380B6EF210 * get_prefabs_7() const { return ___prefabs_7; }
	inline Dictionary_2_t7FB24FD20970C09FA28EFD52B28887380B6EF210 ** get_address_of_prefabs_7() { return &___prefabs_7; }
	inline void set_prefabs_7(Dictionary_2_t7FB24FD20970C09FA28EFD52B28887380B6EF210 * value)
	{
		___prefabs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabs_7), (void*)value);
	}

	inline static int32_t get_offset_of_spawnHandlers_8() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___spawnHandlers_8)); }
	inline Dictionary_2_t7D0A2757EC1F68310A04665689B6CF9C7A5F2571 * get_spawnHandlers_8() const { return ___spawnHandlers_8; }
	inline Dictionary_2_t7D0A2757EC1F68310A04665689B6CF9C7A5F2571 ** get_address_of_spawnHandlers_8() { return &___spawnHandlers_8; }
	inline void set_spawnHandlers_8(Dictionary_2_t7D0A2757EC1F68310A04665689B6CF9C7A5F2571 * value)
	{
		___spawnHandlers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnHandlers_8), (void*)value);
	}

	inline static int32_t get_offset_of_unspawnHandlers_9() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___unspawnHandlers_9)); }
	inline Dictionary_2_t3EFB1077128C9388F981BB217D8A7EDE4CB73B84 * get_unspawnHandlers_9() const { return ___unspawnHandlers_9; }
	inline Dictionary_2_t3EFB1077128C9388F981BB217D8A7EDE4CB73B84 ** get_address_of_unspawnHandlers_9() { return &___unspawnHandlers_9; }
	inline void set_unspawnHandlers_9(Dictionary_2_t3EFB1077128C9388F981BB217D8A7EDE4CB73B84 * value)
	{
		___unspawnHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unspawnHandlers_9), (void*)value);
	}

	inline static int32_t get_offset_of_isSpawnFinished_10() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___isSpawnFinished_10)); }
	inline bool get_isSpawnFinished_10() const { return ___isSpawnFinished_10; }
	inline bool* get_address_of_isSpawnFinished_10() { return &___isSpawnFinished_10; }
	inline void set_isSpawnFinished_10(bool value)
	{
		___isSpawnFinished_10 = value;
	}

	inline static int32_t get_offset_of_spawnableObjects_11() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___spawnableObjects_11)); }
	inline Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * get_spawnableObjects_11() const { return ___spawnableObjects_11; }
	inline Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 ** get_address_of_spawnableObjects_11() { return &___spawnableObjects_11; }
	inline void set_spawnableObjects_11(Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * value)
	{
		___spawnableObjects_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnableObjects_11), (void*)value);
	}

	inline static int32_t get_offset_of_unbatcher_12() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___unbatcher_12)); }
	inline Unbatcher_tCBF2B2937231C19DAC75D73925FF34337CF554EC * get_unbatcher_12() const { return ___unbatcher_12; }
	inline Unbatcher_tCBF2B2937231C19DAC75D73925FF34337CF554EC ** get_address_of_unbatcher_12() { return &___unbatcher_12; }
	inline void set_unbatcher_12(Unbatcher_tCBF2B2937231C19DAC75D73925FF34337CF554EC * value)
	{
		___unbatcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unbatcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_aoi_13() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___aoi_13)); }
	inline InterestManagement_tBBE575A899DE49E8ABA2601D8251035970EC7DBF * get_aoi_13() const { return ___aoi_13; }
	inline InterestManagement_tBBE575A899DE49E8ABA2601D8251035970EC7DBF ** get_address_of_aoi_13() { return &___aoi_13; }
	inline void set_aoi_13(InterestManagement_tBBE575A899DE49E8ABA2601D8251035970EC7DBF * value)
	{
		___aoi_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aoi_13), (void*)value);
	}

	inline static int32_t get_offset_of_isLoadingScene_14() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___isLoadingScene_14)); }
	inline bool get_isLoadingScene_14() const { return ___isLoadingScene_14; }
	inline bool* get_address_of_isLoadingScene_14() { return &___isLoadingScene_14; }
	inline void set_isLoadingScene_14(bool value)
	{
		___isLoadingScene_14 = value;
	}

	inline static int32_t get_offset_of_removeFromSpawned_15() { return static_cast<int32_t>(offsetof(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields, ___removeFromSpawned_15)); }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * get_removeFromSpawned_15() const { return ___removeFromSpawned_15; }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 ** get_address_of_removeFromSpawned_15() { return &___removeFromSpawned_15; }
	inline void set_removeFromSpawned_15(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * value)
	{
		___removeFromSpawned_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFromSpawned_15), (void*)value);
	}
};


// Mirror.SceneMessage
struct SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47 
{
public:
	// System.String Mirror.SceneMessage::sceneName
	String_t* ___sceneName_0;
	// Mirror.SceneOperation Mirror.SceneMessage::sceneOperation
	uint8_t ___sceneOperation_1;
	// System.Boolean Mirror.SceneMessage::customHandling
	bool ___customHandling_2;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperation_1() { return static_cast<int32_t>(offsetof(SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47, ___sceneOperation_1)); }
	inline uint8_t get_sceneOperation_1() const { return ___sceneOperation_1; }
	inline uint8_t* get_address_of_sceneOperation_1() { return &___sceneOperation_1; }
	inline void set_sceneOperation_1(uint8_t value)
	{
		___sceneOperation_1 = value;
	}

	inline static int32_t get_offset_of_customHandling_2() { return static_cast<int32_t>(offsetof(SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47, ___customHandling_2)); }
	inline bool get_customHandling_2() const { return ___customHandling_2; }
	inline bool* get_address_of_customHandling_2() { return &___customHandling_2; }
	inline void set_customHandling_2(bool value)
	{
		___customHandling_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.SceneMessage
struct SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47_marshaled_pinvoke
{
	char* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};
// Native definition for COM marshalling of Mirror.SceneMessage
struct SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47_marshaled_com
{
	Il2CppChar* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Action`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.EntityStateMessage>
struct Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>
struct Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>
struct Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct Action_2_tDE724019003497875B1E8F63658DB7652C26F34B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>
struct Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct Action_2_t306D18212C9B62F1499CD039EF84E3296880F321  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Byte[]>
struct Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Char>
struct Action_2_t40925B0EE1207A395998710348464524F4248F45  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Double>
struct Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Single>
struct Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.String>
struct Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct Action_2_t0A3328221E03EB69862A26598F6466242D9824AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Uri>
struct Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>
struct Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>
struct Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>
struct Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Func_2_t1728381655CAD983688CD059AA1704C0BE018793  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>
struct Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.EntityStateMessage>
struct Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>
struct Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>
struct Func_2_t597BD424264436C8850D43108B60117716AD99CE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>
struct Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>
struct Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>
struct Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>
struct Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>
struct Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>
struct Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>
struct Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>
struct Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>
struct Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>
struct Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>
struct Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>
struct Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>
struct Func_2_tF450654C730338273C90867D294A49409661B91A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Boolean>
struct Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Byte>
struct Func_2_t698A81C87DAD21453BE12E465FEB469EED017279  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Byte[]>
struct Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Char>
struct Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Decimal>
struct Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Double>
struct Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Guid>
struct Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int16>
struct Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int32>
struct Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int64>
struct Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.SByte>
struct Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Single>
struct Func_2_t9A360B6748840F99170B6123237D1853036F7404  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.String>
struct Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt16>
struct Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt32>
struct Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt64>
struct Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Uri>
struct Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>
struct Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Color>
struct Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>
struct Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>
struct Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>
struct Func_2_t610BD76229872BDC0AADC016BA65D8293073C520  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>
struct Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>
struct Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>
struct Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>
struct Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>
struct Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>
struct Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>
struct Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>
struct Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>
struct Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>
struct UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnServerAuthenticated
	UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * ___OnServerAuthenticated_4;
	// Mirror.UnityEventNetworkConnection Mirror.NetworkAuthenticator::OnClientAuthenticated
	UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * ___OnClientAuthenticated_5;

public:
	inline static int32_t get_offset_of_OnServerAuthenticated_4() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D, ___OnServerAuthenticated_4)); }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * get_OnServerAuthenticated_4() const { return ___OnServerAuthenticated_4; }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 ** get_address_of_OnServerAuthenticated_4() { return &___OnServerAuthenticated_4; }
	inline void set_OnServerAuthenticated_4(UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * value)
	{
		___OnServerAuthenticated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerAuthenticated_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D, ___OnClientAuthenticated_5)); }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * get_OnClientAuthenticated_5() const { return ___OnClientAuthenticated_5; }
	inline UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 ** get_address_of_OnClientAuthenticated_5() { return &___OnClientAuthenticated_5; }
	inline void set_OnClientAuthenticated_5(UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * value)
	{
		___OnClientAuthenticated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientAuthenticated_5), (void*)value);
	}
};


// Mirror.NetworkBehaviour
struct NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Mirror.NetworkBehaviour::lastSyncTime
	float ___lastSyncTime_4;
	// Mirror.SyncMode Mirror.NetworkBehaviour::syncMode
	int32_t ___syncMode_5;
	// System.Single Mirror.NetworkBehaviour::syncInterval
	float ___syncInterval_6;
	// System.UInt64 Mirror.NetworkBehaviour::<syncVarDirtyBits>k__BackingField
	uint64_t ___U3CsyncVarDirtyBitsU3Ek__BackingField_7;
	// System.UInt64 Mirror.NetworkBehaviour::syncVarHookGuard
	uint64_t ___syncVarHookGuard_8;
	// System.Collections.Generic.List`1<Mirror.SyncObject> Mirror.NetworkBehaviour::syncObjects
	List_1_t6FC6097DFAA0B7DB09B56CD2A00B8CA58502FF21 * ___syncObjects_9;
	// Mirror.NetworkIdentity Mirror.NetworkBehaviour::<netIdentity>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3CnetIdentityU3Ek__BackingField_10;
	// System.Int32 Mirror.NetworkBehaviour::<ComponentIndex>k__BackingField
	int32_t ___U3CComponentIndexU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_lastSyncTime_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___lastSyncTime_4)); }
	inline float get_lastSyncTime_4() const { return ___lastSyncTime_4; }
	inline float* get_address_of_lastSyncTime_4() { return &___lastSyncTime_4; }
	inline void set_lastSyncTime_4(float value)
	{
		___lastSyncTime_4 = value;
	}

	inline static int32_t get_offset_of_syncMode_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___syncMode_5)); }
	inline int32_t get_syncMode_5() const { return ___syncMode_5; }
	inline int32_t* get_address_of_syncMode_5() { return &___syncMode_5; }
	inline void set_syncMode_5(int32_t value)
	{
		___syncMode_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___syncInterval_6)); }
	inline float get_syncInterval_6() const { return ___syncInterval_6; }
	inline float* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(float value)
	{
		___syncInterval_6 = value;
	}

	inline static int32_t get_offset_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___U3CsyncVarDirtyBitsU3Ek__BackingField_7)); }
	inline uint64_t get_U3CsyncVarDirtyBitsU3Ek__BackingField_7() const { return ___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CsyncVarDirtyBitsU3Ek__BackingField_7() { return &___U3CsyncVarDirtyBitsU3Ek__BackingField_7; }
	inline void set_U3CsyncVarDirtyBitsU3Ek__BackingField_7(uint64_t value)
	{
		___U3CsyncVarDirtyBitsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_syncVarHookGuard_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___syncVarHookGuard_8)); }
	inline uint64_t get_syncVarHookGuard_8() const { return ___syncVarHookGuard_8; }
	inline uint64_t* get_address_of_syncVarHookGuard_8() { return &___syncVarHookGuard_8; }
	inline void set_syncVarHookGuard_8(uint64_t value)
	{
		___syncVarHookGuard_8 = value;
	}

	inline static int32_t get_offset_of_syncObjects_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___syncObjects_9)); }
	inline List_1_t6FC6097DFAA0B7DB09B56CD2A00B8CA58502FF21 * get_syncObjects_9() const { return ___syncObjects_9; }
	inline List_1_t6FC6097DFAA0B7DB09B56CD2A00B8CA58502FF21 ** get_address_of_syncObjects_9() { return &___syncObjects_9; }
	inline void set_syncObjects_9(List_1_t6FC6097DFAA0B7DB09B56CD2A00B8CA58502FF21 * value)
	{
		___syncObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObjects_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdentityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___U3CnetIdentityU3Ek__BackingField_10)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3CnetIdentityU3Ek__BackingField_10() const { return ___U3CnetIdentityU3Ek__BackingField_10; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3CnetIdentityU3Ek__BackingField_10() { return &___U3CnetIdentityU3Ek__BackingField_10; }
	inline void set_U3CnetIdentityU3Ek__BackingField_10(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3CnetIdentityU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetIdentityU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CComponentIndexU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD8839270656D1FAAD806F2AADCB549AC391ADC83, ___U3CComponentIndexU3Ek__BackingField_11)); }
	inline int32_t get_U3CComponentIndexU3Ek__BackingField_11() const { return ___U3CComponentIndexU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CComponentIndexU3Ek__BackingField_11() { return &___U3CComponentIndexU3Ek__BackingField_11; }
	inline void set_U3CComponentIndexU3Ek__BackingField_11(int32_t value)
	{
		___U3CComponentIndexU3Ek__BackingField_11 = value;
	}
};


// Mirror.NetworkIdentity
struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_4;
	// System.Boolean Mirror.NetworkIdentity::<isServer>k__BackingField
	bool ___U3CisServerU3Ek__BackingField_5;
	// System.Boolean Mirror.NetworkIdentity::<isLocalPlayer>k__BackingField
	bool ___U3CisLocalPlayerU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkIdentity::observers
	Dictionary_2_tB1DFFB0099DFD718B9150DB936D216DA3E4D7EDF * ___observers_8;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_9;
	// System.UInt64 Mirror.NetworkIdentity::sceneId
	uint64_t ___sceneId_10;
	// System.Boolean Mirror.NetworkIdentity::serverOnly
	bool ___serverOnly_11;
	// System.Boolean Mirror.NetworkIdentity::destroyCalled
	bool ___destroyCalled_12;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___U3CconnectionToServerU3Ek__BackingField_13;
	// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::_connectionToClient
	NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * ____connectionToClient_14;
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::<NetworkBehaviours>k__BackingField
	NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* ___U3CNetworkBehavioursU3Ek__BackingField_16;
	// Mirror.NetworkVisibility Mirror.NetworkIdentity::<visibility>k__BackingField
	NetworkVisibility_tBBA494FA6735929A3998FC205790E82E03E906E5 * ___U3CvisibilityU3Ek__BackingField_17;
	// Mirror.Visibility Mirror.NetworkIdentity::visible
	int32_t ___visible_18;
	// Mirror.NetworkIdentitySerialization Mirror.NetworkIdentity::lastSerialization
	NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E  ___lastSerialization_19;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_20;
	// System.Boolean Mirror.NetworkIdentity::hasSpawned
	bool ___hasSpawned_24;
	// System.Boolean Mirror.NetworkIdentity::<SpawnedFromInstantiate>k__BackingField
	bool ___U3CSpawnedFromInstantiateU3Ek__BackingField_25;
	// System.Boolean Mirror.NetworkIdentity::clientStarted
	bool ___clientStarted_26;
	// System.Boolean Mirror.NetworkIdentity::hadAuthority
	bool ___hadAuthority_28;

public:
	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CisClientU3Ek__BackingField_4)); }
	inline bool get_U3CisClientU3Ek__BackingField_4() const { return ___U3CisClientU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_4() { return &___U3CisClientU3Ek__BackingField_4; }
	inline void set_U3CisClientU3Ek__BackingField_4(bool value)
	{
		___U3CisClientU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisServerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CisServerU3Ek__BackingField_5)); }
	inline bool get_U3CisServerU3Ek__BackingField_5() const { return ___U3CisServerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisServerU3Ek__BackingField_5() { return &___U3CisServerU3Ek__BackingField_5; }
	inline void set_U3CisServerU3Ek__BackingField_5(bool value)
	{
		___U3CisServerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisLocalPlayerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CisLocalPlayerU3Ek__BackingField_6)); }
	inline bool get_U3CisLocalPlayerU3Ek__BackingField_6() const { return ___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisLocalPlayerU3Ek__BackingField_6() { return &___U3CisLocalPlayerU3Ek__BackingField_6; }
	inline void set_U3CisLocalPlayerU3Ek__BackingField_6(bool value)
	{
		___U3CisLocalPlayerU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3ChasAuthorityU3Ek__BackingField_7)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_7() const { return ___U3ChasAuthorityU3Ek__BackingField_7; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_7() { return &___U3ChasAuthorityU3Ek__BackingField_7; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_7(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_observers_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___observers_8)); }
	inline Dictionary_2_tB1DFFB0099DFD718B9150DB936D216DA3E4D7EDF * get_observers_8() const { return ___observers_8; }
	inline Dictionary_2_tB1DFFB0099DFD718B9150DB936D216DA3E4D7EDF ** get_address_of_observers_8() { return &___observers_8; }
	inline void set_observers_8(Dictionary_2_tB1DFFB0099DFD718B9150DB936D216DA3E4D7EDF * value)
	{
		___observers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CnetIdU3Ek__BackingField_9)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_9() const { return ___U3CnetIdU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_9() { return &___U3CnetIdU3Ek__BackingField_9; }
	inline void set_U3CnetIdU3Ek__BackingField_9(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sceneId_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___sceneId_10)); }
	inline uint64_t get_sceneId_10() const { return ___sceneId_10; }
	inline uint64_t* get_address_of_sceneId_10() { return &___sceneId_10; }
	inline void set_sceneId_10(uint64_t value)
	{
		___sceneId_10 = value;
	}

	inline static int32_t get_offset_of_serverOnly_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___serverOnly_11)); }
	inline bool get_serverOnly_11() const { return ___serverOnly_11; }
	inline bool* get_address_of_serverOnly_11() { return &___serverOnly_11; }
	inline void set_serverOnly_11(bool value)
	{
		___serverOnly_11 = value;
	}

	inline static int32_t get_offset_of_destroyCalled_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___destroyCalled_12)); }
	inline bool get_destroyCalled_12() const { return ___destroyCalled_12; }
	inline bool* get_address_of_destroyCalled_12() { return &___destroyCalled_12; }
	inline void set_destroyCalled_12(bool value)
	{
		___destroyCalled_12 = value;
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CconnectionToServerU3Ek__BackingField_13)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_U3CconnectionToServerU3Ek__BackingField_13() const { return ___U3CconnectionToServerU3Ek__BackingField_13; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_13() { return &___U3CconnectionToServerU3Ek__BackingField_13; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_13(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__connectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ____connectionToClient_14)); }
	inline NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * get__connectionToClient_14() const { return ____connectionToClient_14; }
	inline NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD ** get_address_of__connectionToClient_14() { return &____connectionToClient_14; }
	inline void set__connectionToClient_14(NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * value)
	{
		____connectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkBehavioursU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CNetworkBehavioursU3Ek__BackingField_16)); }
	inline NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* get_U3CNetworkBehavioursU3Ek__BackingField_16() const { return ___U3CNetworkBehavioursU3Ek__BackingField_16; }
	inline NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E** get_address_of_U3CNetworkBehavioursU3Ek__BackingField_16() { return &___U3CNetworkBehavioursU3Ek__BackingField_16; }
	inline void set_U3CNetworkBehavioursU3Ek__BackingField_16(NetworkBehaviourU5BU5D_t0D4AB6368E07D49B1283AF28C12050F32CF3C33E* value)
	{
		___U3CNetworkBehavioursU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkBehavioursU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvisibilityU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CvisibilityU3Ek__BackingField_17)); }
	inline NetworkVisibility_tBBA494FA6735929A3998FC205790E82E03E906E5 * get_U3CvisibilityU3Ek__BackingField_17() const { return ___U3CvisibilityU3Ek__BackingField_17; }
	inline NetworkVisibility_tBBA494FA6735929A3998FC205790E82E03E906E5 ** get_address_of_U3CvisibilityU3Ek__BackingField_17() { return &___U3CvisibilityU3Ek__BackingField_17; }
	inline void set_U3CvisibilityU3Ek__BackingField_17(NetworkVisibility_tBBA494FA6735929A3998FC205790E82E03E906E5 * value)
	{
		___U3CvisibilityU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvisibilityU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_visible_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___visible_18)); }
	inline int32_t get_visible_18() const { return ___visible_18; }
	inline int32_t* get_address_of_visible_18() { return &___visible_18; }
	inline void set_visible_18(int32_t value)
	{
		___visible_18 = value;
	}

	inline static int32_t get_offset_of_lastSerialization_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___lastSerialization_19)); }
	inline NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E  get_lastSerialization_19() const { return ___lastSerialization_19; }
	inline NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E * get_address_of_lastSerialization_19() { return &___lastSerialization_19; }
	inline void set_lastSerialization_19(NetworkIdentitySerialization_tBE9A9A5AEB75FD49EBD1BA25157FF563C5D8981E  value)
	{
		___lastSerialization_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_19))->___ownerWriter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___lastSerialization_19))->___observersWriter_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AssetId_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___m_AssetId_20)); }
	inline String_t* get_m_AssetId_20() const { return ___m_AssetId_20; }
	inline String_t** get_address_of_m_AssetId_20() { return &___m_AssetId_20; }
	inline void set_m_AssetId_20(String_t* value)
	{
		___m_AssetId_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_20), (void*)value);
	}

	inline static int32_t get_offset_of_hasSpawned_24() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___hasSpawned_24)); }
	inline bool get_hasSpawned_24() const { return ___hasSpawned_24; }
	inline bool* get_address_of_hasSpawned_24() { return &___hasSpawned_24; }
	inline void set_hasSpawned_24(bool value)
	{
		___hasSpawned_24 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedFromInstantiateU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___U3CSpawnedFromInstantiateU3Ek__BackingField_25)); }
	inline bool get_U3CSpawnedFromInstantiateU3Ek__BackingField_25() const { return ___U3CSpawnedFromInstantiateU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CSpawnedFromInstantiateU3Ek__BackingField_25() { return &___U3CSpawnedFromInstantiateU3Ek__BackingField_25; }
	inline void set_U3CSpawnedFromInstantiateU3Ek__BackingField_25(bool value)
	{
		___U3CSpawnedFromInstantiateU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_clientStarted_26() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___clientStarted_26)); }
	inline bool get_clientStarted_26() const { return ___clientStarted_26; }
	inline bool* get_address_of_clientStarted_26() { return &___clientStarted_26; }
	inline void set_clientStarted_26(bool value)
	{
		___clientStarted_26 = value;
	}

	inline static int32_t get_offset_of_hadAuthority_28() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870, ___hadAuthority_28)); }
	inline bool get_hadAuthority_28() const { return ___hadAuthority_28; }
	inline bool* get_address_of_hadAuthority_28() { return &___hadAuthority_28; }
	inline void set_hadAuthority_28(bool value)
	{
		___hadAuthority_28 = value;
	}
};

struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkIdentity::spawned
	Dictionary_2_t87D371CBCAE4927881E558E63DBB1DF1ED9C4D36 * ___spawned_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkIdentity::sceneIds
	Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * ___sceneIds_21;
	// System.UInt32 Mirror.NetworkIdentity::nextNetworkId
	uint32_t ___nextNetworkId_22;
	// Mirror.NetworkIdentity/ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * ___clientAuthorityCallback_23;
	// Mirror.NetworkIdentity Mirror.NetworkIdentity::previousLocalPlayer
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___previousLocalPlayer_27;

public:
	inline static int32_t get_offset_of_spawned_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___spawned_15)); }
	inline Dictionary_2_t87D371CBCAE4927881E558E63DBB1DF1ED9C4D36 * get_spawned_15() const { return ___spawned_15; }
	inline Dictionary_2_t87D371CBCAE4927881E558E63DBB1DF1ED9C4D36 ** get_address_of_spawned_15() { return &___spawned_15; }
	inline void set_spawned_15(Dictionary_2_t87D371CBCAE4927881E558E63DBB1DF1ED9C4D36 * value)
	{
		___spawned_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_15), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIds_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___sceneIds_21)); }
	inline Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * get_sceneIds_21() const { return ___sceneIds_21; }
	inline Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 ** get_address_of_sceneIds_21() { return &___sceneIds_21; }
	inline void set_sceneIds_21(Dictionary_2_t5817B71E495C711F50FD63606313B1F2259EC065 * value)
	{
		___sceneIds_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneIds_21), (void*)value);
	}

	inline static int32_t get_offset_of_nextNetworkId_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___nextNetworkId_22)); }
	inline uint32_t get_nextNetworkId_22() const { return ___nextNetworkId_22; }
	inline uint32_t* get_address_of_nextNetworkId_22() { return &___nextNetworkId_22; }
	inline void set_nextNetworkId_22(uint32_t value)
	{
		___nextNetworkId_22 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_tAEAA8B0506C32E8378FB6AA7C1EC405DEFEEC02D * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_previousLocalPlayer_27() { return static_cast<int32_t>(offsetof(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870_StaticFields, ___previousLocalPlayer_27)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_previousLocalPlayer_27() const { return ___previousLocalPlayer_27; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_previousLocalPlayer_27() { return &___previousLocalPlayer_27; }
	inline void set_previousLocalPlayer_27(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___previousLocalPlayer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousLocalPlayer_27), (void*)value);
	}
};


// Mirror.Authenticators.BasicAuthenticator
struct BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE  : public NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D
{
public:
	// System.String Mirror.Authenticators.BasicAuthenticator::username
	String_t* ___username_6;
	// System.String Mirror.Authenticators.BasicAuthenticator::password
	String_t* ___password_7;
	// System.Boolean Mirror.Authenticators.BasicAuthenticator::ServerAuthFailed
	bool ___ServerAuthFailed_8;

public:
	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_6), (void*)value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_7), (void*)value);
	}

	inline static int32_t get_offset_of_ServerAuthFailed_8() { return static_cast<int32_t>(offsetof(BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE, ___ServerAuthFailed_8)); }
	inline bool get_ServerAuthFailed_8() const { return ___ServerAuthFailed_8; }
	inline bool* get_address_of_ServerAuthFailed_8() { return &___ServerAuthFailed_8; }
	inline void set_ServerAuthFailed_8(bool value)
	{
		___ServerAuthFailed_8 = value;
	}
};


// Mirror.Authenticators.TimeoutAuthenticator
struct TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C  : public NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D
{
public:
	// Mirror.NetworkAuthenticator Mirror.Authenticators.TimeoutAuthenticator::authenticator
	NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * ___authenticator_6;
	// System.Single Mirror.Authenticators.TimeoutAuthenticator::timeout
	float ___timeout_7;

public:
	inline static int32_t get_offset_of_authenticator_6() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C, ___authenticator_6)); }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * get_authenticator_6() const { return ___authenticator_6; }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D ** get_address_of_authenticator_6() { return &___authenticator_6; }
	inline void set_authenticator_6(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * value)
	{
		___authenticator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_7() { return static_cast<int32_t>(offsetof(TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C, ___timeout_7)); }
	inline float get_timeout_7() const { return ___timeout_7; }
	inline float* get_address_of_timeout_7() { return &___timeout_7; }
	inline void set_timeout_7(float value)
	{
		___timeout_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m7520539EB0B7AC8559F26F242CB72E8B0BC5BF0B_gshared (Action_2_tF4F86EFFCDCC66299B5543A6A722427423918E76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_gshared (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Void Mirror.NetworkServer::UnregisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6_gshared (const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B_gshared (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___message0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Void System.Action`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4_gshared (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.NetworkClient::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(System.Action`1<!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57_gshared (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkClient::UnregisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42_gshared (const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581_gshared (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  ___message0, int32_t ___channelId1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mD9E4B2FC40BD6941F12936C924D0322037405DCB_gshared (Action_2_t05F0205EE790E2F22E5E2F7AE765EE5ADCEE78B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.SByte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m28A6019510FD95B70B8D23D00DC131F25F335567_gshared (Action_2_tA18047183F92984171A34936E67C06600FC004B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m0AAADC9DF10DD3FA29166F6A5AEE9F1504516A12_gshared (Action_2_t6343A470CAE0F9565593BE7629500BD401005B05 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m657B1B0C1E9AC8EB5EBD8CF1E13727FDACB91441_gshared (Action_2_t429E4750D84EBAC7EB494EB565EE0C8E1177C576 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m0ED3582307C2FD7338F3217577A23364591372F2_gshared (Action_2_tC11B4486EB4AA58093B8ED7718604D672420179B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m1836B9089B13E1702F2A947F8E32E3A30A919188_gshared (Action_2_tD0051F9DF92B9FECA64CA287A9A7925694BD763D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m313DC4AF3BFDD3A614E0295D7BCE4CB657F331E5_gshared (Action_2_t53108CC5A687E8B14821F06EE710306F23ED71BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC76514884285DE0D69904E32FB9EC320E8F51D49_gshared (Action_2_t88A472856F183AE803521FC39DAC3AE446810479 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE562EF9F287C7397622FD6979D0052CF865EC2BB_gshared (Action_2_t87A32F527B551C38E1744F73F62F0167862B74F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m836AB29CC7A89692AAC58B1B71DF0B288296BEBE_gshared (Action_2_t41072607CA683E5CBA8201B5F0B81B7442A50AA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m7C2A2534F3BB940B1B119EF406B119604514725F_gshared (Action_2_tF730F282D8C62A330ACE30E2B210DAF8CECB4A04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m0E9296CF8C65AE8745FA07B0E05F433D7C3171DC_gshared (Action_2_t592A6E9209F5BDDB2DD3455E9762B2C941AFF7C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Decimal>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8F038C65D23F30D34FFDEE00EB0DD1B7E0A908CF_gshared (Action_2_t05CE1570964528F8EB81521F87E9912301B29A0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m525A5CB7870BF6A7AA0A78D426846F34BB91C33B_gshared (Action_2_t06879D4BD9F0F2C9272DF4E8F1156BFE637E2E00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8D506DAD9A979E795149BFA62710C95DA4F44398_gshared (Action_2_t59C9E68A867D468F50C36E1D4D34A1EA4EC18D30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC2A10E089EE5BE3E1E5F6B13C5C16E5BA68B3886_gshared (Action_2_tF3B8F15DE1E6E2A949F669A672050C44E92C2140 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m60D9581FB6D7B2E525BAF930C43D7FFD6FBE32BB_gshared (Action_2_t2F5AF4A5A234D3C8CB4DD4B3E4C1B330D4D44BA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB3020EC4707AA3E87B14C137890E219C05E84A30_gshared (Action_2_t37422F42F09D61FECACAE02AE84712B005E3F851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m7158879E2E8A2FC64F70F33B71DC0ABB7C1414A5_gshared (Action_2_tB0F9EC6D4318CA63A01DDB9F16ECE841B8BE9DE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m1A42A2F1530BE3772F7C68C8D05F1662C1DDA036_gshared (Action_2_t910AE5A0783DD1F7D9592A8514368283179D22EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB3449F620D027EFD90DB3C7B886F7F310249F3BA_gshared (Action_2_t83C8FD51565BF1191DE3889480E7068377E3B15D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m31E14BD0A5BC992096A22EF878BB37447A8F5077_gshared (Action_2_t7F47A55704A5770239068D5DE78E46EE70DE5F4E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB79CDE394C5E79D5CF6AB1E21061D2C6701C7422_gshared (Action_2_t229FFA51168DEE74F7BD255D75D8C08051D2E336 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m0494B459AAFAED7E4CFF9900C8FFA0DC71DA9C54_gshared (Action_2_t9F0CCE18D705B7792538DC7A16AE4656D6D76DC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m507996E7FDAB2420003D32ED3BEA0EF7B7A73C5A_gshared (Action_2_t734F2B7A4A56565A6817475FDFFA478E2DC7B4C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5FC71DA8767A3B332C3EB35467A7A129FED35683_gshared (Action_2_tCBBA4406306838C79AF84ADDFF63F62912E081EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Guid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m28BCC464F0F1D7F53C51E9FF57819E6883D6AF26_gshared (Action_2_t51C1ED5572057FD29BF6CFD0CE83435670F82F95 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5125B97412772D5CAAFFC20837A5026B057E02EE_gshared (Action_2_t03E8CF3A70627D762CBEA55F42A6DB315A4F217A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m91FCCCABC192BEC7AADE56785472BAC7F5A04673_gshared (Action_2_tE9AC936C32A8CDE8B110729EE4EC9D787E4E8FD7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9937254B3521FC1F6AE1F017E4464DDBBAC6C9A9_gshared (Action_2_t189818EA99699C42D0196A24536EE1F8520322AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE5F000167E993F8062C731442A8CE73932ADD0DA_gshared (Action_2_t6ED5997E22394DE7E9AC707D80217C0B4C85CBE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5807F3082999A0E69F4F6E6225AB012A941EDCFA_gshared (Action_2_tE79F2C8392E61A4C069D172902FC74DE25814FA8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC8CC72EA99B03141B3EF4DD56C8EF8FECE210E1E_gshared (Action_2_tE8D9416B255855E4AC9FE56AC3E69957B9C4CCA5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8FED0A81C6D5AF4BA5284425C2543B54B8D3C47D_gshared (Action_2_t55FF81AE4EC9D1892E4B4F02DF7C226AE7E32380 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC27DB17988C27B8CC01CB62382DCBD6F1519C917_gshared (Action_2_t4325B69B1F01AE3D1372F1FB1C507BCBB08025DB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mD54C23890FCDE1DDA1F45516C30ED959134A3263_gshared (Action_2_t0CD1E6251382C984E63F432FAF513295BDE2DE43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m452E31461BCA242A3DF0DF70E9F3E435743D4C28_gshared (Action_2_t5113D80256B10F3F5A8315868D98BA5D81FD79DB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m493F5C18964E44C058D19A7431B1E3457CFD74F7_gshared (Action_2_tDF0FF16640A553185BCFED43E92F904F63A284C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mA99E0BB6988BD993EED56654CEFAAA4F323C2515_gshared (Action_2_tE5ED6AFB38EB208516228C39B8DBE2CF029A6F7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.EntityStateMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAAFC1315C22AD835D9CFB7F63538AA1D8DD962DC_gshared (Action_2_tE714749BAFA9DDEEED17C39973E93D01132E0D8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF777084800A8E1E84B8B53AF42D2487D0DF908D8_gshared (Action_2_t10E12F5D3B468E64358E7C7E75787D4008F906B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m2E9C4DFD6FD101F8A6598994B6DEC5FD2B19E6C5_gshared (Action_2_t94C4DFFB2CC3D5B126DFFB8FCC31AD000E185206 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC2F60AE60DCEE301C1692AA321BFA237AB3ECA7F_gshared (Action_2_t474E007DA746CC4DB397A087EFA3C05A7CB9F22A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mBCCC45D0498B1B38A167319C798B12929F4441B6_gshared (Func_2_t69EA513D48AB15B9AF41D19647E00FCDD56CEF58 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.SByte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1768B9B2F330F038BD637BCDBB045F05C9AEFA65_gshared (Func_2_t6D422476C050307A851901BC024E38D2FF5B357D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m09DEA650AC9A78DA2B6328EE0D4E9209B96AF60C_gshared (Func_2_t35A82FD662231855ADBAD55597E202E12D19C71B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m674473A48235C573EDBDA1BD171577C9B3989AF1_gshared (Func_2_t2D44E871FE744671BB2DA5DFDE2AFA249336A068 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m96475C0B0CC9B4C508289D69AB9D3311AB47BFEE_gshared (Func_2_t1653BA8AEA4494A58AFAA4986F3E679B81D98AD4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m54408ED2EFA4F730EF559B45507C0009D7EC7917_gshared (Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF8A0CBB2C1A0ED69FB51F2DBEC612D04876237F1_gshared (Func_2_tE499B0DC827151EE1184263C0158F0659D83F51A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5209BD6F70BB1BC7C5782B4E74474ECF1A28EF11_gshared (Func_2_t82B378444729B3A0021330940E7867B6D348F383 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB9AF1DCE724F9622E740B35DCA4A40FA934CDDE_gshared (Func_2_t7BA70DBF573F9E47309559529537D32BFE386C63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEF1869A775C212DFEF4D2F445BB6B3BE160A035B_gshared (Func_2_t589A4145FEA383C8A0740F08D3B674F8A50FD666 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB46F32FCE993CB418A036712D1221B9F60CA3219_gshared (Func_2_tBF6AC9AFBCEB2E4108A595A6FC86DF1C45D76201 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Decimal>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m508659ED01B9175079D708BB2E2A4187E864B524_gshared (Func_2_t299520B8082D54DE1C0F8105446C89BDC2AAB5A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAEFDBDE3D809876CAFD7267DD9C6DD3E45502A6E_gshared (Func_2_tB16ADD39DE5859118BFAF071A3BB6B39F0A070C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9B6EE6AFB259F27B984DBEA3B6BB00B4F7D606D9_gshared (Func_2_t984BD41FEBA1BE0CF7831F79B0ACD53E4EC1BE51 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8257B0E8D725A44DFE7A27AB5B73ED867C47A496_gshared (Func_2_t18276F0761CDBAAE9389047E4065B9BDAD0BD342 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA921C6E9D5F3BBB3C79929973BB7DC79B2867578_gshared (Func_2_t57D5F55852D17203B700DFEA64E7315B7F71804F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEDDB0CF202F93F21C27F246D513DB42ABC8C0B72_gshared (Func_2_t65800DC8E0FCEC0F1CD26BB339EC491738BE5694 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mBAFE059F04378A129420862BCF1D68BBCC6E7383_gshared (Func_2_t4E3EBA601DF70158AEC31C75868B2CC5E16F56D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1FD3CB97451F3F22929B53256ED754ECFB3753D3_gshared (Func_2_t3A9D40790D3BE3F8A0A22A2D474337EE6D08EF35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE5EED977C2B4C35A3F9C399E53991A5395EE6468_gshared (Func_2_tCCFFE9DC17C436D23E68DBDCC4C947E73C11A27E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m671D33E6CB1E23447A998626D4C600B1F1454356_gshared (Func_2_tF87E519BB75F4904AB71546F9573E34A704B04BC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5457AECE8CEEA956C6D302561D253E29EF5E4659_gshared (Func_2_tA3F7228E2FBA453391B2AA250D31FBEC90A64F5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m0295A3DFDA93C1CAA75E148CF145514EDA6E9A9F_gshared (Func_2_t2450F0DFC89F3D428580601217C6325CC61165A0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m69D6FB5AE6D54BEC620ED84BCF1707D738AFE4E8_gshared (Func_2_tBDA38672EF01D58B30E800711AC87F8F584EED0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m336D3D7195B1B834F8609FB9875F6FD0D2D86805_gshared (Func_2_tB2535BAC6531F67692279C1202B85178D8681DD0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Guid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2A48A8ABD2D2A5413C9156B0D7358942DD3E86CB_gshared (Func_2_t7A522573DBFFDD917ACFCEA449593C7747B78B41 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB523EE996AFE8372B3E6DCBFB10D4FF1BABF29D7_gshared (Func_2_tC5704393745D2D9B2D18203DCDDDF2EA234F5409 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m055353BCC1D18ACEC08892FE58E74196CE45861B_gshared (Func_2_tB85EE7631619F0345AF7E9B42AC91D2F17E22B3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m3A9B35B948B615987AE29B52D76C458D782D2258_gshared (Func_2_tAB7701C2C9CCB4A787FCC8A398D5A7C7AD3D663C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m08F0D2ED356CC35394D1D991D3442BA35D2CE21B_gshared (Func_2_t450953B544F1631EF08EC0FF2FDBC52329A5F992 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD6DEE985334D59138408C7D5E8B7630284D92B44_gshared (Func_2_tA7FEA01A3E247F686DA0AD5B1DBB18E0E2B88B03 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5376764072781A6C65383B78EC633BB12CD3F0EA_gshared (Func_2_t62073200495E12F1288EF3446E1BC24D423D7CC7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9EA7DB1B1FBE3AF93BEB8F167FB23AB9B39305A1_gshared (Func_2_tDBE3F6734719B9FD0DF7B587C1CBFC75D78CEAA7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9A39F9BB1D6D5EDF26E02677D52E789F9A8A16D7_gshared (Func_2_t24801AA16BB5288ADB96FB3FF9E04C42F474537F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9B691407FEC632B386CED03A3D19B6CDA63CA73C_gshared (Func_2_t1266E11C672AAB9212F74207BBD48606DAC9E384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAD87E9793C16746DFB5DD73A9FF55A9E155F71C9_gshared (Func_2_t840B4FDCB298B59F5AFEDB56061837ABDD25C860 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m6059F4A1B90BC7859F136BA2AC31E1F773155AB5_gshared (Func_2_tC8F35122FC914A2F063452AEDBEDF5E2C0A45D2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCB623A8A69AF52325ED772EE41D1F04EDDC8D2E6_gshared (Func_2_tADA7E8016C231453460B295C292441C9ACC3F064 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB91BA8982846BC2AA5587652AEB02E182C5E9C00_gshared (Func_2_tB9186CD2245675BD2BEDBFE4B3B6C9BF3A78454A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.EntityStateMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m34C6489052EE557C34017185A1C45E9B116A46DA_gshared (Func_2_tD19035E991F5A356CBDB03DEBDC461DEC104C501 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFA642D0C25E1EE6481025A34BD30638E19036668_gshared (Func_2_t4226989F223BB263366037E1BD0A856E164594CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m98BECE497C4729A89C98904E00BB78E1E44D6A51_gshared (Func_2_t60266A44E4BE85FCE00E008E65BD86400CE95C91 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFAAD0CFA9DB00651C00C39FEF29AF93EC859F1A6_gshared (Func_2_t5FB70F77E686B4D63187B74FB80E4028C9D813C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE7F0924107C8C5B9FC34F03C67ABAD1C6D0A6E3E_gshared (Func_2_tD6F3A1A3BDABFADBFB4E6B906917943221A21844 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Action`2<Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6 (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m7520539EB0B7AC8559F26F242CB72E8B0BC5BF0B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkServer::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(System.Action`2<Mirror.NetworkConnection,!!0>,System.Boolean)
inline void NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416 (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *, bool, const RuntimeMethod*))NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Void Mirror.NetworkServer::UnregisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>()
inline void NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6_gshared)(method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(!!0,System.Int32)
inline void NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___message0, int32_t ___channelId1, const RuntimeMethod* method)
{
	((  void (*) (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 , int32_t, const RuntimeMethod*))NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B_gshared)(__this, ___message0, ___channelId1, method);
}
// System.Void Mirror.NetworkAuthenticator::ServerAccept(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator_ServerAccept_m2C2DCC87B46E1AF188D77F40716BD2A3F8A80005 (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method);
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, float ___waitTime1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__9__ctor_mD8C47EFC458B513615E3E6354AC9F1632A119E34 (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Action`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4 (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Mirror.NetworkClient::RegisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>(System.Action`1<!!0>,System.Boolean)
inline void NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57 (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D * ___handler0, bool ___requireAuthentication1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D *, bool, const RuntimeMethod*))NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57_gshared)(___handler0, ___requireAuthentication1, method);
}
// System.Boolean Mirror.NetworkClient::UnregisterHandler<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>()
inline bool NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42_gshared)(method);
}
// Mirror.NetworkConnection Mirror.NetworkClient::get_connection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554_inline (const RuntimeMethod* method);
// System.Void Mirror.NetworkConnection::Send<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>(!!0,System.Int32)
inline void NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581 (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * __this, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  ___message0, int32_t ___channelId1, const RuntimeMethod* method)
{
	((  void (*) (NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 , int32_t, const RuntimeMethod*))NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581_gshared)(__this, ___message0, ___channelId1, method);
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthResponseMessage(Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___msg0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::ClientAccept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator_ClientAccept_m9CE1B534A3502467407C93E928E81B0E12C403BB (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::ClientReject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator_ClientReject_m5A7344FEC9EEAF64425D6F548448C5C0B60E4414 (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4 (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Mirror.NetworkAuthenticator::ServerReject(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAuthenticator_ServerReject_m56A1C57CA27E86765F877980CDFC6B77F6683226 (NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.NetworkConnection>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99 (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C * __this, UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C *, UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *, const RuntimeMethod*))UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared)(__this, ___call0, method);
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method);
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__9__ctor_m4A61D559B9EF8638F59F898BCB2D3E7A84C417DD (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Mirror.NetworkConnection>::Invoke(!0)
inline void UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919 (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t25257E5311C36244A0215CF8218D2D73993A020C *, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method);
// System.String Mirror.NetworkReaderExtensions::ReadString(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// Mirror.SceneOperation Mirror.GeneratedNetworkCode::_Read_Mirror.SceneOperation(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkReaderExtensions::ReadBool(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Byte Mirror.NetworkReaderExtensions::ReadByte(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneOperation(Mirror.NetworkWriter,Mirror.SceneOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBool(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, bool ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteByte(Mirror.NetworkWriter,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkReaderExtensions::ReadUInt(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Int32 Mirror.NetworkReaderExtensions::ReadInt(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> Mirror.NetworkReaderExtensions::ReadBytesAndSizeSegment(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteInt(Mirror.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSizeSegment(Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___buffer1, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkReaderExtensions::ReadULong(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkReaderExtensions_ReadULong_m240E007556EDA81FC4279A3774ED1898A6EA6BDD (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Guid Mirror.NetworkReaderExtensions::ReadGuid(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  NetworkReaderExtensions_ReadGuid_mF5051D5420D27EFE9528DEC1AA26B4737757D1E6 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.NetworkReaderExtensions::ReadVector3(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NetworkReaderExtensions_ReadVector3_mF8892E49F8CDAE6B3C738E6ABFC2130DA0B6709F (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// UnityEngine.Quaternion Mirror.NetworkReaderExtensions::ReadQuaternion(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  NetworkReaderExtensions_ReadQuaternion_mB76E21A340B13F01281C940362D6DFF0A2B26437 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteULong(Mirror.NetworkWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteULong_m489A66CF31742C7FDC0EFAD34134CC82651E5F79 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteGuid(Mirror.NetworkWriter,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteGuid_m0A123A3A718A0F3FDD467CCB9622DCAA90D617AE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, Guid_t  ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteVector3(Mirror.NetworkWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3_mBAE8D4DE624FBAC9F5D08EBF6470CFF2517C450F (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteQuaternion(Mirror.NetworkWriter,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteQuaternion_m53DA908E5BD159704B406BE0329A7B6EC41EA2AE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value1, const RuntimeMethod* method);
// System.Double Mirror.NetworkReaderExtensions::ReadDouble(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteDouble(Mirror.NetworkWriter,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, double ___value1, const RuntimeMethod* method);
// System.Void System.Action`2<Mirror.NetworkWriter,System.Byte>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2D815DB6B9D63E982524088E9B7139A09263AEE1 (Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD9E4B2FC40BD6941F12936C924D0322037405DCB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.SByte>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB6B3FC585308494667A356184F80F2DBE66CA9C0 (Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m28A6019510FD95B70B8D23D00DC131F25F335567_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m54103EF7379CFF63C35F8A5DD2A08748DC69A2E4 (Action_2_t40925B0EE1207A395998710348464524F4248F45 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t40925B0EE1207A395998710348464524F4248F45 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m0AAADC9DF10DD3FA29166F6A5AEE9F1504516A12_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m81022617AC6116A0A079BF2B036F7B9CF5F8C9D7 (Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m657B1B0C1E9AC8EB5EBD8CF1E13727FDACB91441_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt16>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF0D1BEBCACAA52DB77862E60784BB90A68E25386 (Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m0ED3582307C2FD7338F3217577A23364591372F2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int16>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m02617273A8BE9C0B3EEAA0A425A520451B2192C4 (Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1836B9089B13E1702F2A947F8E32E3A30A919188_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBF03F31AADEB3271E1EA7991998EBF4FCC3B83BB (Action_2_t0A3328221E03EB69862A26598F6466242D9824AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0A3328221E03EB69862A26598F6466242D9824AF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m313DC4AF3BFDD3A614E0295D7BCE4CB657F331E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m54570F73507D3CCEAD81B7A949E09A2E784CD728 (Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC76514884285DE0D69904E32FB9EC320E8F51D49_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt64>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m58B2261CDE5B716414C8A804911B7F873E38964B (Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE562EF9F287C7397622FD6979D0052CF865EC2BB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEADDB48F00AD9890E8CDB4B6A0C18BEF727BE119 (Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m836AB29CC7A89692AAC58B1B71DF0B288296BEBE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE05F66BE346DE3DE9350A92DFE359CCE5204EF26 (Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m7C2A2534F3BB940B1B119EF406B119604514725F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m299E51549DA95E4296A0D8B46333BA6F052EB649 (Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m0E9296CF8C65AE8745FA07B0E05F433D7C3171DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Decimal>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0BE950FEA6490AB326F80C4250E3D76309082A83 (Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8F038C65D23F30D34FFDEE00EB0DD1B7E0A908CF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB790C111B9F0E19E5012977C205142E82C3D28AA (Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mFBF9354947B9CCBF16AB4C41C6BFF56A62BF7B2E (Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m84029CE9709FCF881615909E631B78B571FD02E5 (Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m525A5CB7870BF6A7AA0A78D426846F34BB91C33B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4585C192C831599ADB087E6D2B6E169D56E2B533 (Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8D506DAD9A979E795149BFA62710C95DA4F44398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2373FED09B272983A8A35DAE4E80C1A33004EC22 (Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC2A10E089EE5BE3E1E5F6B13C5C16E5BA68B3886_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC0F791B15F4F605F533F59C4E0BF632320316675 (Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m60D9581FB6D7B2E525BAF930C43D7FFD6FBE32BB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3D8764A928978074A6111C0494524040E01FD798 (Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB3020EC4707AA3E87B14C137890E219C05E84A30_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m412D55B41569241805AA38C2351891B511A1BB2E (Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m7158879E2E8A2FC64F70F33B71DC0ABB7C1414A5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m138418EED9A02E0000C3AFDA5D14915778BE5661 (Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1A42A2F1530BE3772F7C68C8D05F1662C1DDA036_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA9BEF94712C4230080541C60D72F2B425BC6A19C (Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB3449F620D027EFD90DB3C7B886F7F310249F3BA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m726AC5430F97D346AC521B68F18F29F5483C056F (Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m31E14BD0A5BC992096A22EF878BB37447A8F5077_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB4387E5709C9EDC49EC76151FE53F25B8641AD04 (Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB79CDE394C5E79D5CF6AB1E21061D2C6701C7422_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m61FDDF49FCF1E57B7D94DAAD8AC61120F1100EC0 (Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m0494B459AAFAED7E4CFF9900C8FFA0DC71DA9C54_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA01DBDD8470F0112F21565CF58F8FDCD24BCDC06 (Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m507996E7FDAB2420003D32ED3BEA0EF7B7A73C5A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m939171154DBD3ACB579794BAC0E915C7D85BC17E (Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5FC71DA8767A3B332C3EB35467A7A129FED35683_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Guid>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC7BDE4D8C29E4F76B63896362624F1AFB13D01BD (Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m28BCC464F0F1D7F53C51E9FF57819E6883D6AF26_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4626DA187071DB49D1186D7AD201121BEBE8D9CD (Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9B703B75776D69C6FAB31EC9F8334AE14173438E (Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1CF3E048606312D85781FED6CC6794472FA57EF9 (Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mECAD02095BA6C60E73B40E4C9D2136AB72805D74 (Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF40893A335EFF87218E3BF810276950F525309D3 (Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m44E4631D19BE138B66C4D874FEFC44F92E07B22B (Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5125B97412772D5CAAFFC20837A5026B057E02EE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0BE9ADBD0DB77A9060311ED0FB1E31CFECFA7ABE (Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m91FCCCABC192BEC7AADE56785472BAC7F5A04673_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m589B45FE1E2B0143C15CE227E06BA236735E744A (Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m9937254B3521FC1F6AE1F017E4464DDBBAC6C9A9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE7543FD1692105363D20B0D6F097AA6853F565A3 (Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE5F000167E993F8062C731442A8CE73932ADD0DA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9F08FB1D55E703A6B7D430530CC5CEBD8A6C85CC (Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5807F3082999A0E69F4F6E6225AB012A941EDCFA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2235267C2908EA6D02BCAEA851931E7AAA8B67DD (Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC8CC72EA99B03141B3EF4DD56C8EF8FECE210E1E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7613F21D1BA48CBD54DA30F5327830A8DD705BB4 (Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8FED0A81C6D5AF4BA5284425C2543B54B8D3C47D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m01D6C98B78CC1795558B61A92E96CE22B3212E68 (Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC27DB17988C27B8CC01CB62382DCBD6F1519C917_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m479A979C8FDFD1FA738AB1540E94AE7FDE3FBE73 (Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mD54C23890FCDE1DDA1F45516C30ED959134A3263_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m54F0FDAAB7D4EFA3D9C7F4D8DBCD66F9566E2175 (Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m452E31461BCA242A3DF0DF70E9F3E435743D4C28_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0EBB84CCC6ED0222C1A9C215062AAB3DFE41B2DD (Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m493F5C18964E44C058D19A7431B1E3457CFD74F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA89E5A817D384EE64B5B7282CBF6104BADADC50D (Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mA99E0BB6988BD993EED56654CEFAAA4F323C2515_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.EntityStateMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m44A72DE5A0965D310F1FE2A84908B9D1DD775714 (Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mAAFC1315C22AD835D9CFB7F63538AA1D8DD962DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD1C90FAD9B546E0657C71C14E2AC3A236162A743 (Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF777084800A8E1E84B8B53AF42D2487D0DF908D8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8D16A04029C1C7D2007F971325FF1D79242A7225 (Action_2_tDE724019003497875B1E8F63658DB7652C26F34B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDE724019003497875B1E8F63658DB7652C26F34B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m2E9C4DFD6FD101F8A6598994B6DEC5FD2B19E6C5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4C7C7C14957ECB554AE918E4B9078597CA2CED75 (Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m7520539EB0B7AC8559F26F242CB72E8B0BC5BF0B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m999F35194EE4916C35D50A28C7569AF6EB11FDAA (Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC2F60AE60DCEE301C1692AA321BFA237AB3ECA7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Byte>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m01AD9FBAAF0B544302B224005CC681C9930EC277 (Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mBCCC45D0498B1B38A167319C798B12929F4441B6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.SByte>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD4CB71826A6A21C9082AC34C24A25AE65D2D1F1A (Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1768B9B2F330F038BD637BCDBB045F05C9AEFA65_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD9212DFB999EDF561E3967695ED6E10622E191DC (Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m09DEA650AC9A78DA2B6328EE0D4E9209B96AF60C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA55B0E648A4E20B1511BE4D0FC179FF519D025F0 (Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int16>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9B86E814D0EE72EDA0A54D4084405D7C8D9E6918 (Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m674473A48235C573EDBDA1BD171577C9B3989AF1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt16>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD286333868137BF85A8336FC1E2CA63EE50F2FF3 (Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m96475C0B0CC9B4C508289D69AB9D3311AB47BFEE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0C675173979310FDC48C82B73CF42AA2B89D00FD (Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m54408ED2EFA4F730EF559B45507C0009D7EC7917_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5EA4CFE00E036E2FAA797D554E3280CD97B1568E (Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF8A0CBB2C1A0ED69FB51F2DBEC612D04876237F1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF39D455DF3310699A3BBDD0DE79B47D82B5990B5 (Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5209BD6F70BB1BC7C5782B4E74474ECF1A28EF11_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAAD583B9AA9964A0744B85ED3D9B3CCC8F598825 (Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB9AF1DCE724F9622E740B35DCA4A40FA934CDDE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m11E96A4ADB4CA8D939B498743E46014B9348E475 (Func_2_t9A360B6748840F99170B6123237D1853036F7404 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9A360B6748840F99170B6123237D1853036F7404 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mEF1869A775C212DFEF4D2F445BB6B3BE160A035B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD20D7828B66CE686C779EE4632B411EE998C8D65 (Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB46F32FCE993CB418A036712D1221B9F60CA3219_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Decimal>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6062F4141E91D2BC37D0559AEF2E31764FCF422B (Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m508659ED01B9175079D708BB2E2A4187E864B524_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m23093F76796FDE176420A09E31F2C7C34F996475 (Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD2F066521551F7C47DA7690EF978FF36FC119CD1 (Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m316FD5676147CBF1145DA14B9AA5A61889F32005 (Func_2_tF450654C730338273C90867D294A49409661B91A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF450654C730338273C90867D294A49409661B91A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mAEFDBDE3D809876CAFD7267DD9C6DD3E45502A6E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC4F3C05EF7F881DD60766450AC52C7D2BB1F2490 (Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9B6EE6AFB259F27B984DBEA3B6BB00B4F7D606D9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA7D2CE32A0FF39A00D34F2C42A9EE49434690554 (Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8257B0E8D725A44DFE7A27AB5B73ED867C47A496_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB1EA53DA0C057962D1352D901372DACB92101D00 (Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA921C6E9D5F3BBB3C79929973BB7DC79B2867578_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2D6CCD3352487A85E53B6AC6C8699421EAE4BF8D (Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mEDDB0CF202F93F21C27F246D513DB42ABC8C0B72_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBB0C62146EAF207D4970419DD4B1B149E86D772A (Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mBAFE059F04378A129420862BCF1D68BBCC6E7383_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m585F131352B012B24C9B5174DE60745A630D92AB (Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1FD3CB97451F3F22929B53256ED754ECFB3753D3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m65E6859D99AF1E0E6F5FF85DD2067C06CC831BE5 (Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE5EED977C2B4C35A3F9C399E53991A5395EE6468_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF85ED4404B631A868BECA94BF0AEAAE5FA259F12 (Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m671D33E6CB1E23447A998626D4C600B1F1454356_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC7DE9BB4F20379E2FC582BE52979C2A94F556C99 (Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5457AECE8CEEA956C6D302561D253E29EF5E4659_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1658A7C64B250B0A09C6F5E259E54481ADB69938 (Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m0295A3DFDA93C1CAA75E148CF145514EDA6E9A9F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m00D28A9C18AB209910AAA3D0785A8419AF9AB895 (Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m69D6FB5AE6D54BEC620ED84BCF1707D738AFE4E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7D6BF024B95CE683DB4017E62FC583265FDD8DB3 (Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m336D3D7195B1B834F8609FB9875F6FD0D2D86805_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Guid>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF1A3634FB7C5F17CAA9DAD1910F8F0AD146687A6 (Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2A48A8ABD2D2A5413C9156B0D7358942DD3E86CB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB9C68EF9E302DE8C95506D74105D38157A7209EE (Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD25737902751766E0EDB44884827D16A2549753C (Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD7DAAB9441FD46B1525FE1D0FDE0437780B1EB98 (Func_2_t597BD424264436C8850D43108B60117716AD99CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t597BD424264436C8850D43108B60117716AD99CE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1608C4AFB23AF8B729D351853415CE4DA0742646 (Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0FCB7EF250BEAE6CEF3EE4A30665E95B202D074A (Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB523EE996AFE8372B3E6DCBFB10D4FF1BABF29D7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6BE7167086AA3E6881509E66CBEC5A27F5FC60CD (Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m65AEED96E6D7457711214F1B359E51242D70BDD7 (Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m055353BCC1D18ACEC08892FE58E74196CE45861B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1C0F50205A7E807525669CFE20984A28E26B535F (Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3A9B35B948B615987AE29B52D76C458D782D2258_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8E52D37C2FF38F8B84D60E0AB8F731D1096AC083 (Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m08F0D2ED356CC35394D1D991D3442BA35D2CE21B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m53716F485A123F63E390E4FF6AA84B5191FA64C8 (Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mD6DEE985334D59138408C7D5E8B7630284D92B44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF73D703CB4103F897E2CFC8785C6B2D73FE0F520 (Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5376764072781A6C65383B78EC633BB12CD3F0EA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1F79DE1846A8EF1A507C07832D7053570FE93676 (Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9EA7DB1B1FBE3AF93BEB8F167FB23AB9B39305A1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0F58A97E34A168589EBE6BFE9A53BA4E0D333B4F (Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9A39F9BB1D6D5EDF26E02677D52E789F9A8A16D7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB77B30CDB11C83AF276817169AB7E5CFA5E55E4F (Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9B691407FEC632B386CED03A3D19B6CDA63CA73C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m693C5C4901E27CF091042335EDC65A543FDA7788 (Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mAD87E9793C16746DFB5DD73A9FF55A9E155F71C9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD0CE92B35012A2516E42C68A9828C3863634E419 (Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m6059F4A1B90BC7859F136BA2AC31E1F773155AB5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA74D3CF2B53350D8DC506210FD175E6F65D1F616 (Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCB623A8A69AF52325ED772EE41D1F04EDDC8D2E6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE3DB85A209C35E388B8780967CF82C384BDCF8C8 (Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB91BA8982846BC2AA5587652AEB02E182C5E9C00_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.EntityStateMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDF27A383813AB6BD09B022BF9706D2E652B6F529 (Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m34C6489052EE557C34017185A1C45E9B116A46DA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m215EC2F7C637B559E9565E7DD0339C710AAA9B5E (Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mFA642D0C25E1EE6481025A34BD30638E19036668_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC8D11F9EB8CDA11AF76948A9DB8D2827A40A0A92 (Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m98BECE497C4729A89C98904E00BB78E1E44D6A51_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC270B48DDCD673C6FB15D9406A7229DD941321EF (Func_2_t1728381655CAD983688CD059AA1704C0BE018793 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1728381655CAD983688CD059AA1704C0BE018793 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mFAAD0CFA9DB00651C00C39FEF29AF93EC859F1A6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE0A12F9122D435543EAC3BE4961B0341697881B3 (Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE7F0924107C8C5B9FC34F03C67ABAD1C6D0A6E3E_gshared)(__this, ___object0, ___method1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartServer_m0F0E7DBDC06BCC764FE6C79243F1F3BAF150CD0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkServer.RegisterHandler<AuthRequestMessage>(OnAuthRequestMessage, false);
		Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 * L_0 = (Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867 *)il2cpp_codegen_object_new(Action_2_t0A6EAC7E9DFAF9795533EAF91AEB9F3D341AE867_il2cpp_TypeInfo_var);
		Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2AA255C399E1766578470B84A66C6D7F024765C6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416(L_0, (bool)0, /*hidden argument*/NetworkServer_RegisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_mA4075388AB4FFD649BE8068A25C10B08494D4416_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStopServer_mAB7E23C90A5D71AE78EAD5BC426B6BDCA955F142 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStopServer_mAB7E23C90A5D71AE78EAD5BC426B6BDCA955F142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkServer.UnregisterHandler<AuthRequestMessage>();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6(/*hidden argument*/NetworkServer_UnregisterHandler_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m2481B133727A58B424EBC3259D8C349EF61A5AE6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnServerAuthenticate_mCE4E2E632A207B59A7CB160CD1F264E0B89C5B39 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthRequestMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthRequestMessage_mD340C7DA5AEAFE297609C12DE1B255E4C7CAEBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (msg.authUsername == username && msg.authPassword == password)
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_0 = ___msg1;
		String_t* L_1 = L_0.get_authUsername_0();
		String_t* L_2 = __this->get_username_6();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_4 = ___msg1;
		String_t* L_5 = L_4.get_authPassword_1();
		String_t* L_6 = __this->get_password_7();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 100,
		//     message = "Success"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 ));
		(&V_1)->set_code_0((uint8_t)((int32_t)100));
		(&V_1)->set_message_1(_stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_8 = V_1;
		V_0 = L_8;
		// conn.Send(authResponseMessage);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_9 = ___conn0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_10 = V_0;
		NullCheck(L_9);
		NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B(L_9, L_10, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B_RuntimeMethod_var);
		// ServerAccept(conn);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_11 = ___conn0;
		NetworkAuthenticator_ServerAccept_m2C2DCC87B46E1AF188D77F40716BD2A3F8A80005(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// AuthResponseMessage authResponseMessage = new AuthResponseMessage
		// {
		//     code = 200,
		//     message = "Invalid Credentials"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 ));
		(&V_1)->set_code_0((uint8_t)((int32_t)200));
		(&V_1)->set_message_1(_stringLiteral3EEBB38327CD8BBB45A632C28A42F5208A399629);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_12 = V_1;
		V_2 = L_12;
		// conn.Send(authResponseMessage);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_13 = ___conn0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_14 = V_2;
		NullCheck(L_13);
		NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B(L_13, L_14, 0, /*hidden argument*/NetworkConnection_Send_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m8EF908E06E59819436C2F8DD7C487389CD50ED5B_RuntimeMethod_var);
		// conn.isAuthenticated = false;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_15 = ___conn0;
		NullCheck(L_15);
		L_15->set_isAuthenticated_3((bool)0);
		// if (!ServerAuthFailed)
		bool L_16 = __this->get_ServerAuthFailed_8();
		if (L_16)
		{
			goto IL_00a8;
		}
	}
	{
		// ServerAuthFailed = true;
		__this->set_ServerAuthFailed_8((bool)1);
		// StartCoroutine(DelayedDisconnect(conn, 1));
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_17 = ___conn0;
		RuntimeObject* L_18 = BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8(__this, L_17, (1.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_18, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.BasicAuthenticator::DelayedDisconnect(Mirror.NetworkConnection,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, float ___waitTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_DelayedDisconnect_m54A9D6DCE6826A89A14845C9659663555B1B50E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * L_0 = (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 *)il2cpp_codegen_object_new(U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796_il2cpp_TypeInfo_var);
		U3CDelayedDisconnectU3Ed__9__ctor_mD8C47EFC458B513615E3E6354AC9F1632A119E34(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * L_2 = L_1;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		NullCheck(L_2);
		L_2->set_conn_4(L_3);
		U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * L_4 = L_2;
		float L_5 = ___waitTime1;
		NullCheck(L_4);
		L_4->set_waitTime_2(L_5);
		return L_4;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStartClient_mBF1208D96BF3F7D44A55C7FA290BC6DA81388E8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkClient.RegisterHandler<AuthResponseMessage>((Action<AuthResponseMessage>)OnAuthResponseMessage, false);
		Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D * L_0 = (Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D *)il2cpp_codegen_object_new(Action_1_t225248BC9DD1B48C1767540159A9A3DCA0F5BE8D_il2cpp_TypeInfo_var);
		Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4(L_0, __this, (intptr_t)((intptr_t)BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD78BF4C541D6FC021A8A1B0A9853C783395C1AF4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57(L_0, (bool)0, /*hidden argument*/NetworkClient_RegisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_mABC49578722A3ED326ACB3018FAF3BA44A1C9F57_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnStopClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnStopClient_mAB867A002551180D852D96DA4CCEDAA80B0219BE (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnStopClient_mAB867A002551180D852D96DA4CCEDAA80B0219BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkClient.UnregisterHandler<AuthResponseMessage>();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42(/*hidden argument*/NetworkClient_UnregisterHandler_TisAuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_m1E89867B5F1A053145D8F9CB5D4A4DDD25AD0A42_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnClientAuthenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnClientAuthenticate_mC1F9DB3F8F9DB4628282E06EACDF1CC4B79545BA (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnClientAuthenticate_mC1F9DB3F8F9DB4628282E06EACDF1CC4B79545BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// AuthRequestMessage authRequestMessage = new AuthRequestMessage
		// {
		//     authUsername = username,
		//     authPassword = password
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 ));
		String_t* L_0 = __this->get_username_6();
		(&V_1)->set_authUsername_0(L_0);
		String_t* L_1 = __this->get_password_7();
		(&V_1)->set_authPassword_1(L_1);
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_2 = V_1;
		V_0 = L_2;
		// NetworkClient.connection.Send(authRequestMessage);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554_inline(/*hidden argument*/NULL);
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_4 = V_0;
		NullCheck(L_3);
		NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581(L_3, L_4, 0, /*hidden argument*/NetworkConnection_Send_TisAuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_m221D2E487690EA4A7DA2B44B994B8305300C6581_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthResponseMessage(Mirror.NetworkConnection,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthResponseMessage_mF21759FC16810DD50B3EAC4A5506F726F8EB5050 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___msg1, const RuntimeMethod* method)
{
	{
		// public void OnAuthResponseMessage(NetworkConnection conn, AuthResponseMessage msg) => OnAuthResponseMessage(msg);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_0 = ___msg1;
		BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::OnAuthResponseMessage(Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicAuthenticator_OnAuthResponseMessage_mABF8123FA606F77D655F9B35413E89B6B0CB8AAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.code == 100)
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_0 = ___msg0;
		uint8_t L_1 = L_0.get_code_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0011;
		}
	}
	{
		// ClientAccept();
		NetworkAuthenticator_ClientAccept_m9CE1B534A3502467407C93E928E81B0E12C403BB(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0011:
	{
		// Debug.LogError($"Authentication Response: {msg.message}");
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_2 = ___msg0;
		String_t* L_3 = L_2.get_message_1();
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBB5EA3016445205A412037153C2EF6B08FBC6520, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_4, /*hidden argument*/NULL);
		// ClientReject();
		NetworkAuthenticator_ClientReject_m5A7344FEC9EEAF64425D6F548448C5C0B60E4414(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticator__ctor_mDAC8FD74BCB61056937C3E6D65C8588623AD4EB6 (BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * __this, const RuntimeMethod* method)
{
	{
		NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4(__this, /*hidden argument*/NULL);
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
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__9__ctor_mD8C47EFC458B513615E3E6354AC9F1632A119E34 (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__9_System_IDisposable_Dispose_m0BC7E4923FF53F0D7A8C779D3FA13E5293D32645 (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDisconnectU3Ed__9_MoveNext_mBBAF7CD80A7782D91973BA4EDAC7EDA4D40D2C6E (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__9_MoveNext_mBBAF7CD80A7782D91973BA4EDAC7EDA4D40D2C6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_4 = __this->get_waitTime_2();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ServerReject(conn);
		BasicAuthenticator_t6B696CC9E1EFEAF9DD34EE94DC00C9989547EBBE * L_6 = V_1;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_7 = __this->get_conn_4();
		NullCheck(L_6);
		NetworkAuthenticator_ServerReject_m56A1C57CA27E86765F877980CDFC6B77F6683226(L_6, L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED5F942A6BEF753211302152D44349C23ACA950B (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_Reset_m6B86F6D54FE681C8DDA3EA44047ABFF719C17685 (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_Reset_m6B86F6D54FE681C8DDA3EA44047ABFF719C17685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_Reset_m6B86F6D54FE681C8DDA3EA44047ABFF719C17685_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDisconnectU3Ed__9_System_Collections_IEnumerator_get_Current_m3C17403EA1433C8247EA37FA57B8C9EA79F08660 (U3CDelayedDisconnectU3Ed__9_t9D0EBC1DA39A79FEFCDABA953770F25AF972C796 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// Conversion methods for marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_pinvoke(const AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905& unmarshaled, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_pinvoke& marshaled)
{
	marshaled.___authUsername_0 = il2cpp_codegen_marshal_string(unmarshaled.get_authUsername_0());
	marshaled.___authPassword_1 = il2cpp_codegen_marshal_string(unmarshaled.get_authPassword_1());
}
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_pinvoke_back(const AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_pinvoke& marshaled, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905& unmarshaled)
{
	unmarshaled.set_authUsername_0(il2cpp_codegen_marshal_string_result(marshaled.___authUsername_0));
	unmarshaled.set_authPassword_1(il2cpp_codegen_marshal_string_result(marshaled.___authPassword_1));
}
// Conversion method for clean up from marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_pinvoke_cleanup(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___authUsername_0);
	marshaled.___authUsername_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___authPassword_1);
	marshaled.___authPassword_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_com(const AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905& unmarshaled, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_com& marshaled)
{
	marshaled.___authUsername_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_authUsername_0());
	marshaled.___authPassword_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_authPassword_1());
}
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_com_back(const AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_com& marshaled, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905& unmarshaled)
{
	unmarshaled.set_authUsername_0(il2cpp_codegen_marshal_bstring_result(marshaled.___authUsername_0));
	unmarshaled.set_authPassword_1(il2cpp_codegen_marshal_bstring_result(marshaled.___authPassword_1));
}
// Conversion method for clean up from marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
IL2CPP_EXTERN_C void AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshal_com_cleanup(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___authUsername_0);
	marshaled.___authUsername_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___authPassword_1);
	marshaled.___authPassword_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_pinvoke(const AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3& unmarshaled, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_pinvoke& marshaled)
{
	marshaled.___code_0 = unmarshaled.get_code_0();
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_pinvoke_back(const AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_pinvoke& marshaled, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3& unmarshaled)
{
	uint8_t unmarshaled_code_temp_0 = 0x0;
	unmarshaled_code_temp_0 = marshaled.___code_0;
	unmarshaled.set_code_0(unmarshaled_code_temp_0);
	unmarshaled.set_message_1(il2cpp_codegen_marshal_string_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_pinvoke_cleanup(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_com(const AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3& unmarshaled, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_com& marshaled)
{
	marshaled.___code_0 = unmarshaled.get_code_0();
	marshaled.___message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_message_1());
}
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_com_back(const AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_com& marshaled, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3& unmarshaled)
{
	uint8_t unmarshaled_code_temp_0 = 0x0;
	unmarshaled_code_temp_0 = marshaled.___code_0;
	unmarshaled.set_code_0(unmarshaled_code_temp_0);
	unmarshaled.set_message_1(il2cpp_codegen_marshal_bstring_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
IL2CPP_EXTERN_C void AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshal_com_cleanup(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.Authenticators.TimeoutAuthenticator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_Awake_m14C5821B626CB7A7755EC1202B6783B9478F3D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_1 = L_0->get_OnServerAuthenticated_4();
		UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * L_2 = (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *)il2cpp_codegen_object_new(UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99(L_2, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__2_0_mC0466F814ED12FF12AE26A2797CC53B1E727461B_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var);
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_3 = __this->get_authenticator_6();
		NullCheck(L_3);
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_4 = L_3->get_OnClientAuthenticated_5();
		UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 * L_5 = (UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387 *)il2cpp_codegen_object_new(UnityAction_1_tF9EC35E43939E783201EA3A2DB5BEB73610CA387_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99(L_5, __this, (intptr_t)((intptr_t)TimeoutAuthenticator_U3CAwakeU3Eb__2_1_mDEAB05F74B80593CF1419E04755EEFCC2799E974_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7C780033B9AAD022B03AD5988E4BF9AEA995FC99_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_mA0D063C7EA5039AA87541AB24C7CD3BE6D0C19EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStartServer_mEF0EC455747983ABB9BB515E2E69BC1423826C64 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStartServer();
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Mirror.NetworkAuthenticator::OnStartServer() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStopServer_m443306BE89D89F7A88369597AE29760FC8D749B1 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStopServer();
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Mirror.NetworkAuthenticator::OnStopServer() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStartClient_mD4A12B149F975557A0210ACE4E5D220C220BCEE2 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStartClient();
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkAuthenticator::OnStartClient() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnStopClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnStopClient_m5B1F3976252DF5FA82BC438DC9D10E4CE7A09BD5 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// authenticator.OnStopClient();
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void Mirror.NetworkAuthenticator::OnStopClient() */, L_0);
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnServerAuthenticate_m81C0488E17F37AC456F218B4920E13B4441A87A6 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	{
		// authenticator.OnServerAuthenticate(conn);
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___conn0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * >::Invoke(6 /* System.Void Mirror.NetworkAuthenticator::OnServerAuthenticate(Mirror.NetworkConnection) */, L_0, L_1);
		// if (timeout > 0)
		float L_2 = __this->get_timeout_7();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(conn));
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		RuntimeObject* L_4 = TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::OnClientAuthenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_OnClientAuthenticate_mFE96CD9C8DC4FBF7AA0E427ECAB816574E536C54 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_OnClientAuthenticate_mFE96CD9C8DC4FBF7AA0E427ECAB816574E536C54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticate();
		NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * L_0 = __this->get_authenticator_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void Mirror.NetworkAuthenticator::OnClientAuthenticate() */, L_0);
		// if (timeout > 0)
		float L_1 = __this->get_timeout_7();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// StartCoroutine(BeginAuthentication(NetworkClient.connection));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_2 = NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554_inline(/*hidden argument*/NULL);
		RuntimeObject* L_3 = TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167(__this, L_2, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Mirror.Authenticators.TimeoutAuthenticator::BeginAuthentication(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_BeginAuthentication_m61A864EA127F4C23C0A9EED3B743256C942CC167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * L_0 = (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F *)il2cpp_codegen_object_new(U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F_il2cpp_TypeInfo_var);
		U3CBeginAuthenticationU3Ed__9__ctor_m4A61D559B9EF8638F59F898BCB2D3E7A84C417DD(L_0, 0, /*hidden argument*/NULL);
		U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * L_2 = L_1;
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		NullCheck(L_2);
		L_2->set_conn_3(L_3);
		return L_2;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator__ctor_mD7952710285B873399795D100258BDD3E5C67857 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, const RuntimeMethod* method)
{
	{
		// public float timeout = 60;
		__this->set_timeout_7((60.0f));
		NetworkAuthenticator__ctor_m390AE6752D47C7FBDB586212B4DF6CD9955997F4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__2_0(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__2_0_mC0466F814ED12FF12AE26A2797CC53B1E727461B (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__2_0_mC0466F814ED12FF12AE26A2797CC53B1E727461B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnServerAuthenticated.AddListener(connection => OnServerAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_0 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnServerAuthenticated_4();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator::<Awake>b__2_1(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutAuthenticator_U3CAwakeU3Eb__2_1_mDEAB05F74B80593CF1419E04755EEFCC2799E974 (TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutAuthenticator_U3CAwakeU3Eb__2_1_mDEAB05F74B80593CF1419E04755EEFCC2799E974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// authenticator.OnClientAuthenticated.AddListener(connection => OnClientAuthenticated.Invoke(connection));
		UnityEventNetworkConnection_tD2CF6D5779168ECB723552310DA1EA5140F921D6 * L_0 = ((NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D *)__this)->get_OnClientAuthenticated_5();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_1 = ___connection0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mCC801146A42E8A6045CEB525B149D787F52E7919_RuntimeMethod_var);
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
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__9__ctor_m4A61D559B9EF8638F59F898BCB2D3E7A84C417DD (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__9_System_IDisposable_Dispose_m730CCD644BE39C5F901113255A0598F351E84D6A (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBeginAuthenticationU3Ed__9_MoveNext_m5B06058BC518B958C3FC684894F942CE8E282E04 (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__9_MoveNext_m5B06058BC518B958C3FC684894F942CE8E282E04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(timeout);
		TimeoutAuthenticator_t6C66F01F9DD9833FADEE0175EFAC81076074283C * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_timeout_7();
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_6 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!conn.isAuthenticated)
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_7 = __this->get_conn_3();
		NullCheck(L_7);
		bool L_8 = L_7->get_isAuthenticated_3();
		if (L_8)
		{
			goto IL_0057;
		}
	}
	{
		// conn.Disconnect();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_9 = __this->get_conn_3();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(8 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_9);
	}

IL_0057:
	{
		// }
		return (bool)0;
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41AC511DCB1D15CD5180B71B18E64F2525A5EED9 (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_Reset_m8BE43CCCA2BA82C71E9BFC4B67888BB4BEBDCA0E (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_Reset_m8BE43CCCA2BA82C71E9BFC4B67888BB4BEBDCA0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_Reset_m8BE43CCCA2BA82C71E9BFC4B67888BB4BEBDCA0E_RuntimeMethod_var);
	}
}
// System.Object Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBeginAuthenticationU3Ed__9_System_Collections_IEnumerator_get_Current_mE0015392911520EA040AEC1441B567CCAA1DCFEA (U3CBeginAuthenticationU3Ed__9_t55F487B06BD42A4E44C0F54E2F6CC1AA5B6E265F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// Mirror.ReadyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ReadyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632  GeneratedNetworkCode__Read_Mirror_ReadyMessage_m333E2438821BCE0308B276A0743C0F9B2A34ABA4 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632 ));
		ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ReadyMessage(Mirror.NetworkWriter,Mirror.ReadyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ReadyMessage_m464C7D44082690A88CD811FA5ECBAA0A0BA034ED (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ReadyMessage_t7781C3EA6ED346684B704E4D5D169572B4A98632  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.NotReadyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NotReadyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B  GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mDBCB8A1E137E48B9E3C2738D2F7C6C988BF68463 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B ));
		NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NotReadyMessage(Mirror.NetworkWriter,Mirror.NotReadyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NotReadyMessage_mF61ED5D3E74B9ACFFEEF9462E332F6D4F2DD38BC (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, NotReadyMessage_t8CDB885248D3D910295CC051F67D03D977ED212B  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.AddPlayerMessage Mirror.GeneratedNetworkCode::_Read_Mirror.AddPlayerMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D  GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m264FCFFBB1C505E01D3831668EAAD07BE031E898 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D ));
		AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.AddPlayerMessage(Mirror.NetworkWriter,Mirror.AddPlayerMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mB7A38860635D372F06A249BB2BC2FF8906FA1267 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, AddPlayerMessage_t6C10AF587CE4024204D8789B4C1E64EFD8E5959D  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.SceneMessage Mirror.GeneratedNetworkCode::_Read_Mirror.SceneMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  GeneratedNetworkCode__Read_Mirror_SceneMessage_mB2E4D466F252F16937F497C945EE936A4D22BBD4 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SceneMessage_mB2E4D466F252F16937F497C945EE936A4D22BBD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		String_t* L_1 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_0, /*hidden argument*/NULL);
		(&V_0)->set_sceneName_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		uint8_t L_3 = GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58(L_2, /*hidden argument*/NULL);
		(&V_0)->set_sceneOperation_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		bool L_5 = NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202(L_4, /*hidden argument*/NULL);
		(&V_0)->set_customHandling_2(L_5);
		SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  L_6 = V_0;
		return L_6;
	}
}
// Mirror.SceneOperation Mirror.GeneratedNetworkCode::_Read_Mirror.SceneOperation(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint8_t L_1 = NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151(L_0, /*hidden argument*/NULL);
		return (uint8_t)(L_1);
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneMessage(Mirror.NetworkWriter,Mirror.SceneMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneMessage_mD3D13D43D390D4CF287BF26421493BC3A025EDD6 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SceneMessage_mD3D13D43D390D4CF287BF26421493BC3A025EDD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  L_1 = ___value1;
		String_t* L_2 = L_1.get_sceneName_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  L_4 = ___value1;
		uint8_t L_5 = L_4.get_sceneOperation_1();
		GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		SceneMessage_t41D769BE66DAABD69C0E576AA8B945AC5F2BDF47  L_7 = ___value1;
		bool L_8 = L_7.get_customHandling_2();
		NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneOperation(Mirror.NetworkWriter,Mirror.SceneOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		uint8_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.CommandMessage Mirror.GeneratedNetworkCode::_Read_Mirror.CommandMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  GeneratedNetworkCode__Read_Mirror_CommandMessage_m30CF7613B628FCA060D3028BC1679FFC7687661C (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_CommandMessage_m30CF7613B628FCA060D3028BC1679FFC7687661C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		int32_t L_3 = NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E(L_2, /*hidden argument*/NULL);
		(&V_0)->set_componentIndex_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		int32_t L_5 = NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E(L_4, /*hidden argument*/NULL);
		(&V_0)->set_functionHash_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_7 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9(L_6, /*hidden argument*/NULL);
		(&V_0)->set_payload_3(L_7);
		CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  L_8 = V_0;
		return L_8;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.CommandMessage(Mirror.NetworkWriter,Mirror.CommandMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_CommandMessage_m129987B61F98C7AB0A413FC603DB15EE9D67F20C (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_CommandMessage_m129987B61F98C7AB0A413FC603DB15EE9D67F20C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  L_4 = ___value1;
		int32_t L_5 = L_4.get_componentIndex_1();
		NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  L_7 = ___value1;
		int32_t L_8 = L_7.get_functionHash_2();
		NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_9 = ___writer0;
		CommandMessage_t555282C9B5B8CFAC8CF36A12351FFFE5A4AE7A85  L_10 = ___value1;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_11 = L_10.get_payload_3();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.RpcMessage Mirror.GeneratedNetworkCode::_Read_Mirror.RpcMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  GeneratedNetworkCode__Read_Mirror_RpcMessage_mC1275440C09A8D01194C630FEAC86950A4820C19 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_RpcMessage_mC1275440C09A8D01194C630FEAC86950A4820C19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		int32_t L_3 = NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E(L_2, /*hidden argument*/NULL);
		(&V_0)->set_componentIndex_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		int32_t L_5 = NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E(L_4, /*hidden argument*/NULL);
		(&V_0)->set_functionHash_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_7 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9(L_6, /*hidden argument*/NULL);
		(&V_0)->set_payload_3(L_7);
		RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  L_8 = V_0;
		return L_8;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.RpcMessage(Mirror.NetworkWriter,Mirror.RpcMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_RpcMessage_mE1C70DD9843502F910207AE89277A7E1322EFD67 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_RpcMessage_mE1C70DD9843502F910207AE89277A7E1322EFD67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  L_4 = ___value1;
		int32_t L_5 = L_4.get_componentIndex_1();
		NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  L_7 = ___value1;
		int32_t L_8 = L_7.get_functionHash_2();
		NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_9 = ___writer0;
		RpcMessage_t654DE7A93F2C632C3014F7EC3455AB319F3AA4E8  L_10 = ___value1;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_11 = L_10.get_payload_3();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.SpawnMessage Mirror.GeneratedNetworkCode::_Read_Mirror.SpawnMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  GeneratedNetworkCode__Read_Mirror_SpawnMessage_m7D1F92A4AEB1A350E5552FD5FDE73F0E7096854F (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SpawnMessage_m7D1F92A4AEB1A350E5552FD5FDE73F0E7096854F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpawnMessage_t212E908511817556383D47E933676AB9809FEED7 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		bool L_3 = NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202(L_2, /*hidden argument*/NULL);
		(&V_0)->set_isLocalPlayer_1(L_3);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_4 = ___reader0;
		bool L_5 = NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202(L_4, /*hidden argument*/NULL);
		(&V_0)->set_isOwner_2(L_5);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_6 = ___reader0;
		uint64_t L_7 = NetworkReaderExtensions_ReadULong_m240E007556EDA81FC4279A3774ED1898A6EA6BDD(L_6, /*hidden argument*/NULL);
		(&V_0)->set_sceneId_3(L_7);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_8 = ___reader0;
		Guid_t  L_9 = NetworkReaderExtensions_ReadGuid_mF5051D5420D27EFE9528DEC1AA26B4737757D1E6(L_8, /*hidden argument*/NULL);
		(&V_0)->set_assetId_4(L_9);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_10 = ___reader0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = NetworkReaderExtensions_ReadVector3_mF8892E49F8CDAE6B3C738E6ABFC2130DA0B6709F(L_10, /*hidden argument*/NULL);
		(&V_0)->set_position_5(L_11);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_12 = ___reader0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = NetworkReaderExtensions_ReadQuaternion_mB76E21A340B13F01281C940362D6DFF0A2B26437(L_12, /*hidden argument*/NULL);
		(&V_0)->set_rotation_6(L_13);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_14 = ___reader0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = NetworkReaderExtensions_ReadVector3_mF8892E49F8CDAE6B3C738E6ABFC2130DA0B6709F(L_14, /*hidden argument*/NULL);
		(&V_0)->set_scale_7(L_15);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_16 = ___reader0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_17 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9(L_16, /*hidden argument*/NULL);
		(&V_0)->set_payload_8(L_17);
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_18 = V_0;
		return L_18;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SpawnMessage(Mirror.NetworkWriter,Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SpawnMessage_m92490B34FA3AF23017BC21840F8F981F9F254616 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SpawnMessage_m92490B34FA3AF23017BC21840F8F981F9F254616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_4 = ___value1;
		bool L_5 = L_4.get_isLocalPlayer_1();
		NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_6 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_7 = ___value1;
		bool L_8 = L_7.get_isOwner_2();
		NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_9 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_10 = ___value1;
		uint64_t L_11 = L_10.get_sceneId_3();
		NetworkWriterExtensions_WriteULong_m489A66CF31742C7FDC0EFAD34134CC82651E5F79(L_9, L_11, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_12 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_13 = ___value1;
		Guid_t  L_14 = L_13.get_assetId_4();
		NetworkWriterExtensions_WriteGuid_m0A123A3A718A0F3FDD467CCB9622DCAA90D617AE(L_12, L_14, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_15 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_16 = ___value1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = L_16.get_position_5();
		NetworkWriterExtensions_WriteVector3_mBAE8D4DE624FBAC9F5D08EBF6470CFF2517C450F(L_15, L_17, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_18 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_19 = ___value1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = L_19.get_rotation_6();
		NetworkWriterExtensions_WriteQuaternion_m53DA908E5BD159704B406BE0329A7B6EC41EA2AE(L_18, L_20, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_21 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_22 = ___value1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = L_22.get_scale_7();
		NetworkWriterExtensions_WriteVector3_mBAE8D4DE624FBAC9F5D08EBF6470CFF2517C450F(L_21, L_23, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_24 = ___writer0;
		SpawnMessage_t212E908511817556383D47E933676AB9809FEED7  L_25 = ___value1;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_26 = L_25.get_payload_8();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D(L_24, L_26, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.ObjectSpawnStartedMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectSpawnStartedMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83  GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_m2AFB7E3609D339ABAAC07C71CC2BE277AFBD2614 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83 ));
		ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectSpawnStartedMessage(Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_mCB3B7A378B7C88A88250DFFE573FB00825D00E19 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ObjectSpawnStartedMessage_tF1FF4F4EF9BBB083C4A6FC2998AAD0165A822D83  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.ObjectSpawnFinishedMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectSpawnFinishedMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553  GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_mCCFE88F44EE2AAAEEC78AB8265B05B9088FA5A33 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553 ));
		ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectSpawnFinishedMessage(Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m3895A23BB905E3C888D503941137E3B3EE5DBBF5 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ObjectSpawnFinishedMessage_t057B2DB67056306906BE06484E88D209BCA34553  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.ObjectDestroyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectDestroyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m686E47B45DAFAF001795218660DA054AEAC4E434 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m686E47B45DAFAF001795218660DA054AEAC4E434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectDestroyMessage(Mirror.NetworkWriter,Mirror.ObjectDestroyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m330AB506A1091B04CF5063CE801912160FCF12FD (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m330AB506A1091B04CF5063CE801912160FCF12FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		ObjectDestroyMessage_tCAEDA7F85120CC950BE64733931F0B95552A9053  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.ObjectHideMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectHideMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_mC6DE5DCFCAB8D00C51D9816436FD20A37E978A2E (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_mC6DE5DCFCAB8D00C51D9816436FD20A37E978A2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectHideMessage(Mirror.NetworkWriter,Mirror.ObjectHideMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m11603C6B99A5FA3EAD6288567987674D71393BBF (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m11603C6B99A5FA3EAD6288567987674D71393BBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		ObjectHideMessage_tF0EF2C045B3BFF5A6C7533FE65251757D209B26F  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.EntityStateMessage Mirror.GeneratedNetworkCode::_Read_Mirror.EntityStateMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  GeneratedNetworkCode__Read_Mirror_EntityStateMessage_m792B29E99DBE36E29143C4D1DC0BE1B65BD91D06 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_EntityStateMessage_m792B29E99DBE36E29143C4D1DC0BE1B65BD91D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_3 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9(L_2, /*hidden argument*/NULL);
		(&V_0)->set_payload_1(L_3);
		EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.EntityStateMessage(Mirror.NetworkWriter,Mirror.EntityStateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_EntityStateMessage_m48C6ED6790E903B64029A6EE60E40426433DB863 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_EntityStateMessage_m48C6ED6790E903B64029A6EE60E40426433DB863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		EntityStateMessage_t502D78113FAE01D34B54C20B78B8D0B9FF782280  L_4 = ___value1;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_5 = L_4.get_payload_1();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.NetworkPingMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NetworkPingMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_m98AF57541D49BFBD7D62653C63090E10311324C7 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_m98AF57541D49BFBD7D62653C63090E10311324C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		double L_1 = NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81(L_0, /*hidden argument*/NULL);
		(&V_0)->set_clientTime_0(L_1);
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NetworkPingMessage(Mirror.NetworkWriter,Mirror.NetworkPingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m63EBF4BD0C78F90D00DC086620C709402AEBF2D7 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m63EBF4BD0C78F90D00DC086620C709402AEBF2D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		NetworkPingMessage_t0CD9DEB4D3F4E46C724EC1537BBE43EDE4DA18F9  L_1 = ___value1;
		double L_2 = L_1.get_clientTime_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.NetworkPongMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NetworkPongMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_mF487E5DEE9C99048CB050EBDFEAE3AC13CCBFC43 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_mF487E5DEE9C99048CB050EBDFEAE3AC13CCBFC43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		double L_1 = NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81(L_0, /*hidden argument*/NULL);
		(&V_0)->set_clientTime_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		double L_3 = NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81(L_2, /*hidden argument*/NULL);
		(&V_0)->set_serverTime_1(L_3);
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NetworkPongMessage(Mirror.NetworkWriter,Mirror.NetworkPongMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_m20FB0EC57978FD2779A3327D87DB016384F486B3 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_m20FB0EC57978FD2779A3327D87DB016384F486B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  L_1 = ___value1;
		double L_2 = L_1.get_clientTime_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		NetworkPongMessage_t74CE325B0D5880AA695FC50914BACBB5DA210DFB  L_4 = ___value1;
		double L_5 = L_4.get_serverTime_1();
		NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage Mirror.GeneratedNetworkCode::_Read_Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mC20A57D10E197099E20FCB6304CC074590BC8949 (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mC20A57D10E197099E20FCB6304CC074590BC8949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		String_t* L_1 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_0, /*hidden argument*/NULL);
		(&V_0)->set_authUsername_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		String_t* L_3 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_2, /*hidden argument*/NULL);
		(&V_0)->set_authPassword_1(L_3);
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage(Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mDC4F5DDF14CD01999DCFFD04007B928E3F15E273 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mDC4F5DDF14CD01999DCFFD04007B928E3F15E273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_1 = ___value1;
		String_t* L_2 = L_1.get_authUsername_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		AuthRequestMessage_t90628CFB9670E2716CE9AEFA523A337A7998E905  L_4 = ___value1;
		String_t* L_5 = L_4.get_authPassword_1();
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage Mirror.GeneratedNetworkCode::_Read_Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_mFD95DBD4A52EF7EB1AAAFBFE020A4E8AD26C222E (NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_mFD95DBD4A52EF7EB1AAAFBFE020A4E8AD26C222E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3 ));
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_tA2C955DA128E191CFDE15489769294010600C77A_il2cpp_TypeInfo_var);
		uint8_t L_1 = NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151(L_0, /*hidden argument*/NULL);
		(&V_0)->set_code_0(L_1);
		NetworkReader_tAA88A75EFC73573BCCA5F501C814190B01ED4C25 * L_2 = ___reader0;
		String_t* L_3 = NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C(L_2, /*hidden argument*/NULL);
		(&V_0)->set_message_1(L_3);
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage(Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_m6D05E2B431141F217D43DCD58B889D682AD61046 (NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * ___writer0, AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_m6D05E2B431141F217D43DCD58B889D682AD61046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_0 = ___writer0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_1 = ___value1;
		uint8_t L_2 = L_1.get_code_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t6DA8592D0542CB5F40B191D53A4EBA55A85B034F_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t9867BCC201B0E0EB4E85B70D8322BFCC7B1B5B0D * L_3 = ___writer0;
		AuthResponseMessage_tE4A34CA11B156A2459D7CD1B3ADCBDA777416EC3  L_4 = ___value1;
		String_t* L_5 = L_4.get_message_1();
		NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.GeneratedNetworkCode::InitReadWriters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode_InitReadWriters_m1303C5A626116F37C21AFC8DF2543E7B44EA6AD2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode_InitReadWriters_m1303C5A626116F37C21AFC8DF2543E7B44EA6AD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB * L_0 = (Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB *)il2cpp_codegen_object_new(Action_2_tADB88B7C019A3BE64FC972391F87EF07DAC1ADDB_il2cpp_TypeInfo_var);
		Action_2__ctor_m2D815DB6B9D63E982524088E9B7139A09263AEE1(L_0, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteByte_m37FC740AD0F5165AD90B20D0C77EA132A464DD0C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2D815DB6B9D63E982524088E9B7139A09263AEE1_RuntimeMethod_var);
		((Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t9B9F6D04F03788449F96F11F0FD260F67CFA6484_il2cpp_TypeInfo_var))->set_write_0(L_0);
		Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 * L_1 = (Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0 *)il2cpp_codegen_object_new(Action_2_t9C1B6723880D7370590DB1B9872B463E79D616F0_il2cpp_TypeInfo_var);
		Action_2__ctor_mB6B3FC585308494667A356184F80F2DBE66CA9C0(L_1, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteSByte_mA926969811A9C7D0C82FFD6A6E82F12DE2DE56FA_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB6B3FC585308494667A356184F80F2DBE66CA9C0_RuntimeMethod_var);
		((Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t786B39B1B12BC2195BF5853C0D1FEF7E31D6D47B_il2cpp_TypeInfo_var))->set_write_0(L_1);
		Action_2_t40925B0EE1207A395998710348464524F4248F45 * L_2 = (Action_2_t40925B0EE1207A395998710348464524F4248F45 *)il2cpp_codegen_object_new(Action_2_t40925B0EE1207A395998710348464524F4248F45_il2cpp_TypeInfo_var);
		Action_2__ctor_m54103EF7379CFF63C35F8A5DD2A08748DC69A2E4(L_2, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteChar_mED44727F7A3BEE7C6D94E9CE6A0A4DA0B19C057A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m54103EF7379CFF63C35F8A5DD2A08748DC69A2E4_RuntimeMethod_var);
		((Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t74672D9120237A55043EE5D433BAFE1AE6A151A9_il2cpp_TypeInfo_var))->set_write_0(L_2);
		Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 * L_3 = (Action_2_t306D18212C9B62F1499CD039EF84E3296880F321 *)il2cpp_codegen_object_new(Action_2_t306D18212C9B62F1499CD039EF84E3296880F321_il2cpp_TypeInfo_var);
		Action_2__ctor_m81022617AC6116A0A079BF2B036F7B9CF5F8C9D7(L_3, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBool_mDBCA0CBF4840BACBE39015A7E5C9FFB9579367B4_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m81022617AC6116A0A079BF2B036F7B9CF5F8C9D7_RuntimeMethod_var);
		((Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tCABCC80BDDBC1B50B6DC9770C2CD2CEBF5256BD0_il2cpp_TypeInfo_var))->set_write_0(L_3);
		Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 * L_4 = (Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49 *)il2cpp_codegen_object_new(Action_2_t938A052A3E5BB800B322597E40D621752D0ECA49_il2cpp_TypeInfo_var);
		Action_2__ctor_mF0D1BEBCACAA52DB77862E60784BB90A68E25386(L_4, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUShort_m51D24CBE5F0428ACDFB3A43E350DA09E8C25AF63_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF0D1BEBCACAA52DB77862E60784BB90A68E25386_RuntimeMethod_var);
		((Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t21BFF995C53267D96F2E86974613EF411042F24E_il2cpp_TypeInfo_var))->set_write_0(L_4);
		Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C * L_5 = (Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C *)il2cpp_codegen_object_new(Action_2_t5345F82849DFEC230A2B34E59EB380FA1B7DCB5C_il2cpp_TypeInfo_var);
		Action_2__ctor_m02617273A8BE9C0B3EEAA0A425A520451B2192C4(L_5, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteShort_mF6C5BFE6019FC7BFE037226FEB50B673A81EBCA3_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m02617273A8BE9C0B3EEAA0A425A520451B2192C4_RuntimeMethod_var);
		((Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t26A73435A15D1297175A842D2E91B2A6C5E20C17_il2cpp_TypeInfo_var))->set_write_0(L_5);
		Action_2_t0A3328221E03EB69862A26598F6466242D9824AF * L_6 = (Action_2_t0A3328221E03EB69862A26598F6466242D9824AF *)il2cpp_codegen_object_new(Action_2_t0A3328221E03EB69862A26598F6466242D9824AF_il2cpp_TypeInfo_var);
		Action_2__ctor_mBF03F31AADEB3271E1EA7991998EBF4FCC3B83BB(L_6, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUInt_m2A90D868DD249F7FE5ABE2996B1DE9D35B49C480_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mBF03F31AADEB3271E1EA7991998EBF4FCC3B83BB_RuntimeMethod_var);
		((Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tCCC17C416B2DAC195516F63BCE0EEE7192CEE21D_il2cpp_TypeInfo_var))->set_write_0(L_6);
		Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D * L_7 = (Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D *)il2cpp_codegen_object_new(Action_2_tE8800CD69CD71C47F3C62DA6933A356BDFC2382D_il2cpp_TypeInfo_var);
		Action_2__ctor_m54570F73507D3CCEAD81B7A949E09A2E784CD728(L_7, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteInt_m3B289CE558C932DB97A89B20E70B263B75B53472_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m54570F73507D3CCEAD81B7A949E09A2E784CD728_RuntimeMethod_var);
		((Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t7D93E01B05FDE59FEAAA0056C9D8F9B66D746204_il2cpp_TypeInfo_var))->set_write_0(L_7);
		Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B * L_8 = (Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B *)il2cpp_codegen_object_new(Action_2_t54F12982B26170255C10F4E821CBF71E6A16C51B_il2cpp_TypeInfo_var);
		Action_2__ctor_m58B2261CDE5B716414C8A804911B7F873E38964B(L_8, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteULong_m489A66CF31742C7FDC0EFAD34134CC82651E5F79_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m58B2261CDE5B716414C8A804911B7F873E38964B_RuntimeMethod_var);
		((Writer_1_t96811337C69D6C006FD794567F115917A678521C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t96811337C69D6C006FD794567F115917A678521C_il2cpp_TypeInfo_var))->set_write_0(L_8);
		Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 * L_9 = (Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5 *)il2cpp_codegen_object_new(Action_2_t7EB0AFA49D67518490103F2E0B47DB41FEB2A6A5_il2cpp_TypeInfo_var);
		Action_2__ctor_mEADDB48F00AD9890E8CDB4B6A0C18BEF727BE119(L_9, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteLong_mD9D01650FDF450A1723C2F1EA817AE6B8C637B4F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEADDB48F00AD9890E8CDB4B6A0C18BEF727BE119_RuntimeMethod_var);
		((Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t4F65E5EFF5D4B210B4917D3F8C23A83B6EBEF7AB_il2cpp_TypeInfo_var))->set_write_0(L_9);
		Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 * L_10 = (Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6 *)il2cpp_codegen_object_new(Action_2_tBD8DE202DCBDE3229563D24957C1A17D1A579FC6_il2cpp_TypeInfo_var);
		Action_2__ctor_mE05F66BE346DE3DE9350A92DFE359CCE5204EF26(L_10, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteFloat_mD75F0D2C29FCF82D9331F06A9B765372D788F0C7_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE05F66BE346DE3DE9350A92DFE359CCE5204EF26_RuntimeMethod_var);
		((Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t29707420B220B7EFD6F1FF37E83894292573BA7F_il2cpp_TypeInfo_var))->set_write_0(L_10);
		Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 * L_11 = (Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41 *)il2cpp_codegen_object_new(Action_2_tBA0345A7A8B393AABE069D396F9C90315AB45B41_il2cpp_TypeInfo_var);
		Action_2__ctor_m299E51549DA95E4296A0D8B46333BA6F052EB649(L_11, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteDouble_mC5C812448AA457993B0C3D17ADC3565A9BE6B2FE_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m299E51549DA95E4296A0D8B46333BA6F052EB649_RuntimeMethod_var);
		((Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tD924A9451483FFEFBD278F630179E67E2F9CB34D_il2cpp_TypeInfo_var))->set_write_0(L_11);
		Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 * L_12 = (Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36 *)il2cpp_codegen_object_new(Action_2_tB20BF112B660D6E33B33DF4D4A10BDF5D3C7FC36_il2cpp_TypeInfo_var);
		Action_2__ctor_m0BE950FEA6490AB326F80C4250E3D76309082A83(L_12, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteDecimal_m57B122E9BA3F6FD264F0915A98E3B6BEF2FD12BA_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0BE950FEA6490AB326F80C4250E3D76309082A83_RuntimeMethod_var);
		((Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tF9E6CE5A0E26005E69A880E76908E3907DF13383_il2cpp_TypeInfo_var))->set_write_0(L_12);
		Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D * L_13 = (Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D *)il2cpp_codegen_object_new(Action_2_t196B2AF59352BD4AD3261AC98F3F7C9D3656505D_il2cpp_TypeInfo_var);
		Action_2__ctor_mB790C111B9F0E19E5012977C205142E82C3D28AA(L_13, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteString_m7DCBC8CF709A968EEA07D165DB72E4F0BE08F76C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB790C111B9F0E19E5012977C205142E82C3D28AA_RuntimeMethod_var);
		((Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tEA62C4C602F41E7E54923DC4ACE68047D591EEC7_il2cpp_TypeInfo_var))->set_write_0(L_13);
		Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C * L_14 = (Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C *)il2cpp_codegen_object_new(Action_2_t94DC95A70E2C0F4BB886CAFF11BFFEC81ABCF76C_il2cpp_TypeInfo_var);
		Action_2__ctor_mFBF9354947B9CCBF16AB4C41C6BFF56A62BF7B2E(L_14, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBytesAndSize_m96213AFCB04A9EC9F3F982F4F9BA3E2EBE2FA24A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mFBF9354947B9CCBF16AB4C41C6BFF56A62BF7B2E_RuntimeMethod_var);
		((Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t25C9566DF0661C3EB2472B368690BE793E5405EE_il2cpp_TypeInfo_var))->set_write_0(L_14);
		Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD * L_15 = (Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD *)il2cpp_codegen_object_new(Action_2_t3F96FA6CCFB356D37D03F8F8262E0BFD36B580BD_il2cpp_TypeInfo_var);
		Action_2__ctor_m84029CE9709FCF881615909E631B78B571FD02E5(L_15, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBytesAndSizeSegment_m71B938C2B6CE141A3468D0493D1310E1A80F635D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m84029CE9709FCF881615909E631B78B571FD02E5_RuntimeMethod_var);
		((Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t298BB0B0472C7262BA3430EBE93F4F406A4BBCB3_il2cpp_TypeInfo_var))->set_write_0(L_15);
		Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 * L_16 = (Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547 *)il2cpp_codegen_object_new(Action_2_t25B52EEC3AD8A46F91AFDE57C4F66D5E7B23F547_il2cpp_TypeInfo_var);
		Action_2__ctor_m4585C192C831599ADB087E6D2B6E169D56E2B533(L_16, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector2_m9E01EEC43B44A955E43C38D73F2B0A3702B88CC1_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4585C192C831599ADB087E6D2B6E169D56E2B533_RuntimeMethod_var);
		((Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t404CD67413A546DBA3E74FF6DB4BCFD87BB4A737_il2cpp_TypeInfo_var))->set_write_0(L_16);
		Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 * L_17 = (Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77 *)il2cpp_codegen_object_new(Action_2_t45A0EAEAF7BAE5F2AFB31E75901CBFEE11CB7A77_il2cpp_TypeInfo_var);
		Action_2__ctor_m2373FED09B272983A8A35DAE4E80C1A33004EC22(L_17, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector3_mBAE8D4DE624FBAC9F5D08EBF6470CFF2517C450F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2373FED09B272983A8A35DAE4E80C1A33004EC22_RuntimeMethod_var);
		((Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t97401A2EB67505B884303508A8C5BB61136E1D9B_il2cpp_TypeInfo_var))->set_write_0(L_17);
		Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B * L_18 = (Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B *)il2cpp_codegen_object_new(Action_2_tC83A37DB130664ED18BC855209D2215ACC1B2B9B_il2cpp_TypeInfo_var);
		Action_2__ctor_mC0F791B15F4F605F533F59C4E0BF632320316675(L_18, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector4_mDD28538D18DBDAF73E8C6E0BA6B51B54AC4B93C2_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC0F791B15F4F605F533F59C4E0BF632320316675_RuntimeMethod_var);
		((Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tFB53C628C3018DA470D65CD1CFDFB5F554980048_il2cpp_TypeInfo_var))->set_write_0(L_18);
		Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C * L_19 = (Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C *)il2cpp_codegen_object_new(Action_2_t7D772DE4D52377E2F1D26BC3C4EE987DB73B037C_il2cpp_TypeInfo_var);
		Action_2__ctor_m3D8764A928978074A6111C0494524040E01FD798(L_19, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector2Int_m49061DB21DB24954724839EB7B9B7B46A5732A55_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m3D8764A928978074A6111C0494524040E01FD798_RuntimeMethod_var);
		((Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t8A1B57963322709363C1FE37287F6DAFB4C20F08_il2cpp_TypeInfo_var))->set_write_0(L_19);
		Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 * L_20 = (Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8 *)il2cpp_codegen_object_new(Action_2_t6F089599E82F065041AF602AA7AA5DF201E6B3C8_il2cpp_TypeInfo_var);
		Action_2__ctor_m412D55B41569241805AA38C2351891B511A1BB2E(L_20, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector3Int_m921712D87942033A1D0AE3FFD8BFB3B420345FFF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m412D55B41569241805AA38C2351891B511A1BB2E_RuntimeMethod_var);
		((Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t2A5C41ECC631D52445F88C80F0E476DDA6CC059C_il2cpp_TypeInfo_var))->set_write_0(L_20);
		Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 * L_21 = (Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84 *)il2cpp_codegen_object_new(Action_2_t2929AC6DDE7186B08ACD1943D897C88933D92B84_il2cpp_TypeInfo_var);
		Action_2__ctor_m138418EED9A02E0000C3AFDA5D14915778BE5661(L_21, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteColor_m994F1B4D02EA3C5BD4BD4834A0CD58EB1A5352DE_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m138418EED9A02E0000C3AFDA5D14915778BE5661_RuntimeMethod_var);
		((Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tDB6929083AC042BDD0F8106980BCA34553AD2EAD_il2cpp_TypeInfo_var))->set_write_0(L_21);
		Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF * L_22 = (Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF *)il2cpp_codegen_object_new(Action_2_t2000A2A878D72A78B6216F1635CE821265E2C3CF_il2cpp_TypeInfo_var);
		Action_2__ctor_mA9BEF94712C4230080541C60D72F2B425BC6A19C(L_22, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteColor32_m4EA8BE7083D92813A0899C3C40427CED61464192_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA9BEF94712C4230080541C60D72F2B425BC6A19C_RuntimeMethod_var);
		((Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tCD8C792F9F103C6944810CCCA106F7FCA507D9AC_il2cpp_TypeInfo_var))->set_write_0(L_22);
		Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 * L_23 = (Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167 *)il2cpp_codegen_object_new(Action_2_t2792F01C3889DD94ED1DBC484F0B45A08B8E0167_il2cpp_TypeInfo_var);
		Action_2__ctor_m726AC5430F97D346AC521B68F18F29F5483C056F(L_23, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteQuaternion_m53DA908E5BD159704B406BE0329A7B6EC41EA2AE_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m726AC5430F97D346AC521B68F18F29F5483C056F_RuntimeMethod_var);
		((Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t6906EEEBA6DAC4351DCC6FC1FD90DEB7EC999F7B_il2cpp_TypeInfo_var))->set_write_0(L_23);
		Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 * L_24 = (Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661 *)il2cpp_codegen_object_new(Action_2_t377EB16EB18B4A4D67307079817B4FB1C9B85661_il2cpp_TypeInfo_var);
		Action_2__ctor_mB4387E5709C9EDC49EC76151FE53F25B8641AD04(L_24, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteRect_m64F3075E1E966A7CAD7B8DCCAA837BB7C8E9665C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB4387E5709C9EDC49EC76151FE53F25B8641AD04_RuntimeMethod_var);
		((Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t453FAA0F7056C973D104ED18443B6D1C29ED3CFB_il2cpp_TypeInfo_var))->set_write_0(L_24);
		Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF * L_25 = (Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF *)il2cpp_codegen_object_new(Action_2_tD774725A0A39DB0C8145D0CF5950B61F252CCFAF_il2cpp_TypeInfo_var);
		Action_2__ctor_m61FDDF49FCF1E57B7D94DAAD8AC61120F1100EC0(L_25, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WritePlane_mC59D1041360E9E21AFF0DB4E0E3C2CAE471DB26A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m61FDDF49FCF1E57B7D94DAAD8AC61120F1100EC0_RuntimeMethod_var);
		((Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tAE8CBC524DF688B8C17F12C0AF2168FD692E26D6_il2cpp_TypeInfo_var))->set_write_0(L_25);
		Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 * L_26 = (Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23 *)il2cpp_codegen_object_new(Action_2_tA5FC5F2A88863B2A20A5613D4ED1BC7BA4B42A23_il2cpp_TypeInfo_var);
		Action_2__ctor_mA01DBDD8470F0112F21565CF58F8FDCD24BCDC06(L_26, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteRay_m9C160BE768EB303EE7AD9A694816B5BF3DB79BC4_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA01DBDD8470F0112F21565CF58F8FDCD24BCDC06_RuntimeMethod_var);
		((Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t09987D818CB49A5FD1959F3AB7D4D243CAAE16FA_il2cpp_TypeInfo_var))->set_write_0(L_26);
		Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE * L_27 = (Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE *)il2cpp_codegen_object_new(Action_2_tD7A161A25639176F4A8ACE3C54370E7D8B2D60DE_il2cpp_TypeInfo_var);
		Action_2__ctor_m939171154DBD3ACB579794BAC0E915C7D85BC17E(L_27, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteMatrix4x4_m42AC2750C7724369857C2926F6E434C2D91829E7_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m939171154DBD3ACB579794BAC0E915C7D85BC17E_RuntimeMethod_var);
		((Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t7760160FD74F3E08C32F22AD0E7AA538AB885DAC_il2cpp_TypeInfo_var))->set_write_0(L_27);
		Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 * L_28 = (Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511 *)il2cpp_codegen_object_new(Action_2_t338ED7606A125C7A0C22F7E77E313C25F26C9511_il2cpp_TypeInfo_var);
		Action_2__ctor_mC7BDE4D8C29E4F76B63896362624F1AFB13D01BD(L_28, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteGuid_m0A123A3A718A0F3FDD467CCB9622DCAA90D617AE_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC7BDE4D8C29E4F76B63896362624F1AFB13D01BD_RuntimeMethod_var);
		((Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t0F07EDEBA814A4B5B812154441379B1838EED6E2_il2cpp_TypeInfo_var))->set_write_0(L_28);
		Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E * L_29 = (Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E *)il2cpp_codegen_object_new(Action_2_t29C41CE515DC107BBAA4ECAD153170CA614F7F6E_il2cpp_TypeInfo_var);
		Action_2__ctor_m4626DA187071DB49D1186D7AD201121BEBE8D9CD(L_29, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteNetworkIdentity_m999B9107633A1F5C2E37EC48C9D802D53C8CF46E_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4626DA187071DB49D1186D7AD201121BEBE8D9CD_RuntimeMethod_var);
		((Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t27A4E02F7E0D271AD618E4D2F89C8F321F927382_il2cpp_TypeInfo_var))->set_write_0(L_29);
		Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 * L_30 = (Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026 *)il2cpp_codegen_object_new(Action_2_t6EB3E267DF3D1A283D1586AF343623C47CE6C026_il2cpp_TypeInfo_var);
		Action_2__ctor_m9B703B75776D69C6FAB31EC9F8334AE14173438E(L_30, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteNetworkBehaviour_m11F3313AF04A2C05D122E961F32857C91FBA0736_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9B703B75776D69C6FAB31EC9F8334AE14173438E_RuntimeMethod_var);
		((Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t831D788CAFC8A455CC753E33F439DA2DA2B149E6_il2cpp_TypeInfo_var))->set_write_0(L_30);
		Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C * L_31 = (Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C *)il2cpp_codegen_object_new(Action_2_tAB49C33546DA0CD46FFEFE4DAD647F30C085B16C_il2cpp_TypeInfo_var);
		Action_2__ctor_m1CF3E048606312D85781FED6CC6794472FA57EF9(L_31, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteTransform_m55A32385430D751090387711ECC6F9BFDB7873E2_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1CF3E048606312D85781FED6CC6794472FA57EF9_RuntimeMethod_var);
		((Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tDFA3B362E420C63B673A0C97CCB38F92D7D0AB02_il2cpp_TypeInfo_var))->set_write_0(L_31);
		Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 * L_32 = (Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051 *)il2cpp_codegen_object_new(Action_2_t04CB9FB045504653660D9D5F72B5D2B14B438051_il2cpp_TypeInfo_var);
		Action_2__ctor_mECAD02095BA6C60E73B40E4C9D2136AB72805D74(L_32, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteGameObject_m42A44142EBBD20C4AA9F4E2FEB30BFC2116FCE31_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mECAD02095BA6C60E73B40E4C9D2136AB72805D74_RuntimeMethod_var);
		((Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t727DE15964AA7320F6AFCFAEF77CD9E5BA241F5A_il2cpp_TypeInfo_var))->set_write_0(L_32);
		Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 * L_33 = (Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126 *)il2cpp_codegen_object_new(Action_2_t3F0AA445FE8FFEF2C036A440DD9262098C032126_il2cpp_TypeInfo_var);
		Action_2__ctor_mF40893A335EFF87218E3BF810276950F525309D3(L_33, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUri_m0C38A8803AFDAE8E5807741E56E674D4ABE92F82_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF40893A335EFF87218E3BF810276950F525309D3_RuntimeMethod_var);
		((Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t7CD56A58DC9F3D548427ADF4AD4469BD8D3C2BE8_il2cpp_TypeInfo_var))->set_write_0(L_33);
		Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F * L_34 = (Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F *)il2cpp_codegen_object_new(Action_2_t35F85CEEB14A89BC0C6D4D36684B82CBBC9A853F_il2cpp_TypeInfo_var);
		Action_2__ctor_m44E4631D19BE138B66C4D874FEFC44F92E07B22B(L_34, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ReadyMessage_m464C7D44082690A88CD811FA5ECBAA0A0BA034ED_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m44E4631D19BE138B66C4D874FEFC44F92E07B22B_RuntimeMethod_var);
		((Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t59E004E8B33428FFCC7A06750CF21FCED427AE1D_il2cpp_TypeInfo_var))->set_write_0(L_34);
		Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 * L_35 = (Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872 *)il2cpp_codegen_object_new(Action_2_t2CE5A3FACA0532B8344ABC49C683E35913875872_il2cpp_TypeInfo_var);
		Action_2__ctor_m0BE9ADBD0DB77A9060311ED0FB1E31CFECFA7ABE(L_35, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NotReadyMessage_mF61ED5D3E74B9ACFFEEF9462E332F6D4F2DD38BC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0BE9ADBD0DB77A9060311ED0FB1E31CFECFA7ABE_RuntimeMethod_var);
		((Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t36CEEEF90ED2A77CE07807FDC6742A7789EE4CEB_il2cpp_TypeInfo_var))->set_write_0(L_35);
		Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 * L_36 = (Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812 *)il2cpp_codegen_object_new(Action_2_t79AAB51EBF92F690E09635B6BDA50569E24CB812_il2cpp_TypeInfo_var);
		Action_2__ctor_m589B45FE1E2B0143C15CE227E06BA236735E744A(L_36, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mB7A38860635D372F06A249BB2BC2FF8906FA1267_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m589B45FE1E2B0143C15CE227E06BA236735E744A_RuntimeMethod_var);
		((Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t404FA9D9C581C11F3B302E45444F9B21C6D18074_il2cpp_TypeInfo_var))->set_write_0(L_36);
		Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 * L_37 = (Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817 *)il2cpp_codegen_object_new(Action_2_t1AC4F0BB437C87B01F252354BFC4ADA49E99B817_il2cpp_TypeInfo_var);
		Action_2__ctor_mE7543FD1692105363D20B0D6F097AA6853F565A3(L_37, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SceneMessage_mD3D13D43D390D4CF287BF26421493BC3A025EDD6_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE7543FD1692105363D20B0D6F097AA6853F565A3_RuntimeMethod_var);
		((Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t718415F376A0AD2434E7A8FC885E00E7B2BA968F_il2cpp_TypeInfo_var))->set_write_0(L_37);
		Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB * L_38 = (Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB *)il2cpp_codegen_object_new(Action_2_t518E05A3EB1EDB548F704E913484A06B7A3BC9AB_il2cpp_TypeInfo_var);
		Action_2__ctor_m9F08FB1D55E703A6B7D430530CC5CEBD8A6C85CC(L_38, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SceneOperation_m310A1A80A902C47DAEEBB8253FC8909FAE402231_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9F08FB1D55E703A6B7D430530CC5CEBD8A6C85CC_RuntimeMethod_var);
		((Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tC8EC43B736CF39755679C6C852120E1094F7B6CC_il2cpp_TypeInfo_var))->set_write_0(L_38);
		Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A * L_39 = (Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A *)il2cpp_codegen_object_new(Action_2_tE261CB58DC755E7D558C989575AED17A734A4F4A_il2cpp_TypeInfo_var);
		Action_2__ctor_m2235267C2908EA6D02BCAEA851931E7AAA8B67DD(L_39, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_CommandMessage_m129987B61F98C7AB0A413FC603DB15EE9D67F20C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2235267C2908EA6D02BCAEA851931E7AAA8B67DD_RuntimeMethod_var);
		((Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tDF4B244D4A637A9E9D5716E8C6BEC5B81EC78A03_il2cpp_TypeInfo_var))->set_write_0(L_39);
		Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 * L_40 = (Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098 *)il2cpp_codegen_object_new(Action_2_t2085D9DCBFCA4292778EBF53D4F4C6921BA77098_il2cpp_TypeInfo_var);
		Action_2__ctor_m7613F21D1BA48CBD54DA30F5327830A8DD705BB4(L_40, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_RpcMessage_mE1C70DD9843502F910207AE89277A7E1322EFD67_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m7613F21D1BA48CBD54DA30F5327830A8DD705BB4_RuntimeMethod_var);
		((Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tBA79E51447FDD445E7633BD1E64131EAE6942CD5_il2cpp_TypeInfo_var))->set_write_0(L_40);
		Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F * L_41 = (Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F *)il2cpp_codegen_object_new(Action_2_t9E93700BB95DD18A5BCD8332CDDECF1EBFEAF95F_il2cpp_TypeInfo_var);
		Action_2__ctor_m01D6C98B78CC1795558B61A92E96CE22B3212E68(L_41, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SpawnMessage_m92490B34FA3AF23017BC21840F8F981F9F254616_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m01D6C98B78CC1795558B61A92E96CE22B3212E68_RuntimeMethod_var);
		((Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t212ED7C3901277D68B122FCCC5247F7C82B1B969_il2cpp_TypeInfo_var))->set_write_0(L_41);
		Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 * L_42 = (Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4 *)il2cpp_codegen_object_new(Action_2_t2C0F894501E21109709782F5CC639B85BB163DF4_il2cpp_TypeInfo_var);
		Action_2__ctor_m479A979C8FDFD1FA738AB1540E94AE7FDE3FBE73(L_42, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_mCB3B7A378B7C88A88250DFFE573FB00825D00E19_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m479A979C8FDFD1FA738AB1540E94AE7FDE3FBE73_RuntimeMethod_var);
		((Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t6F55C1152A3721AEFFFADCD14EF5DA1D1AE01914_il2cpp_TypeInfo_var))->set_write_0(L_42);
		Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C * L_43 = (Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C *)il2cpp_codegen_object_new(Action_2_t53355B9D081C963A507DF8823989D59910FBFB6C_il2cpp_TypeInfo_var);
		Action_2__ctor_m54F0FDAAB7D4EFA3D9C7F4D8DBCD66F9566E2175(L_43, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m3895A23BB905E3C888D503941137E3B3EE5DBBF5_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m54F0FDAAB7D4EFA3D9C7F4D8DBCD66F9566E2175_RuntimeMethod_var);
		((Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t84A491AFB02AFED54CA6DA77B7DF206A4E97071C_il2cpp_TypeInfo_var))->set_write_0(L_43);
		Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 * L_44 = (Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567 *)il2cpp_codegen_object_new(Action_2_t2CBF5AC1905E8671E330664B182CD1BA30C40567_il2cpp_TypeInfo_var);
		Action_2__ctor_m0EBB84CCC6ED0222C1A9C215062AAB3DFE41B2DD(L_44, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m330AB506A1091B04CF5063CE801912160FCF12FD_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0EBB84CCC6ED0222C1A9C215062AAB3DFE41B2DD_RuntimeMethod_var);
		((Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t8AF39CE48CB9061811B4723188EF764BD369774A_il2cpp_TypeInfo_var))->set_write_0(L_44);
		Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 * L_45 = (Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552 *)il2cpp_codegen_object_new(Action_2_tD44DE510D1CFEA6A8C7FFD2F7757B5EA3CB31552_il2cpp_TypeInfo_var);
		Action_2__ctor_mA89E5A817D384EE64B5B7282CBF6104BADADC50D(L_45, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m11603C6B99A5FA3EAD6288567987674D71393BBF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA89E5A817D384EE64B5B7282CBF6104BADADC50D_RuntimeMethod_var);
		((Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tBF0AC5712DD607AC12A79FA554E32DB6A5A4382B_il2cpp_TypeInfo_var))->set_write_0(L_45);
		Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 * L_46 = (Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561 *)il2cpp_codegen_object_new(Action_2_tF0C4EF985CC5F1C7D8CB156797A348A848E2F561_il2cpp_TypeInfo_var);
		Action_2__ctor_m44A72DE5A0965D310F1FE2A84908B9D1DD775714(L_46, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_EntityStateMessage_m48C6ED6790E903B64029A6EE60E40426433DB863_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m44A72DE5A0965D310F1FE2A84908B9D1DD775714_RuntimeMethod_var);
		((Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tA097B48954323F4F919DC6D5268090BEAF600AF9_il2cpp_TypeInfo_var))->set_write_0(L_46);
		Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 * L_47 = (Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024 *)il2cpp_codegen_object_new(Action_2_t02BEFAFC0BFED56C66ADC80D825C3702A4E3E024_il2cpp_TypeInfo_var);
		Action_2__ctor_mD1C90FAD9B546E0657C71C14E2AC3A236162A743(L_47, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m63EBF4BD0C78F90D00DC086620C709402AEBF2D7_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD1C90FAD9B546E0657C71C14E2AC3A236162A743_RuntimeMethod_var);
		((Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t78F78ECDABC76DA8131B8C5193230A24F512CEE3_il2cpp_TypeInfo_var))->set_write_0(L_47);
		Action_2_tDE724019003497875B1E8F63658DB7652C26F34B * L_48 = (Action_2_tDE724019003497875B1E8F63658DB7652C26F34B *)il2cpp_codegen_object_new(Action_2_tDE724019003497875B1E8F63658DB7652C26F34B_il2cpp_TypeInfo_var);
		Action_2__ctor_m8D16A04029C1C7D2007F971325FF1D79242A7225(L_48, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_m20FB0EC57978FD2779A3327D87DB016384F486B3_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8D16A04029C1C7D2007F971325FF1D79242A7225_RuntimeMethod_var);
		((Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tEE7CAB186F64394EF1AE3A97A4ADA290EADC9FFA_il2cpp_TypeInfo_var))->set_write_0(L_48);
		Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 * L_49 = (Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43 *)il2cpp_codegen_object_new(Action_2_t8F1123E2247DC3C6FD77A336E53319DEF44C1A43_il2cpp_TypeInfo_var);
		Action_2__ctor_m4C7C7C14957ECB554AE918E4B9078597CA2CED75(L_49, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mDC4F5DDF14CD01999DCFFD04007B928E3F15E273_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4C7C7C14957ECB554AE918E4B9078597CA2CED75_RuntimeMethod_var);
		((Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t889668E2426215683A19BAAE8B9817B2093682DA_il2cpp_TypeInfo_var))->set_write_0(L_49);
		Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 * L_50 = (Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931 *)il2cpp_codegen_object_new(Action_2_t341D4FF3E669EEFC99EE54BC2F99A2EED3149931_il2cpp_TypeInfo_var);
		Action_2__ctor_m999F35194EE4916C35D50A28C7569AF6EB11FDAA(L_50, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_m6D05E2B431141F217D43DCD58B889D682AD61046_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m999F35194EE4916C35D50A28C7569AF6EB11FDAA_RuntimeMethod_var);
		((Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t2DE2A3464D0432E1D23141F16BDC2A332008C202_il2cpp_TypeInfo_var))->set_write_0(L_50);
		Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 * L_51 = (Func_2_t698A81C87DAD21453BE12E465FEB469EED017279 *)il2cpp_codegen_object_new(Func_2_t698A81C87DAD21453BE12E465FEB469EED017279_il2cpp_TypeInfo_var);
		Func_2__ctor_m01AD9FBAAF0B544302B224005CC681C9930EC277(L_51, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadByte_m7C7135EF074EA80F1CA619F9B1751E31CACC0151_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m01AD9FBAAF0B544302B224005CC681C9930EC277_RuntimeMethod_var);
		((Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t69943D088B43DB414D2D6B22A6D61C56E527E981_il2cpp_TypeInfo_var))->set_read_0(L_51);
		Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC * L_52 = (Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC *)il2cpp_codegen_object_new(Func_2_t3567FAF3E366F9A0E5A613D48E79B551C678AEDC_il2cpp_TypeInfo_var);
		Func_2__ctor_mD4CB71826A6A21C9082AC34C24A25AE65D2D1F1A(L_52, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadSByte_m958BBA53AD7C66000CF73A24637B73CD3D211F2D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD4CB71826A6A21C9082AC34C24A25AE65D2D1F1A_RuntimeMethod_var);
		((Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5DDF6EF30E65CC42AAF7E24169A482FEFF612DBD_il2cpp_TypeInfo_var))->set_read_0(L_52);
		Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 * L_53 = (Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961 *)il2cpp_codegen_object_new(Func_2_t6C7EE51EBE56BADB326D5F98433B203B224D4961_il2cpp_TypeInfo_var);
		Func_2__ctor_mD9212DFB999EDF561E3967695ED6E10622E191DC(L_53, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadChar_mACFE053E8B07E677264931800D20B6ECAAA6B67D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD9212DFB999EDF561E3967695ED6E10622E191DC_RuntimeMethod_var);
		((Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t27E6F8A4BA4ACDBB62B0577C4A3BCC950F33859F_il2cpp_TypeInfo_var))->set_read_0(L_53);
		Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 * L_54 = (Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234 *)il2cpp_codegen_object_new(Func_2_t4E3B992556C4D9D4B06EED8690C6153350257234_il2cpp_TypeInfo_var);
		Func_2__ctor_mA55B0E648A4E20B1511BE4D0FC179FF519D025F0(L_54, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBool_mABEC67C283681FDB527DDB6082488DC159253202_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA55B0E648A4E20B1511BE4D0FC179FF519D025F0_RuntimeMethod_var);
		((Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t162589EA3A25FCECFDA42ABE228A3EA318414E8B_il2cpp_TypeInfo_var))->set_read_0(L_54);
		Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 * L_55 = (Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46 *)il2cpp_codegen_object_new(Func_2_t8DCCAE1B949958EF81A6FD1B566D25120ABF4D46_il2cpp_TypeInfo_var);
		Func_2__ctor_m9B86E814D0EE72EDA0A54D4084405D7C8D9E6918(L_55, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadShort_mAF6F083FE74623DF5B95949A2A9ED9A663CD99B1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9B86E814D0EE72EDA0A54D4084405D7C8D9E6918_RuntimeMethod_var);
		((Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t0A9C030EEE4A7DD3012828E04AFF0358ABF9DE99_il2cpp_TypeInfo_var))->set_read_0(L_55);
		Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 * L_56 = (Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180 *)il2cpp_codegen_object_new(Func_2_tB86E01249E3A54196EBF61AD20E5FD5EB1399180_il2cpp_TypeInfo_var);
		Func_2__ctor_mD286333868137BF85A8336FC1E2CA63EE50F2FF3(L_56, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUShort_m1E7C683AD0C267AE798F9A0792C77B0AB4E352DB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD286333868137BF85A8336FC1E2CA63EE50F2FF3_RuntimeMethod_var);
		((Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t2F53305CA97B0053BA9BA5EA3F81181E1AE871E1_il2cpp_TypeInfo_var))->set_read_0(L_56);
		Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC * L_57 = (Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC *)il2cpp_codegen_object_new(Func_2_t90EAFD732B2B4964BF48E498CB882300A461F8DC_il2cpp_TypeInfo_var);
		Func_2__ctor_m0C675173979310FDC48C82B73CF42AA2B89D00FD(L_57, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadInt_mC2199858FE404723C88F84CDFA7CBA5529FB3A7E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0C675173979310FDC48C82B73CF42AA2B89D00FD_RuntimeMethod_var);
		((Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tB59D12D0BA006D24DB826D63A3060A2EF29126BA_il2cpp_TypeInfo_var))->set_read_0(L_57);
		Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 * L_58 = (Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8 *)il2cpp_codegen_object_new(Func_2_tFA58107B2ADA63E57073977950D949307DFCFCC8_il2cpp_TypeInfo_var);
		Func_2__ctor_m5EA4CFE00E036E2FAA797D554E3280CD97B1568E(L_58, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUInt_m54E706597F7552C2D138857E5CDF054E161D9B93_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m5EA4CFE00E036E2FAA797D554E3280CD97B1568E_RuntimeMethod_var);
		((Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tDEE37A20AB20402E09BB5D84BA9189BA7816B68B_il2cpp_TypeInfo_var))->set_read_0(L_58);
		Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 * L_59 = (Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6 *)il2cpp_codegen_object_new(Func_2_t9F73A2EDA4029728E6848DD9BA59742A81E547A6_il2cpp_TypeInfo_var);
		Func_2__ctor_mF39D455DF3310699A3BBDD0DE79B47D82B5990B5(L_59, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadLong_m6FC4A7B662CE119BC9AEE64B7251C85FA467949F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF39D455DF3310699A3BBDD0DE79B47D82B5990B5_RuntimeMethod_var);
		((Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t45E549DCC4230BD66C2289D5992B9BB0C06F531D_il2cpp_TypeInfo_var))->set_read_0(L_59);
		Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F * L_60 = (Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F *)il2cpp_codegen_object_new(Func_2_tB44F049B1BE4F9017E3A880BC96FA6493764119F_il2cpp_TypeInfo_var);
		Func_2__ctor_mAAD583B9AA9964A0744B85ED3D9B3CCC8F598825(L_60, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadULong_m240E007556EDA81FC4279A3774ED1898A6EA6BDD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAAD583B9AA9964A0744B85ED3D9B3CCC8F598825_RuntimeMethod_var);
		((Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t1604297B687D641BA34DCD405EB5FBD75DA90D12_il2cpp_TypeInfo_var))->set_read_0(L_60);
		Func_2_t9A360B6748840F99170B6123237D1853036F7404 * L_61 = (Func_2_t9A360B6748840F99170B6123237D1853036F7404 *)il2cpp_codegen_object_new(Func_2_t9A360B6748840F99170B6123237D1853036F7404_il2cpp_TypeInfo_var);
		Func_2__ctor_m11E96A4ADB4CA8D939B498743E46014B9348E475(L_61, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadFloat_mA28914962BF46493563D25492061089A7EA21724_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m11E96A4ADB4CA8D939B498743E46014B9348E475_RuntimeMethod_var);
		((Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tAB36C2E85BF18410E13EEBC97D47B7226CB546A6_il2cpp_TypeInfo_var))->set_read_0(L_61);
		Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD * L_62 = (Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD *)il2cpp_codegen_object_new(Func_2_t8B00896811666F45F7FC940FD5404394706BF1BD_il2cpp_TypeInfo_var);
		Func_2__ctor_mD20D7828B66CE686C779EE4632B411EE998C8D65(L_62, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadDouble_mF7B9EFA841EBB2FDB8FDA9BC35C88F38ADB70C81_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD20D7828B66CE686C779EE4632B411EE998C8D65_RuntimeMethod_var);
		((Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCC8E1B486AA6581772EA8478241042664CCB6B81_il2cpp_TypeInfo_var))->set_read_0(L_62);
		Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 * L_63 = (Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308 *)il2cpp_codegen_object_new(Func_2_t33A886EF8BE001DD748E02789DEF7DC0416A5308_il2cpp_TypeInfo_var);
		Func_2__ctor_m6062F4141E91D2BC37D0559AEF2E31764FCF422B(L_63, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadDecimal_mA6962E770412779FD09E8EB47EE9A19C240E8C92_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6062F4141E91D2BC37D0559AEF2E31764FCF422B_RuntimeMethod_var);
		((Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t25BD89A7EDEAD09AE21DA154F6190D11014AF183_il2cpp_TypeInfo_var))->set_read_0(L_63);
		Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 * L_64 = (Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58 *)il2cpp_codegen_object_new(Func_2_tE98010C87B9E8F049986A133C4FAA7704D6E0A58_il2cpp_TypeInfo_var);
		Func_2__ctor_m23093F76796FDE176420A09E31F2C7C34F996475(L_64, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadString_m376978493361699D173DE07F3F24649B1B6BED9C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m23093F76796FDE176420A09E31F2C7C34F996475_RuntimeMethod_var);
		((Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tBB5B5A6B22208F2F71AB5FE85D72066FF2C45964_il2cpp_TypeInfo_var))->set_read_0(L_64);
		Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 * L_65 = (Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815 *)il2cpp_codegen_object_new(Func_2_tE158C2F9CFF9B0D83BFDEB28A7A852FAC76E5815_il2cpp_TypeInfo_var);
		Func_2__ctor_mD2F066521551F7C47DA7690EF978FF36FC119CD1(L_65, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBytesAndSize_m470D9ED0184AD4ACD3E19B05B76A6AB2BD8761B6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD2F066521551F7C47DA7690EF978FF36FC119CD1_RuntimeMethod_var);
		((Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t229437A001ABDA27DB03C1AE567F77B79AB1D075_il2cpp_TypeInfo_var))->set_read_0(L_65);
		Func_2_tF450654C730338273C90867D294A49409661B91A * L_66 = (Func_2_tF450654C730338273C90867D294A49409661B91A *)il2cpp_codegen_object_new(Func_2_tF450654C730338273C90867D294A49409661B91A_il2cpp_TypeInfo_var);
		Func_2__ctor_m316FD5676147CBF1145DA14B9AA5A61889F32005(L_66, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBytesAndSizeSegment_m6BA8791C77126054F5199A8D26849A28CE709DB9_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m316FD5676147CBF1145DA14B9AA5A61889F32005_RuntimeMethod_var);
		((Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCFA5097A83DD7287842CC016883FC1CA5E3FE661_il2cpp_TypeInfo_var))->set_read_0(L_66);
		Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 * L_67 = (Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405 *)il2cpp_codegen_object_new(Func_2_tECEFA9E086697FA4A272451CAEF93533A7DFC405_il2cpp_TypeInfo_var);
		Func_2__ctor_mC4F3C05EF7F881DD60766450AC52C7D2BB1F2490(L_67, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector2_mD362013B8BD675E4EF63B0CFCC8DA038ED07E7E6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC4F3C05EF7F881DD60766450AC52C7D2BB1F2490_RuntimeMethod_var);
		((Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tEF2ECE53A51E5E05220FE22887DBEBC282D89433_il2cpp_TypeInfo_var))->set_read_0(L_67);
		Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 * L_68 = (Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072 *)il2cpp_codegen_object_new(Func_2_t6E67BDA28BA6F2AC33C23F0EC17CEDF94188B072_il2cpp_TypeInfo_var);
		Func_2__ctor_mA7D2CE32A0FF39A00D34F2C42A9EE49434690554(L_68, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector3_mF8892E49F8CDAE6B3C738E6ABFC2130DA0B6709F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA7D2CE32A0FF39A00D34F2C42A9EE49434690554_RuntimeMethod_var);
		((Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t8DB73D569E450A93C1722C51541BA29AB3BF3061_il2cpp_TypeInfo_var))->set_read_0(L_68);
		Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 * L_69 = (Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68 *)il2cpp_codegen_object_new(Func_2_t6A9BEBAD9547B1FE3055057969B8DB7272D95C68_il2cpp_TypeInfo_var);
		Func_2__ctor_mB1EA53DA0C057962D1352D901372DACB92101D00(L_69, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector4_m5B517C31BEFE1701064C7ECC5A1E9DCAC9929096_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB1EA53DA0C057962D1352D901372DACB92101D00_RuntimeMethod_var);
		((Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t55C6416713AD9D003AC9F470937F704F1EA84DE0_il2cpp_TypeInfo_var))->set_read_0(L_69);
		Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 * L_70 = (Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5 *)il2cpp_codegen_object_new(Func_2_tDC7BB37D5A03FF33F595D85A95F3DD03388792E5_il2cpp_TypeInfo_var);
		Func_2__ctor_m2D6CCD3352487A85E53B6AC6C8699421EAE4BF8D(L_70, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector2Int_m3878D94B794DE843659726E0F08E0874CDF80B69_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2D6CCD3352487A85E53B6AC6C8699421EAE4BF8D_RuntimeMethod_var);
		((Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tE20716BBCF2741AE08A987A35EC9BDB01314D8A6_il2cpp_TypeInfo_var))->set_read_0(L_70);
		Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 * L_71 = (Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57 *)il2cpp_codegen_object_new(Func_2_tD7411B865893D1E9478F4CCA73BC21C84B645A57_il2cpp_TypeInfo_var);
		Func_2__ctor_mBB0C62146EAF207D4970419DD4B1B149E86D772A(L_71, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector3Int_m2586E02A6E19C5F5FE0F45FAC2A4952AF815C4C6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBB0C62146EAF207D4970419DD4B1B149E86D772A_RuntimeMethod_var);
		((Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tA20C8318C9EFE7D8E3C81CDDBD2603386C087235_il2cpp_TypeInfo_var))->set_read_0(L_71);
		Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 * L_72 = (Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127 *)il2cpp_codegen_object_new(Func_2_tCF902E4874852CEEA69A02F5F66CDEC6A6BDA127_il2cpp_TypeInfo_var);
		Func_2__ctor_m585F131352B012B24C9B5174DE60745A630D92AB(L_72, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadColor_m7D14373FEA67BC197EBF4CDCD58CF07208F1B9ED_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m585F131352B012B24C9B5174DE60745A630D92AB_RuntimeMethod_var);
		((Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t2BFE3EF659C6994F245200107F0BCD392085CD7E_il2cpp_TypeInfo_var))->set_read_0(L_72);
		Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D * L_73 = (Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D *)il2cpp_codegen_object_new(Func_2_t78EBED9FB99910345C1182108A4AE85B37F8567D_il2cpp_TypeInfo_var);
		Func_2__ctor_m65E6859D99AF1E0E6F5FF85DD2067C06CC831BE5(L_73, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadColor32_m50B22DD146E709AA1D4071E5FD94631A30FFE208_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m65E6859D99AF1E0E6F5FF85DD2067C06CC831BE5_RuntimeMethod_var);
		((Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t053BF061B8F1E102104FBFFBBFC28BE4B0003688_il2cpp_TypeInfo_var))->set_read_0(L_73);
		Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 * L_74 = (Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741 *)il2cpp_codegen_object_new(Func_2_tAF163BF2A1B4F9F29C20DC00C4FF9E00FD990741_il2cpp_TypeInfo_var);
		Func_2__ctor_mF85ED4404B631A868BECA94BF0AEAAE5FA259F12(L_74, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadQuaternion_mB76E21A340B13F01281C940362D6DFF0A2B26437_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF85ED4404B631A868BECA94BF0AEAAE5FA259F12_RuntimeMethod_var);
		((Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tDA1EA98AE545E2B0DB17EA751AE359B3A88083E2_il2cpp_TypeInfo_var))->set_read_0(L_74);
		Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 * L_75 = (Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4 *)il2cpp_codegen_object_new(Func_2_t2DE82494BFF724818751368917FB1D0E7BC24EF4_il2cpp_TypeInfo_var);
		Func_2__ctor_mC7DE9BB4F20379E2FC582BE52979C2A94F556C99(L_75, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadRect_mEAE69E8CAE5DF5647AF6E3E226C502CF41EBB93C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC7DE9BB4F20379E2FC582BE52979C2A94F556C99_RuntimeMethod_var);
		((Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5796E9FFAAE6FDA1875C945BB83E0BF3F705D678_il2cpp_TypeInfo_var))->set_read_0(L_75);
		Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 * L_76 = (Func_2_t610BD76229872BDC0AADC016BA65D8293073C520 *)il2cpp_codegen_object_new(Func_2_t610BD76229872BDC0AADC016BA65D8293073C520_il2cpp_TypeInfo_var);
		Func_2__ctor_m1658A7C64B250B0A09C6F5E259E54481ADB69938(L_76, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadPlane_m2F9D729B0CBB60BCEA90EEEECCB842310DFB8157_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1658A7C64B250B0A09C6F5E259E54481ADB69938_RuntimeMethod_var);
		((Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCBA7CA8AA225C35974D462DE0979E5D6552D10A1_il2cpp_TypeInfo_var))->set_read_0(L_76);
		Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF * L_77 = (Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF *)il2cpp_codegen_object_new(Func_2_tA37C57293CE7045AC2B9C5DF113797BBD4B8EEFF_il2cpp_TypeInfo_var);
		Func_2__ctor_m00D28A9C18AB209910AAA3D0785A8419AF9AB895(L_77, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadRay_m7A68A5A3C35EB184299328500C3BDE9F77D84BE5_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m00D28A9C18AB209910AAA3D0785A8419AF9AB895_RuntimeMethod_var);
		((Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t15EA99C438D96B94807FEF8FC0394D0088E6B150_il2cpp_TypeInfo_var))->set_read_0(L_77);
		Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 * L_78 = (Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23 *)il2cpp_codegen_object_new(Func_2_t2E98220FAABB99CF1F3F3D03112138BAB9609F23_il2cpp_TypeInfo_var);
		Func_2__ctor_m7D6BF024B95CE683DB4017E62FC583265FDD8DB3(L_78, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadMatrix4x4_m01156CFDC6A527F32124DE1B710EFB71F36A4CFC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m7D6BF024B95CE683DB4017E62FC583265FDD8DB3_RuntimeMethod_var);
		((Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tB257EC311A61E6F51110B685B51EBB1D0B9EE2A4_il2cpp_TypeInfo_var))->set_read_0(L_78);
		Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D * L_79 = (Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D *)il2cpp_codegen_object_new(Func_2_tF1A272E64BE19559C392ADC695D4AF6BFA54896D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF1A3634FB7C5F17CAA9DAD1910F8F0AD146687A6(L_79, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadGuid_mF5051D5420D27EFE9528DEC1AA26B4737757D1E6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF1A3634FB7C5F17CAA9DAD1910F8F0AD146687A6_RuntimeMethod_var);
		((Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t3A33E269D1A7207035F6C31F8CBEDECB79CD3A13_il2cpp_TypeInfo_var))->set_read_0(L_79);
		Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 * L_80 = (Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524 *)il2cpp_codegen_object_new(Func_2_t1B35498E631D4D422CB3A2473CC0A750A801F524_il2cpp_TypeInfo_var);
		Func_2__ctor_mB9C68EF9E302DE8C95506D74105D38157A7209EE(L_80, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadTransform_mAD022F78AA9379D17468DFB76800283639744AFB_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB9C68EF9E302DE8C95506D74105D38157A7209EE_RuntimeMethod_var);
		((Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t849E200053098DE3D1F7CA2C8FCD95C07E3FD1C4_il2cpp_TypeInfo_var))->set_read_0(L_80);
		Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 * L_81 = (Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029 *)il2cpp_codegen_object_new(Func_2_tBAB83788934CBBC53845FBB26F0EF288CC7AD029_il2cpp_TypeInfo_var);
		Func_2__ctor_mD25737902751766E0EDB44884827D16A2549753C(L_81, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadGameObject_m9E5CBFD81A7BF32F17C1BFBCEDE3B6173C86F871_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD25737902751766E0EDB44884827D16A2549753C_RuntimeMethod_var);
		((Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t6D4BAC3C9E680561B98F98C5CBC174479B872638_il2cpp_TypeInfo_var))->set_read_0(L_81);
		Func_2_t597BD424264436C8850D43108B60117716AD99CE * L_82 = (Func_2_t597BD424264436C8850D43108B60117716AD99CE *)il2cpp_codegen_object_new(Func_2_t597BD424264436C8850D43108B60117716AD99CE_il2cpp_TypeInfo_var);
		Func_2__ctor_mD7DAAB9441FD46B1525FE1D0FDE0437780B1EB98(L_82, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkIdentity_mADB84529862C7551B8FBA24B832967F13BBA4358_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD7DAAB9441FD46B1525FE1D0FDE0437780B1EB98_RuntimeMethod_var);
		((Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t3E1D7680D65A56B378FD63883C99EEB7AD403173_il2cpp_TypeInfo_var))->set_read_0(L_82);
		Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB * L_83 = (Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB *)il2cpp_codegen_object_new(Func_2_t1994C9EEFC944B4EECB156D6809E9CEA80682CAB_il2cpp_TypeInfo_var);
		Func_2__ctor_m1608C4AFB23AF8B729D351853415CE4DA0742646(L_83, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkBehaviour_m619C0C1EB91CC32FFECA8511DE41B3F1E6E1580B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1608C4AFB23AF8B729D351853415CE4DA0742646_RuntimeMethod_var);
		((Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t8E383286A18964C139B6A9AC65E14218E6569F64_il2cpp_TypeInfo_var))->set_read_0(L_83);
		Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE * L_84 = (Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE *)il2cpp_codegen_object_new(Func_2_t5D06D1BA54FC02EEFD2203897D86CCC52DEDCFEE_il2cpp_TypeInfo_var);
		Func_2__ctor_m0FCB7EF250BEAE6CEF3EE4A30665E95B202D074A(L_84, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkBehaviourSyncVar_m748B952B66504568E23B970657F5CB6C2B919BF9_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0FCB7EF250BEAE6CEF3EE4A30665E95B202D074A_RuntimeMethod_var);
		((Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t8C9487F7930A5925716BDFF69C667BB8A2C94C3A_il2cpp_TypeInfo_var))->set_read_0(L_84);
		Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 * L_85 = (Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793 *)il2cpp_codegen_object_new(Func_2_t0320008A7CD5780A7F1259EF10C83EF6BF44B793_il2cpp_TypeInfo_var);
		Func_2__ctor_m6BE7167086AA3E6881509E66CBEC5A27F5FC60CD(L_85, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUri_m39913AB35ADC2CEA6A4EA586CB68C77C8C69D8CF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6BE7167086AA3E6881509E66CBEC5A27F5FC60CD_RuntimeMethod_var);
		((Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t1A59F3586820442901EF1359538EB08FFAD7F9CE_il2cpp_TypeInfo_var))->set_read_0(L_85);
		Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F * L_86 = (Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F *)il2cpp_codegen_object_new(Func_2_tDDC630213CFEC2B04BBE6A283A966DD03320257F_il2cpp_TypeInfo_var);
		Func_2__ctor_m65AEED96E6D7457711214F1B359E51242D70BDD7(L_86, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ReadyMessage_m333E2438821BCE0308B276A0743C0F9B2A34ABA4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m65AEED96E6D7457711214F1B359E51242D70BDD7_RuntimeMethod_var);
		((Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t9B2F2CB77520E45E085E5D881361A251D62AA569_il2cpp_TypeInfo_var))->set_read_0(L_86);
		Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 * L_87 = (Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27 *)il2cpp_codegen_object_new(Func_2_t314F3C4E8EE6542FFA70B4DC4772009492AA9E27_il2cpp_TypeInfo_var);
		Func_2__ctor_m1C0F50205A7E807525669CFE20984A28E26B535F(L_87, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mDBCB8A1E137E48B9E3C2738D2F7C6C988BF68463_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1C0F50205A7E807525669CFE20984A28E26B535F_RuntimeMethod_var);
		((Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5421170F162957F5BAC54FCEB14EF95D7C2F90A7_il2cpp_TypeInfo_var))->set_read_0(L_87);
		Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 * L_88 = (Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88 *)il2cpp_codegen_object_new(Func_2_tD15EECF3B28CE29F1DD8A412EF324932A01F4C88_il2cpp_TypeInfo_var);
		Func_2__ctor_m8E52D37C2FF38F8B84D60E0AB8F731D1096AC083(L_88, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m264FCFFBB1C505E01D3831668EAAD07BE031E898_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8E52D37C2FF38F8B84D60E0AB8F731D1096AC083_RuntimeMethod_var);
		((Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t68EE3F5E6558E588CA086F32B131590773E6602B_il2cpp_TypeInfo_var))->set_read_0(L_88);
		Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 * L_89 = (Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37 *)il2cpp_codegen_object_new(Func_2_t9B010846B40DE9CF096031D7417CD23E17758A37_il2cpp_TypeInfo_var);
		Func_2__ctor_m53716F485A123F63E390E4FF6AA84B5191FA64C8(L_89, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SceneMessage_mB2E4D466F252F16937F497C945EE936A4D22BBD4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m53716F485A123F63E390E4FF6AA84B5191FA64C8_RuntimeMethod_var);
		((Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t4634C18DA71A08ED644E848D61883849BD0F24DA_il2cpp_TypeInfo_var))->set_read_0(L_89);
		Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC * L_90 = (Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC *)il2cpp_codegen_object_new(Func_2_t7F7F5AF377BB72BAD8A5CB7182F187A0AB8590CC_il2cpp_TypeInfo_var);
		Func_2__ctor_mF73D703CB4103F897E2CFC8785C6B2D73FE0F520(L_90, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SceneOperation_m5F6FBA0FFAD88814AA9600F4C6A1CEAF1D06AB58_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF73D703CB4103F897E2CFC8785C6B2D73FE0F520_RuntimeMethod_var);
		((Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCA2E046EB9F39FE75A9D812ACE7C6B1E4FC7C9AD_il2cpp_TypeInfo_var))->set_read_0(L_90);
		Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B * L_91 = (Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B *)il2cpp_codegen_object_new(Func_2_t910B80C0CEFBB516D4A47C18FDDE22AAE4D0AC2B_il2cpp_TypeInfo_var);
		Func_2__ctor_m1F79DE1846A8EF1A507C07832D7053570FE93676(L_91, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_CommandMessage_m30CF7613B628FCA060D3028BC1679FFC7687661C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1F79DE1846A8EF1A507C07832D7053570FE93676_RuntimeMethod_var);
		((Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tB48D86462C2D2549F0BEC952BE804E9B381915D6_il2cpp_TypeInfo_var))->set_read_0(L_91);
		Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B * L_92 = (Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B *)il2cpp_codegen_object_new(Func_2_t3A7A859C89C773880D1A49E392D871BCAA86B59B_il2cpp_TypeInfo_var);
		Func_2__ctor_m0F58A97E34A168589EBE6BFE9A53BA4E0D333B4F(L_92, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_RpcMessage_mC1275440C09A8D01194C630FEAC86950A4820C19_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0F58A97E34A168589EBE6BFE9A53BA4E0D333B4F_RuntimeMethod_var);
		((Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tA3B0C6DB725186805CBE847E8AF739340374728A_il2cpp_TypeInfo_var))->set_read_0(L_92);
		Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD * L_93 = (Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD *)il2cpp_codegen_object_new(Func_2_t16C9420DF343557AC8AB38B2819CF457EE4C25CD_il2cpp_TypeInfo_var);
		Func_2__ctor_mB77B30CDB11C83AF276817169AB7E5CFA5E55E4F(L_93, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SpawnMessage_m7D1F92A4AEB1A350E5552FD5FDE73F0E7096854F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB77B30CDB11C83AF276817169AB7E5CFA5E55E4F_RuntimeMethod_var);
		((Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t9A2373914AAEDC624C91BCA6F6FD65444D759874_il2cpp_TypeInfo_var))->set_read_0(L_93);
		Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 * L_94 = (Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68 *)il2cpp_codegen_object_new(Func_2_t44F5E913B763A43541C3F77F21E88155ADC68E68_il2cpp_TypeInfo_var);
		Func_2__ctor_m693C5C4901E27CF091042335EDC65A543FDA7788(L_94, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_m2AFB7E3609D339ABAAC07C71CC2BE277AFBD2614_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m693C5C4901E27CF091042335EDC65A543FDA7788_RuntimeMethod_var);
		((Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t808B99EE2E027FE8829B2E74887D4FD88189DE96_il2cpp_TypeInfo_var))->set_read_0(L_94);
		Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 * L_95 = (Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5 *)il2cpp_codegen_object_new(Func_2_tD31F701EFED84AE170D15F8C6A88CE127B0E29B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mD0CE92B35012A2516E42C68A9828C3863634E419(L_95, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_mCCFE88F44EE2AAAEEC78AB8265B05B9088FA5A33_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD0CE92B35012A2516E42C68A9828C3863634E419_RuntimeMethod_var);
		((Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t3DCF3986631A2EB5B99C399053C2A13FEC26E010_il2cpp_TypeInfo_var))->set_read_0(L_95);
		Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B * L_96 = (Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B *)il2cpp_codegen_object_new(Func_2_t6F7B57CB09B754474ECA4C0FCF5CCDDE9EBD849B_il2cpp_TypeInfo_var);
		Func_2__ctor_mA74D3CF2B53350D8DC506210FD175E6F65D1F616(L_96, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m686E47B45DAFAF001795218660DA054AEAC4E434_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA74D3CF2B53350D8DC506210FD175E6F65D1F616_RuntimeMethod_var);
		((Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t88006BEB44457088C982045D665CA1E30EB1DC8D_il2cpp_TypeInfo_var))->set_read_0(L_96);
		Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 * L_97 = (Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96 *)il2cpp_codegen_object_new(Func_2_t615AEA17B136874A15A33AF2D65687D1860C8B96_il2cpp_TypeInfo_var);
		Func_2__ctor_mE3DB85A209C35E388B8780967CF82C384BDCF8C8(L_97, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_mC6DE5DCFCAB8D00C51D9816436FD20A37E978A2E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE3DB85A209C35E388B8780967CF82C384BDCF8C8_RuntimeMethod_var);
		((Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t6310D612B55DF412533C784287EB10B4E0E3A166_il2cpp_TypeInfo_var))->set_read_0(L_97);
		Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 * L_98 = (Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914 *)il2cpp_codegen_object_new(Func_2_t8A57B7CED90D629D1DB3A84916383AD777B1D914_il2cpp_TypeInfo_var);
		Func_2__ctor_mDF27A383813AB6BD09B022BF9706D2E652B6F529(L_98, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_EntityStateMessage_m792B29E99DBE36E29143C4D1DC0BE1B65BD91D06_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDF27A383813AB6BD09B022BF9706D2E652B6F529_RuntimeMethod_var);
		((Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t60C04978F7276AB0E3BFBED0AFCCA8BF52294501_il2cpp_TypeInfo_var))->set_read_0(L_98);
		Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 * L_99 = (Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406 *)il2cpp_codegen_object_new(Func_2_t5E8FAEA49960A6EF837FF68750B318EDE7A5F406_il2cpp_TypeInfo_var);
		Func_2__ctor_m215EC2F7C637B559E9565E7DD0339C710AAA9B5E(L_99, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_m98AF57541D49BFBD7D62653C63090E10311324C7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m215EC2F7C637B559E9565E7DD0339C710AAA9B5E_RuntimeMethod_var);
		((Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t355FA9D4B0F49A05447BD7A49E1F7FEC7E4BA788_il2cpp_TypeInfo_var))->set_read_0(L_99);
		Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F * L_100 = (Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F *)il2cpp_codegen_object_new(Func_2_tB47B7CE2C47DA4CFBC29849ACF10ABA1FEFC123F_il2cpp_TypeInfo_var);
		Func_2__ctor_mC8D11F9EB8CDA11AF76948A9DB8D2827A40A0A92(L_100, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_mF487E5DEE9C99048CB050EBDFEAE3AC13CCBFC43_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC8D11F9EB8CDA11AF76948A9DB8D2827A40A0A92_RuntimeMethod_var);
		((Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tEFB721F9BDC65AFF7E35EF654826E08BB13930F4_il2cpp_TypeInfo_var))->set_read_0(L_100);
		Func_2_t1728381655CAD983688CD059AA1704C0BE018793 * L_101 = (Func_2_t1728381655CAD983688CD059AA1704C0BE018793 *)il2cpp_codegen_object_new(Func_2_t1728381655CAD983688CD059AA1704C0BE018793_il2cpp_TypeInfo_var);
		Func_2__ctor_mC270B48DDCD673C6FB15D9406A7229DD941321EF(L_101, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthRequestMessage_mC20A57D10E197099E20FCB6304CC074590BC8949_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC270B48DDCD673C6FB15D9406A7229DD941321EF_RuntimeMethod_var);
		((Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t3D01D2C8C288704A0184C588B7F73C5EDA095BCD_il2cpp_TypeInfo_var))->set_read_0(L_101);
		Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 * L_102 = (Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162 *)il2cpp_codegen_object_new(Func_2_t50C392130A8138EEAD095221CC3F4B52732BD162_il2cpp_TypeInfo_var);
		Func_2__ctor_mE0A12F9122D435543EAC3BE4961B0341697881B3(L_102, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_Authenticators_BasicAuthenticator_AuthResponseMessage_mFD95DBD4A52EF7EB1AAAFBFE020A4E8AD26C222E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE0A12F9122D435543EAC3BE4961B0341697881B3_RuntimeMethod_var);
		((Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tC9434884A2C66C163293C5D1EF0D49B24BF64574_il2cpp_TypeInfo_var))->set_read_0(L_102);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkClient_get_connection_m522710D02FBA43C477CD30042FEDA537611DA554Mirror_Authenticators_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkConnection connection { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_0 = ((NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_StaticFields*)il2cpp_codegen_static_fields_for(NetworkClient_tF8429BA1B702C5F0363D4A2313066F7C81BEF980_il2cpp_TypeInfo_var))->get_U3CconnectionU3Ek__BackingField_1();
		return L_0;
	}
}
