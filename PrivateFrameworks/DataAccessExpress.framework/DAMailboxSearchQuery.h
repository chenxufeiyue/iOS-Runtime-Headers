/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString;



@interface DAMailboxSearchQuery : DASearchQuery 
{
    NSString *_collectionID;
    NSInteger _bodyType;
    long long _truncationSize;
    BOOL _allOrNone;
    NSDate *_priorToDate;
    NSInteger _MIMESupport;
    BOOL _deepTraversal;
    BOOL _rebuildResults;
}

@property BOOL rebuildResults;
@property BOOL deepTraversal;
@property NSInteger MIMESupport;
@property(retain) NSDate *priorToDate;
@property BOOL allOrNone;
@property long long truncationSize;
@property NSInteger bodyType;
@property(retain) NSString *collectionID;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)rebuildResults;
- (void)setRebuildResults:(BOOL)arg1;
- (BOOL)deepTraversal;
- (void)setDeepTraversal:(BOOL)arg1;
- (NSInteger)MIMESupport;
- (void)setMIMESupport:(NSInteger)arg1;
- (id)priorToDate;
- (void)setPriorToDate:(id)arg1;
- (BOOL)allOrNone;
- (void)setAllOrNone:(BOOL)arg1;
- (long long)truncationSize;
- (void)setTruncationSize:(long long)arg1;
- (NSInteger)bodyType;
- (void)setBodyType:(NSInteger)arg1;
- (id)collectionID;
- (void)setCollectionID:(id)arg1;

@end