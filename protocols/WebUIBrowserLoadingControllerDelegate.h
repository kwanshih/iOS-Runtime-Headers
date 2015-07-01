/* Generated by RuntimeBrowser.
 */

@protocol WebUIBrowserLoadingControllerDelegate <NSObject>

@optional

- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 didFinishLoadingWithError:(NSError *)arg2 dataSource:(WebDataSource *)arg3;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 failedToStartLoadingRequest:(NSURLRequest *)arg2 error:(NSError *)arg3;
- (NSString *)browserLoadingController:(WebUIBrowserLoadingController *)arg1 userVisibleStringForURL:(NSURL *)arg2;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 willLoadRequest:(NSURLRequest *)arg2 userDriven:(BOOL)arg3;
- (void)browserLoadingControllerDidStartLoading:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateLoadingState:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateSecurity:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURL:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(WebUIBrowserLoadingController *)arg1;
- (BOOL)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(WebUIBrowserLoadingController *)arg1;
- (BOOL)browserLoadingControllerShouldShowProvisionalURLs:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(WebUIBrowserLoadingController *)arg1;
- (void)webThreadWebView:(WebView *)arg1 didLayout:(unsigned int)arg2;
- (void)webView:(WebView *)arg1 didChangeLocationWithinPageForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFailProvisionalLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFinishLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didHandleOnloadEventsForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didStartProvisionalLoadForFrame:(WebFrame *)arg2;

@end