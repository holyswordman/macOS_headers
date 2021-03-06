//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "NSDraggingDestination-Protocol.h"
#import "NSSpringLoadingDestination-Protocol.h"
#import "TCollectionViewItemViewProtocol-Protocol.h"
#import "TICloudBadgeButtonContainer-Protocol.h"

@class NSColor, NSFont, NSImage, NSString;
@protocol TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate;

@interface TIconView : TUpdateLayerView <TCollectionViewItemViewProtocol, TICloudBadgeButtonContainer, NSSpringLoadingDestination, NSDraggingDestination>
{
    struct TNSRef<TTrackingImageView, void> _iconView;
    struct TNSRef<TIconSelectionView, void> _iconSelectionView;
    struct TNSRef<TBasicImageView, void> _badgeImageView;
    struct TNSRef<TDesktopInlineProgressView, void> _inlineProgressView;
    struct TNSRef<TDesktopTitleBubbleView, void> _titleBubbleView;
    struct TNSRef<TTextField, void> _subtitleField;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
    struct CGSize _iconSize;
    struct TString _titleStr;
    struct TNSRef<NSFont, void> _titleFont;
    struct TNSRef<NSColor, void> _titleFontColor;
    struct TString _subtitleStr;
    struct TString _subtitleShortStr;
    struct TNSRef<NSFont, void> _subtitleFont;
    struct TNSRef<NSColor, void> _subtitleFontColor;
    double _gridSpacing;
    vector_12bd641b _tagColorIndexes;
    struct TNSRef<NSColor, void> _superViewsBackgroundColor;
    struct TNSRef<NSColor, void> _fontSmoothingBackgroundColor;
    struct TNSRef<NSImage, void> _placeholderTagImage;
    _Bool _inlineProgressNeedsBaselineRefresh;
    _Bool _isTitleOnBottom;
    _Bool _isSelected;
    _Bool _isDropTarget;
    _Bool _isDragItem;
    _Bool _isTitleEnabled;
    _Bool _isSubtitleEnabled;
    _Bool _isEditing;
    _Bool _isSpringBlinkingOff;
    _Bool _useActiveAppearance;
    _Bool _isSelectionBordered;
    _Bool _isTornDown;
    id <TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate> _delegate;
    struct TNSRef<NSAccessibilityCustomAction, void> _axOpenAction;
    struct TKeyValueBinder _titleBubbleViewHiddenBinder;
    struct TKeyValueBinder _titleBubbleViewSelectedBinder;
    struct TKeyValueBinder _subtitleFieldHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewIconSizeBinder;
}

