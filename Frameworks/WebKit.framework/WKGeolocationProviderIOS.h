/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKGeolocationProviderIOS : NSObject <WebGeolocationCoreLocationUpdateListener> {
    struct RetainPtr<WebGeolocationCoreLocationProvider> { 
        void *m_ptr; 
    } _coreLocationProvider;
    struct RefPtr<WebKit::WebGeolocationManagerProxy> { 
        struct WebGeolocationManagerProxy {} *m_ptr; 
    } _geolocationManager;
    BOOL _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition> { 
        struct WebGeolocationPosition {} *m_ptr; 
    } _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow> { 
        struct GeolocationRequestData {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    } _requestsWaitingForCoreLocationAuthorization;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setEnableHighAccuracy:(BOOL)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)decidePolicyForGeolocationRequestFromOrigin:(struct OpaqueWKSecurityOrigin { }*)arg1 frame:(struct OpaqueWKFrame { }*)arg2 request:(struct OpaqueWKGeolocationPermissionRequest { }*)arg3 window:(id)arg4;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)init;
- (id)initWithContext:(struct WebContext { int (**x1)(); id x2; int (**x3)(); struct MessageReceiverMap { struct HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_4_1_1; struct HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<std::__1::pair<IPC::StringReference, unsigned long long>, WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> >, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> > > { struct KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_4_1_2; } x4; int x5; unsigned int x6; struct Vector<WTF::RefPtr<WebKit::WebProcessProxy>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebKit::WebProcessProxy> {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; struct WebProcessProxy {} *x9; struct Ref<WebKit::WebPageGroup> { struct WebPageGroup {} *x_10_1_1; } x10; struct RefPtr<API::Object> { struct Object {} *x_11_1_1; } x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; struct WebContextInjectedBundleClient { struct WKContextInjectedBundleClientV1 { struct WKContextInjectedBundleClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); } x_13_1_1; } x13; struct WebContextClient { struct WKContextClientV1 { struct WKContextClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); } x_14_1_1; } x14; struct WebContextConnectionClient { struct WKContextConnectionClientV0 { struct WKContextConnectionClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); } x_15_1_1; } x15; struct unique_ptr<API::DownloadClient, std::__1::default_delete<API::DownloadClient> > { struct __compressed_pair<API::DownloadClient *, std::__1::default_delete<API::DownloadClient> > { struct DownloadClient {} *x_1_2_1; } x_16_1_1; } x16; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_17_1_1; } x17; struct RefPtr<WebKit::VisitedLinkProvider> { struct VisitedLinkProvider {} *x_18_1_1; } x18; bool x19; struct PlugInAutoStartProvider { struct WebContext {} *x_20_1_1; struct HashMap<WebCore::SessionID, WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > >, WTF::SessionIDHash, WTF::HashTraits<WebCore::SessionID>, WTF::HashTraits<WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > > > > { struct HashTable<WebCore::SessionID, WTF::KeyValuePair<WebCore::SessionID, WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::SessionID, WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > > > >, WTF::SessionIDHash, WTF::HashMap<WebCore::SessionID, WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > >, WTF::SessionIDHash, WTF::HashTraits<WebCore::SessionID>, WTF::HashTraits<WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > > > >::KeyValuePairTraits, WTF::HashTraits<WebCore::SessionID> > { struct KeyValuePair<WebCore::SessionID, WTF::HashMap<WTF::String, WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> >, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::HashMap<unsigned int, double, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<double> > > > > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_20_1_2; struct HashMap<WebCore::SessionID, WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> >, WTF::SessionIDHash, WTF::HashTraits<WebCore::SessionID>, WTF::HashTraits<WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> > > > { struct HashTable<WebCore::SessionID, WTF::KeyValuePair<WebCore::SessionID, WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::SessionID, WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> > > >, WTF::SessionIDHash, WTF::HashMap<WebCore::SessionID, WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> >, WTF::SessionIDHash, WTF::HashTraits<WebCore::SessionID>, WTF::HashTraits<WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> > > >::KeyValuePairTraits, WTF::HashTraits<WebCore::SessionID> > { struct KeyValuePair<WebCore::SessionID, WTF::HashMap<unsigned int, WTF::String, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::String> > > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_3_2_1; } x_20_1_3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_20_1_4; } x20; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_21_1_1; } x21; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_22_1_1; } x22; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_23_1_1; } x23; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_24_1_1; } x24; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_25_1_1; } x25; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_26_1_1; } x26; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_27_1_1; } x27; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_28_1_1; } x28; bool x29; bool x30; struct Vector<std::__1::pair<WTF::String, WTF::RefPtr<API::Object> >, 0, WTF::CrashOnOverflow> { struct pair<WTF::String, WTF::RefPtr<API::Object> > {} *x_31_1_1; unsigned int x_31_1_2; unsigned int x_31_1_3; } x31; int x32; bool x33; double x34; struct RefPtr<WebKit::WebIconDatabase> { struct WebIconDatabase {} *x_35_1_1; } x35; struct RefPtr<WebKit::StorageManager> { struct StorageManager {} *x_36_1_1; } x36; struct HashMap<const char *, WTF::RefPtr<WebKit::WebContextSupplement>, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<WTF::RefPtr<WebKit::WebContextSupplement> > > { struct HashTable<const char *, WTF::KeyValuePair<const char *, WTF::RefPtr<WebKit::WebContextSupplement> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const char *, WTF::RefPtr<WebKit::WebContextSupplement> > >, WTF::PtrHash<const char *>, WTF::HashMap<const char *, WTF::RefPtr<WebKit::WebContextSupplement>, WTF::PtrHash<const char *>, WTF::HashTraits<const char *>, WTF::HashTraits<WTF::RefPtr<WebKit::WebContextSupplement> > >::KeyValuePairTraits, WTF::HashTraits<const char *> > { struct KeyValuePair<const char *, WTF::RefPtr<WebKit::WebContextSupplement> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_37_1_1; } x37; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_38_1_1; } x38; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_39_1_1; } x39; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_40_1_1; } x40; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_41_1_1; } x41; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_42_1_1; } x42; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_43_1_1; } x43; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_44_1_1; } x44; bool x45; bool x46; bool x47; struct RefPtr<WebKit::NetworkProcessProxy> { struct NetworkProcessProxy {} *x_48_1_1; } x48; struct RefPtr<WebKit::DatabaseProcessProxy> { struct DatabaseProcessProxy {} *x_49_1_1; } x49; struct HashMap<unsigned long long, WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> > > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> > > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GenericCallback<WebKit::ImmutableDictionary *> > > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_50_1_1; } x50; struct HashMap<unsigned long long, WTF::RefPtr<WebKit::StatisticsRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::StatisticsRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::StatisticsRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::StatisticsRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::StatisticsRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::StatisticsRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::StatisticsRequest> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_51_1_1; } x51; bool x52; struct RetainPtr<NSMutableDictionary> { void *x_53_1_1; } x53; }*)arg1;
- (void)positionChanged:(struct GeolocationPosition { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (void)resetGeolocation;

@end