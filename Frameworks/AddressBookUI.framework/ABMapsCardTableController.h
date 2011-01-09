/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSString;



@interface ABMapsCardTableController : ABUnknownCardTableController <UIActionSheetDelegate>
{
    NSMutableArray *_mapsPropertyGroups;
    BOOL _showAddToBookmarks;
    BOOL _showAddToBookmarksFirst;
    BOOL _showRemovePin;
    BOOL _showShareLocation;
    NSString *_attribution;
    BOOL _enableAttributionClicks;
    id _actionSheetDelegate;
}


- (id)initWithCardController:(id)arg1;
- (void)dealloc;
- (void)setPersonImage:(id)arg1;
- (void)setValue:(id)arg1 withLabel:(id)arg2 forProperty:(NSInteger)arg3;
- (void)setShouldShowAddToBookmarks:(BOOL)arg1;
- (void)setShouldShowAddToBookmarksFirst:(BOOL)arg1;
- (void)setShouldShowShareLocation:(BOOL)arg1;
- (void)setShouldShowRemovePin:(BOOL)arg1;
- (id)propertyGroups;
- (void)setAttributionString:(id)arg1 enable:(BOOL)arg2;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (void)getFirstPropertyGroupIndex:(NSInteger*)arg1 directionsGroupIndex:(NSInteger*)arg2 saveAddressGroupIndex:(NSInteger*)arg3 removePinGroupIndex:(NSInteger*)arg4 attributionGroupIndex:(NSInteger*)arg5;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (id)createAttributionCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (void)presentAddToContactsSheetWithCardViewer:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)mapsCardTableControllerActionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)tableSelectionDidChange:(id)arg1;

@end