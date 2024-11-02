// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol UITextInputTraits

@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) NSInteger spellCheckingType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;


@optional
-(NSInteger)autocapitalizationType;
-(void)setAutocapitalizationType:(NSInteger)arg0 ;
-(NSInteger)autocorrectionType;
-(void)setAutocorrectionType:(NSInteger)arg0 ;
-(NSInteger)spellCheckingType;
-(void)setSpellCheckingType:(NSInteger)arg0 ;
-(NSInteger)smartQuotesType;
-(void)setSmartQuotesType:(NSInteger)arg0 ;
-(NSInteger)smartDashesType;
-(void)setSmartDashesType:(NSInteger)arg0 ;
-(NSInteger)smartInsertDeleteType;
-(void)setSmartInsertDeleteType:(NSInteger)arg0 ;
-(NSInteger)keyboardType;
-(void)setKeyboardType:(NSInteger)arg0 ;
-(NSInteger)keyboardAppearance;
-(void)setKeyboardAppearance:(NSInteger)arg0 ;
-(NSInteger)returnKeyType;
-(void)setReturnKeyType:(NSInteger)arg0 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg0 ;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg0 ;
-(id)textContentType;
-(void)setTextContentType:(id)arg0 ;
-(id)passwordRules;
-(void)setPasswordRules:(id)arg0 ;
@end

