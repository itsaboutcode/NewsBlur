//
//  LoginViewController.h
//  NewsBlur
//
//  Created by Samuel Clay on 10/31/10.
//  Copyright 2010 NewsBlur. All rights reserved.
//

#import "NewsBlurAppDelegate.h"

#define LANDSCAPE_MARGIN 128

@interface LoginViewController : UIViewController <ASIHTTPRequestDelegate> {
    NewsBlurAppDelegate *appDelegate;
    
    BOOL isOnSignUpScreen;
    UITextField *usernameInput;
    UITextField *passwordInput;
    UITextField *emailInput;
    NSMutableData * jsonString;
    
    UILabel *authenticatingLabel;
    UILabel *errorLabel;
    UISegmentedControl *loginControl;
    
    UILabel *usernameLabel;
    UILabel *usernameOrEmailLabel;
    UILabel *passwordLabel;
    UILabel *emailLabel;
    UILabel *passwordOptionalLabel;
}

- (void)checkPassword;
- (void)registerAccount;
- (IBAction)selectLoginSignup;

- (IBAction)selectSignUp;
- (IBAction)selectLogin;
- (IBAction)tapLoginButton;
- (IBAction)tapSignUpButton;


- (void)animateLoop;

@property (nonatomic) IBOutlet NewsBlurAppDelegate *appDelegate;

@property (nonatomic) IBOutlet UITextField *usernameInput;
@property (nonatomic) IBOutlet UITextField *passwordInput;
@property (nonatomic) IBOutlet UITextField *emailInput;
@property (nonatomic) IBOutlet UITextField *signUpUsernameInput;
@property (nonatomic) IBOutlet UITextField *signUpPasswordInput;
@property (nonatomic) IBOutlet UIButton *selectSignUpButton;
@property (nonatomic) IBOutlet UIButton *selectLoginButton;

@property (nonatomic) IBOutlet UIView *signUpView;
@property (nonatomic) IBOutlet UIView *logInView;

@property (nonatomic) NSMutableData * jsonString;
@property (nonatomic) IBOutlet UILabel *errorLabel;
@property (nonatomic) IBOutlet UISegmentedControl *loginControl;

@property (nonatomic) IBOutlet UILabel *usernameLabel;
@property (nonatomic) IBOutlet UILabel *usernameOrEmailLabel;
@property (nonatomic) IBOutlet UILabel *passwordLabel;
@property (nonatomic) IBOutlet UILabel *emailLabel;
@property (nonatomic) IBOutlet UILabel *passwordOptionalLabel;

@end
