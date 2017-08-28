//
// MLDynamicModalViewController.h
// 
// Created by Vanesa Stricker on 9/11/15.
// Modified by Julian Bruno on 9/7/16
// Copyright (c) 2015 Mercado Libre. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  This protocol must be implemented by all classes that instantiates a MLDynamicModalViewController
 **/
@protocol MLDynamicModalViewControllerDelegate <NSObject>

/**
 *  This method is called when the modal is dismissed after an action enable for the item.
 *  Classes that implement this method, must push the specified url.
 **/
- (void)itemViewDismissedWithRedirectionToURL:(NSURL *)url;

/**
 *  This method is called when the modal is dismissed
 **/
- (void)itemViewDismissed;

@end

@interface MLDynamicModalViewController : UIViewController

/**
 *  Initializer for the class
 *  @param  view UIView to present in modal
 *  @param  headerView UIView for Fixed Header
 *  @return An instance of MLDynamicModalViewController
 */
- (instancetype)initWithView:(UIView *)view headerView:(UIView *)headerView;

/**
 *  Initializer for the class
 *  @param  view UIView to present in modal
 *  @param  title Title of modal with default style
 *  @return An instance of MLDynamicModalViewController
 */
- (instancetype)initWithView:(UIView *)view title:(NSString *)title;


/**
 *  Initializer for the class
 *  @param  view UIView to present in modal
 *  @param  attributedTitle Title of modal with attributes
 *  @return An instance of MLDynamicModalViewController
 */
- (instancetype)initWithView:(UIView *)view attributedTitle:(NSAttributedString *)attributedTitle;

/**
 *  Initializer for the class
 *  @param  view UIView to present in modal
 *  @return An instance of MLDynamicModalViewController
 */
- (instancetype)initWithView:(UIView *)view;

- (void)setShowCloseButton:(BOOL)show;
- (void)setModalCloseButtonColor:(UIColor *)color;
- (void)setShouldDismissOnTap:(BOOL)dismiss;
- (void)setShouldSwipeToDismiss:(BOOL)dismiss;
- (void)setModalBackgroundColor:(UIColor *)color;
- (void)setModalHeaderBackgroundColor:(UIColor *)color;
- (void)setShowVerticalIndicator:(BOOL)show;

@end