+ (id)keyPathsForValuesAffectingSubtitleFieldIsHidden;
+ (id)keyPathsForValuesAffectingTitleBubbleViewIsHidden;
+ (id)keyPathsForValuesAffectingTitleBubbleViewIsSelected;
+ (id)keyPathsForValuesAffectingIconSelectionViewIsHidden;
+ (Class)iconSelectionViewClass;
@property(readonly, getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(getter=isSpringBlinkingOff) _Bool springBlinkingOff; // @synthesize springBlinkingOff=_isSpringBlinkingOff;
@property(getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityPerformOpen;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityTitle;
- (id)accessibilityHelp;
- (id)accessibilityFilename;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)configureBadgeImageView:(_Bool)arg1;
- (void)configureSubtitleField;
- (void)configureTitleBubbleView;
- (void)configureIconSelectionView;
- (void)layoutTitleAndSubtitleInBounds:(const struct CGRect *)arg1 iconViewFrame:(const struct CGRect *)arg2;
- (void)layout;
- (_Bool)isAnimating;
- (id)subtitleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateSubtitleFieldAttributes;
- (id)titleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateTitleFieldAttributes;
- (void)updateInlineProgressBaselineLayout:(const struct CGRect *)arg1;
- (void)updateInlineProgressView;
- (void)updateInlineProgressViewCancelHandler:(const function_b1fce659 *)arg1;
- (void)setInlineProgressStatus:(const struct TNodeProgressStatus *)arg1 cancelHandler:(const function_b1fce659 *)arg2;
- (_Bool)subtitleFieldIsHiddenForLayout;
- (_Bool)subtitleFieldIsHidden;
- (_Bool)titleBubbleViewIsHiddenForLayout;
- (_Bool)titleBubbleViewIsHidden;
- (_Bool)titleBubbleViewIsSelected;
- (_Bool)iconSelectionViewIsHidden;
- (void)clearIconTracking;
- (_Bool)isIconTracking:(id)arg1;
- (void)stopIconTracking:(id)arg1;
- (void)startIconTracking:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)hitTestInIconOrText:(const struct CGPoint *)arg1;
- (id)_hitTestInIconOrTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInText:(const struct CGPoint *)arg1;
- (id)_hitTestInTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInIcon:(struct CGPoint)arg1;
- (id)_hitTestInIconWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)titleEditingFrame;
- (struct CGRect)titleDraggingFrame;
- (struct CGRect)titleBubbleFrame;
- (struct CGRect)titleFrame;
- (struct CGRect)_iconFrame;
- (struct CGRect)iconFrame;
- (id)dragFlockingTitleImage:(struct CGRect *)arg1;
- (id)dragFlockingIconImage:(struct CGRect *)arg1;
- (id)_titleViews;
- (_Bool)isLTRLocalization;
@property _Bool useActiveAppearance; // @synthesize useActiveAppearance=_useActiveAppearance;
@property(getter=isDragItem) _Bool dragItem; // @synthesize dragItem=_isDragItem;
@property(getter=isDropTarget) _Bool dropTarget; // @synthesize dropTarget=_isDropTarget;
@property(getter=isSelectionBordered) _Bool selectionBordered; // @synthesize selectionBordered=_isSelectionBordered;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_isSelected;
@property(getter=isDimmed) _Bool dimmed; // @dynamic dimmed;
@property(getter=isSubtitleEnabled) _Bool subtitleEnabled; // @dynamic subtitleEnabled;
@property(getter=isTitleEnabled) _Bool titleEnabled; // @dynamic titleEnabled;
@property(getter=isTitleOnBottom) _Bool titleOnBottom; // @dynamic titleOnBottom;
@property(getter=isIconHidden) _Bool iconHidden; // @dynamic iconHidden;
@property double gridSpacing; // @dynamic gridSpacing;
@property const vector_12bd641b *tagColorIndexes; // @dynamic tagColorIndexes;
@property(copy) NSImage *badgeImage; // @dynamic badgeImage;
@property(copy) NSColor *subtitleFontColor; // @dynamic subtitleFontColor;
- (id)_subtitleFontColor;
- (double)_subtitleFontSize;
- (double)subtitleFontSize;
- (void)updateSubtitleFontForTitleFontChange;
@property(copy) NSFont *subtitleFont;
@property(copy) NSString *subtitleShortStr; // @dynamic subtitleShortStr;
@property(copy) NSString *subtitleStr; // @dynamic subtitleStr;
- (void)setICloudBadge:(int)arg1 toolTip:(const struct TString *)arg2 clickHandler:(const function_b1fce659 *)arg3;
@property(copy) NSColor *titleFontColor; // @dynamic titleFontColor;
- (id)_titleFontColor;
- (double)titleFontSize;
@property(copy) NSFont *titleFont; // @dynamic titleFont;
@property(copy) NSString *titleStr; // @dynamic titleStr;
@property struct CGSize iconSize; // @dynamic iconSize;
@property(copy) NSImage *iconImage; // @dynamic iconImage;
@property id <TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate> delegate; // @dynamic delegate;
- (id)popoverAnchorView;
- (void)updateFontSmoothingBackgroundColor:(id)arg1;
- (void)updateSuperViewsBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)aboutToTearDown;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

