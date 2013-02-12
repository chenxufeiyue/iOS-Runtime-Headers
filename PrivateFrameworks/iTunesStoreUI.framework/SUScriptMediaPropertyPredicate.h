/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property(readonly) NSString * comparisonType;
@property(readonly) MPMediaPropertyPredicate * nativePredicate;
@property(readonly) NSString * property;
@property(readonly) id value;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_className;
- (id)_copyComparisonType;
- (id)_copyProperty;
- (id)_copyValue;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (void)_setProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3;
- (id)attributeKeys;
- (id)comparisonType;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativePredicate;
- (id)property;
- (id)scriptAttributeKeys;
- (id)value;

@end