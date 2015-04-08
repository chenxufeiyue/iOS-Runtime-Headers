/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKModel>, NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {
    TSWPChange *_change;
    NSString *mChangeTrackingContentString;
    NSString *mChangeTrackingTitleString;
}

@property(readonly) int annotationDisplayStringType;
@property(readonly) int annotationType;
@property(readonly) TSKAnnotationAuthor * author;
@property(retain) TSWPChange * change;
@property(readonly) NSString * changeTrackingContentFormatString;
@property(readonly) NSString * changeTrackingContentString;
@property(readonly) NSString * changeTrackingTitleString;
@property(readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <TSKModel> * hostingModel;
@property(copy) TSDCommentStorage * storage;
@property(readonly) Class superclass;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)change;
- (id)changeTrackingContentFormatString;
- (id)changeTrackingContentString;
- (id)changeTrackingTitleString;
- (void)commentWillBeAddedToDocumentRoot;
- (void)commitText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)hostingModel;
- (id)initWithChange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChangeDetails:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_rangeInStorage;
- (void)p_updateChangeStrings;
- (void)setAuthor:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setHostingModel:(id)arg1;

@end