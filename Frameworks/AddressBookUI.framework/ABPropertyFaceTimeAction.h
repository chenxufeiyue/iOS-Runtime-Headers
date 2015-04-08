/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPropertyBestIDSValueQuery;

@interface ABPropertyFaceTimeAction : ABPropertyAction {
    ABPropertyBestIDSValueQuery *_bestFaceTimeQuery;
    int _type;
}

@property(retain) ABPropertyBestIDSValueQuery * bestFaceTimeQuery;
@property int type;

- (void)_queryFaceTimeStatus;
- (id)bestFaceTimeQuery;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)setBestFaceTimeQuery:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end