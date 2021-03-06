/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPassHeaderViewDelegate, PKPaymentDataProviderDelegate, PKPaymentSetupDelegate, PKPaymentVerificationControllerDelegate, PKPerformActionViewControllerDelegate, PSStateRestoration, UITableViewDataSource, UITableViewDelegate> {
    PKPaymentPassDetailActivationFooterView * _activationFooter;
    NSArray * _allPaymentApplications;
    PKSettingTableCell * _automaticPresentationSwitch;
    UIVisualEffectView * _blurView;
    NSArray * _commuterFields;
    NSArray * _contactlessPaymentApplications;
    BOOL  _deepLinkingEnabled;
    PKPaymentApplication * _defaultPaymentApplication;
    <PKPassDeleteHandler> * _deleteOverrider;
    UIColor * _detailTextColor;
    int  _detailViewStyle;
    PKFelicaPassProperties * _felicaProperties;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _headerContentInset;
    float  _headerHeight;
    UIView * _headerView;
    UIColor * _highlightColor;
    UIView * _keyLine;
    UIColor * _linkTextColor;
    PKLinkedApplication * _linkedApplication;
    PKSettingTableCell * _messagesSwitch;
    BOOL  _navigationControllerHidesShadow;
    PKPaymentPass * _pass;
    PKPassHeaderView * _passHeaderView;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    NSArray * _paymentApplications;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    NSNumber * _paymentTransactionCellHeightCache;
    NSMutableDictionary * _pendingTransactions;
    BOOL  _performingCardTransfer;
    UIColor * _primaryTextColor;
    UISegmentedControl * _tabBar;
    float  _tabBarHeight;
    NSArray * _tabBarSegments;
    NSObject<OS_dispatch_source> * _transactionTimer;
    NSArray * _transactions;
    PKSettingTableCell * _transactionsSwitch;
    PKPaymentVerificationController * _verificationController;
    UIColor * _warningTextColor;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteHandler> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIColor *detailTextColor;
@property (readonly) unsigned int hash;
@property (nonatomic) UIColor *highlightColor;
@property (nonatomic) UIColor *linkTextColor;
@property (nonatomic) UIColor *primaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic) UIColor *warningTextColor;

- (void).cxx_destruct;
- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_availableActionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_availableActions;
- (id)_billingAddressCellForTableView:(id)arg1;
- (void)_callIssuer;
- (BOOL)_canSelectTransaction;
- (void)_cancelPendingTransactionTimerClearingPending:(BOOL)arg1;
- (unsigned int)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (id)_commuterRouteCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned int)_contactBankCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(int)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_didSelectAvailableActionAtRow:(int)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectContactBankSectionAtIndexPath:(int)arg1;
- (void)_didSelectDeleteCard;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(int)arg1;
- (void)_didSelectTransactionAtRow:(int)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_didSelectTransitTicketAtRow:(int)arg1;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (void)_done:(id)arg1;
- (void)_emailIssuer;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (float)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (id)_headerTitleForPassStateSection;
- (float)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(int)arg3 forTableView:(id)arg4;
- (BOOL)_isJapaneseRegion;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (void)_openIssuerWebsite;
- (void)_openPaymentSetup;
- (unsigned int)_passOperationsCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned int)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (float)_paymentTransactionCellHeight;
- (void)_preflightWatchForTransferWithCompletion:(id /* block */)arg1;
- (void)_presentContactBankViewController;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (unsigned int)_privacyTermsSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (void)_reloadPassAndView;
- (void)_reloadTransactionSection;
- (void)_reloadTransactionsWithCompletion:(id /* block */)arg1;
- (void)_reloadView;
- (void)_setFelicaProperties:(id)arg1;
- (BOOL)_shouldShowAutomaticPresentation;
- (BOOL)_shouldShowBillingAddressCell;
- (BOOL)_shouldShowContactCell;
- (BOOL)_shouldShowPrivacyPolicyCell;
- (BOOL)_shouldShowServiceMode;
- (BOOL)_shouldShowTermsCell;
- (BOOL)_shouldShowTransferCell;
- (id)_spinnerCellForTableView:(id)arg1;
- (void)_startPendingTransactionTimer;
- (id)_subtitleCellForTableView:(id)arg1;
- (void)_tabBarSegmentChanged:(id)arg1;
- (BOOL)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (int)_transitCellGenerateCellWithOutput:(id*)arg1 forRowIndex:(int)arg2 tableView:(id)arg3;
- (void)_updateFelicaProperties;
- (BOOL)_updateHeaderHeight;
- (void)_updatePassProperties;
- (void)_updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned int)arg1;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTransactionsWithPendingTransactions;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)deleteOverrider;
- (id)detailTextColor;
- (void)didChangeVerificationPresentation;
- (id)highlightColor;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(int)arg3 dataProvider:(id)arg4;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(int)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5;
- (id)linkTextColor;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (id)primaryTextColor;
- (int)rowAnimationForDeletingSection:(unsigned int)arg1;
- (int)rowAnimationForInsertingSection:(unsigned int)arg1;
- (int)rowAnimationForReloadingSection:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDeleteOverrider:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setWarningTextColor:(id)arg1;
- (BOOL)shouldMapSection:(unsigned int)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)updateActivationFooterViewContents;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)warningTextColor;

@end
