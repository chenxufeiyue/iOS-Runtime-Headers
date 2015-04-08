/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CUIMutableCommonAssetStorage, CoreThemeDocument, NSArray, NSMutableArray, NSString, NSThread, TDLogger;

@interface TDDistiller : NSObject {
    NSString *_accumulatedErrorDescription;
    int _assetStoreVersionNumber;
    NSString *_assetStoreVersionString;
    NSThread *_callbackThread;
    BOOL _cancelled;
    NSArray *_changedProductions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _fileCompression;
    BOOL _finished;
    BOOL _incremental;
    TDLogger *_logger;
    NSArray *_mainThreadPerformRunLoopModes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _oldCompletionHandler;

    BOOL _successful;
    CUIMutableCommonAssetStorage *assetStore;
    CoreThemeDocument *document;
    NSMutableArray *renditionEntries;
}

@property(retain) NSString * accumulatedErrorDescription;
@property int assetStoreVersionNumber;
@property(copy) NSString * assetStoreVersionString;
@property(retain) NSThread * callbackThread;
@property(getter=isCancelled) BOOL cancelled;
@property(copy) id completionHandler;
@property int fileCompression;
@property(getter=isFinished) BOOL finished;
@property(getter=isIncremental) BOOL incremental;
@property(retain) TDLogger * logger;
@property(copy) id oldCompletionHandler;
@property(getter=isSuccessful) BOOL successful;

- (void)_accumulateErrorDescription:(id)arg1;
- (id)_copyStandardEffectDefinitions;
- (void)_distill:(id)arg1;
- (void)_distillChanges:(id)arg1;
- (BOOL)_distillColorDefinitions:(id)arg1;
- (BOOL)_distillCursorFacetDefinitions:(id)arg1;
- (void)_distillDebuggingInfoForConstants:(id)arg1 isElement:(BOOL)arg2;
- (BOOL)_distillFonts:(id)arg1;
- (BOOL)_distillNamedElements:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logInfo:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (BOOL)_recordRenditionEntryFromRendition:(id)arg1;
- (unsigned int)_removeRenditionsWithKeySpecs:(id)arg1;
- (id)_renditionsFromProductions:(id)arg1 error:(id*)arg2;
- (id)_renditionsWithError:(id*)arg1;
- (void)_resetDocumentUuid:(id)arg1;
- (BOOL)_setupWithOutputPath:(id)arg1 attemptIncremental:(BOOL)arg2;
- (BOOL)_sortRenditionEntries;
- (void)_storeRenditions;
- (id)accumulatedErrorDescription;
- (int)assetStoreVersionNumber;
- (id)assetStoreVersionString;
- (void)beginDistillWithCompletionHandler:(id)arg1;
- (id)callbackThread;
- (void)cancelDistill;
- (id)completionHandler;
- (void)dealloc;
- (BOOL)distillCursorFacetDefinitions;
- (BOOL)distillCustomColors;
- (BOOL)distillCustomFontSizes;
- (BOOL)distillCustomFonts;
- (BOOL)distillDebuggingInfo;
- (BOOL)distillNamedElements;
- (BOOL)distillRenditions;
- (void)distillWithCompletionHandler:(id)arg1;
- (BOOL)distillZeroCodeArtworkElementAndPartIdentifiers;
- (BOOL)distillZeroCodeArtworkInfo:(id)arg1 ofType:(int)arg2;
- (BOOL)distillZeroCodeArtworkInfoOfType:(int)arg1;
- (id)documentPath;
- (int)fileCompression;
- (void)finishDistillationWithSuccess:(BOOL)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 versionString:(id)arg4;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isIncremental;
- (BOOL)isSuccessful;
- (id)keyFormatData;
- (id)logger;
- (void)markDistillationAsFinished;
- (id)oldCompletionHandler;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)saveAndDistillWithCompletionHandler:(id)arg1;
- (void)setAccumulatedErrorDescription:(id)arg1;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 fromRenditionSpec:(id)arg3;
- (void)setAssetStoreVersionNumber:(int)arg1;
- (void)setAssetStoreVersionString:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setFileCompression:(int)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setIncremental:(BOOL)arg1;
- (void)setLogger:(id)arg1;
- (void)setOldCompletionHandler:(id)arg1;
- (void)setSuccessful:(BOOL)arg1;
- (BOOL)sortAndStoreRenditions;
- (void)waitTimerDidFire:(id)arg1;
- (void)waitUntilFinished;
- (id)zeroCodeArtworkInfoOfType:(int)arg1 error:(id*)arg2;

@end