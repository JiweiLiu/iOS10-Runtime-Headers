/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorController : HUQuickControlController <HUQuickControlColorInteractionCoordinatorDelegate>

@property (nonatomic, readonly) HFColorControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUQuickControlSimpleViewProfile *viewProfile;

+ (Class)controlItemClass;

- (void)_notifyDelegateOfOverrideStatusTextChange;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (void)interactionCoordinator:(id)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (id)viewProfile;

@end
