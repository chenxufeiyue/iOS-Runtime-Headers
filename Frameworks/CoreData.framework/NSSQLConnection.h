/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLStatement, NSArray, NSSQLAdapter;

@interface NSSQLConnection : NSObject {
    NSSQLAdapter *_adapter;
    NSArray *_columnsToFetch;
    int _debug;
    NSArray *_metadataColumns;
    NSSQLStatement *_sqlStatement;
    BOOL _transactionIsOpen;
    BOOL _useSyntaxColoredLogging;
}

+ (void)initialize;

- (void)_forceDisconnectOnError;
- (void)_performPostSaveTasks;
- (void)_raiseOptimisticLockingExceptionWithReason:(id)arg1;
- (id)adapter;
- (void)addPeerRange:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (void)awake;
- (void)beginTransaction;
- (BOOL)canConnect;
- (id)columnsToFetch;
- (void)commitTransaction;
- (void)connect;
- (void)createIndexesForEntity:(id)arg1;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (void)createMetadata;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2;
- (void)createSchema;
- (void)createTableForEntity:(id)arg1;
- (void)createTablesForEntities:(id)arg1;
- (BOOL)databaseIsEmpty;
- (void)dealloc;
- (void)deleteCorrelation:(id)arg1;
- (void)deleteRow:(id)arg1;
- (id)describeResults;
- (void)didCreateSchema;
- (void)disconnect;
- (void)dropUbiquityTables;
- (void)endFetch;
- (void)endPrimaryKeyGeneration;
- (void)execute;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (id)fetchMetadata;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (id)fetchUbiquityKnowledgeVector;
- (void)finalize;
- (void)forceTransactionClosed;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (BOOL)hasMetadataTable;
- (BOOL)hasOpenTransaction;
- (BOOL)hasPrimaryKeyTable;
- (id)initWithAdapter:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)insertRow:(id)arg1;
- (BOOL)isFetchInProgress;
- (BOOL)isOpen;
- (id)metadataColumns;
- (id)newFetchedArray;
- (void)performAdapterOperation:(id)arg1;
- (void)performAdapterOperations:(id)arg1;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (void)prepareForPrimaryKeyGeneration;
- (void)prepareSQLStatement:(id)arg1;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)rollbackTransaction;
- (void)saveMetadata:(id)arg1;
- (void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(BOOL)arg3 entity:(id)arg4;
- (void)setColumnsToFetch:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (void)sleep;
- (id)sqlStatement;
- (void)transactionDidBegin;
- (void)transactionDidCommit;
- (void)transactionDidRollback;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)willCreateSchema;

@end