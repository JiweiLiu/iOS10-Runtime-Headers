/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFStyle : NSObject

+ (id)sharedStyle;

- (void)applyThemeToAllTableViews;
- (void)applyThemeToLabel:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (id)backgroundColor;
- (double)baselineInsetForHeaderTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForHeaderView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForTable:(id)arg1;
- (double)headerIconBaselineOffset;
- (double)headerIconBaselineOffsetForView:(id)arg1;
- (double)headerSubheaderBaselineSpacingForView:(id)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(bool)arg2;
- (double)headerTitleBaselineOffsetHasIcon:(bool)arg1;
- (id)headerTitleFont;
- (double)horizontalMarginForView:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)singleLineCellHeightForTable:(id)arg1;
- (id)tableCellFont;

@end
