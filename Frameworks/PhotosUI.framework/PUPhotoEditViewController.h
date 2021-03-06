/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditViewController : PUEditViewController <GLKViewDelegate, PHLivePhotoViewDelegate, PLDismissableViewController, PUEditPluginSessionDelegate, PUImageEditPluginSessionDataSource, PUOneUpAssetTransitionViewController, PUPhotoEditIrisModelChangeObserver, PUPhotoEditLayoutSource, PUPhotoEditToolControllerDelegate, PUPhotoLibraryUIChangeObserver, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate> {
    PLPhotoEditAggregateSession *__aggregateSession;
    NSArray *__allTools;
    unsigned int __assetChangeDismissalState;
    CIImage *__baseWorkCIImage;
    UIImage *__baseWorkUIImage;
    BOOL __canAnimateNextAutoEnhance;
    UIAlertController *__cancelConfirmationAlert;
    PUResourceDownloadRequest *__currentResourceLoadRequest;
    UIAlertController *__irisRevertConfirmationAlert;
    struct CGSize { 
        float width; 
        float height; 
    } __layoutReferenceSize;
    PHLivePhoto *__livePhoto;
    PLPhotoEditRenderer *__mainRenderer;
    id /* block */ __nextRenderCompletionBlock;
    CIImage *__originalWorkCIImage;
    UIImage *__originalWorkUIImage;
    BOOL __penultimateAvailable;
    PUPhotoEditIrisModel *__photoEditIrisModel;
    PLPhotoEditMutableModel *__photoEditModel;
    int __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    PURedeyeToolController *__redEyeController;
    int __resourcesAvailability;
    UIAlertController *__revertConfirmationAlert;
    BOOL __revertingToOriginal;
    unsigned int __saveCompetionDismissalState;
    BOOL __shouldBePreviewingOriginal;
    PLPhotoEditModel *__uneditedPhotoEditModel;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    BOOL __waitingForBaseImageRequest;
    BOOL __waitingForLivePhotoRequest;
    BOOL __waitingForOriginalImageRequest;
    int __workImageVersion;
    PUAdjustmentsToolController *_adjustmentsController;
    PUPhotoEditToolbar *_alternateToolbar;
    NSArray *_alternateToolbarConstraints;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    UIButton *_cancelButton;
    NSArray *_coreToolButtons;
    PUCropToolController *_cropController;
    PUPhotoEditToolController *_currentEditingTool;
    NSArray *_currentToolViewConstraints;
    <PUPhotoEditViewControllerDelegate> *_delegate;
    BOOL _didLoadTools;
    PUFiltersToolController *_filtersController;
    BOOL _hasRequestedAdjustmentsData;
    BOOL _hasStartedLoadingRemoteResources;
    UIButton *_irisButton;
    struct CGSize { 
        float width; 
        float height; 
    } _lastKnownPreviewViewSize;
    struct CGSize { 
        float width; 
        float height; 
    } _lastKnownWorkImageSize;
    int _layoutOrientation;
    BOOL _livePhotoIsPlaying;
    UIButton *_mainActionButton;
    int _mainButtonAction;
    PHLivePhotoView *_mainLivePhotoView;
    GLKView *_mainRenderView;
    NSArray *_mainToolButtons;
    PUPhotoEditToolbar *_mainToolbar;
    NSArray *_mainToolbarConstraints;
    PHAsset *_photo;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    BOOL _photoTakenWithoutFlash;
    UIImageView *_placeholderImageView;
    NSArray *_placeholderImageViewConstraints;
    UIButton *_pluginButton;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSURL *_pluginFullSizeImageURL;
    PUEditPluginSession *_pluginSession;
    int _pluginWorkImageVersion;
    BOOL _pluginWorkImageVersionIsValid;
    UIView *_previewContainerView;
    BOOL _previewViewHidden;
    UIScrollView *_previewViewScrollingContainer;
    NSArray *_previewViewScrollingContainerConstraints;
    BOOL _previewViewScrollingContainerLayoutIsValid;
    PUPhotoEditOverlayBadge *_previewingOriginalBadge;
    NSArray *_previewingOriginalBadgeConstraints;
    id _progressIndicatorInteractionDisablingToken;
    PUProgressIndicatorView *_progressIndicatorView;
    NSArray *_progressIndicatorViewConstraints;
    UIButton *_redEyeButton;
    UIButton *_secondMainActionButton;
    UIButton *_secondSecondActionButton;
    NSArray *_secondaryToolButtons;
    PUPhotoEditToolbar *_secondaryToolbar;
    NSArray *_secondaryToolbarConstraints;
    _PUPhotoEditSnapshot *_stashedSnapshot;
    BOOL _switchingToolsAnimated;
    struct CGPoint { 
        float x; 
        float y; 
    } _togglePreviewPressGestureInitialPoint;
    UILongPressGestureRecognizer *_togglePreviewPressGestureRecognizer;
    BOOL _toolbarButtonsValid;
}

@property (setter=_setAggregateSession:, nonatomic, retain) PLPhotoEditAggregateSession *_aggregateSession;
@property (setter=_setAssetChangeDismissalState:, nonatomic) unsigned int _assetChangeDismissalState;
@property (setter=_setBaseWorkCIImage:, nonatomic, retain) CIImage *_baseWorkCIImage;
@property (setter=_setBaseWorkUIImage:, nonatomic, retain) UIImage *_baseWorkUIImage;
@property (setter=_setCanAnimateNextAutoEnhance:, nonatomic) BOOL _canAnimateNextAutoEnhance;
@property (setter=_setCancelConfirmationAlert:, nonatomic) UIAlertController *_cancelConfirmationAlert;
@property (setter=_setCurrentResourceLoadRequest:, nonatomic, retain) PUResourceDownloadRequest *_currentResourceLoadRequest;
@property (setter=_setIrisRevertConfirmationAlert:, nonatomic) UIAlertController *_irisRevertConfirmationAlert;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { float x1; float x2; } _layoutReferenceSize;
@property (setter=_setLivePhoto:, nonatomic, retain) PHLivePhoto *_livePhoto;
@property (setter=_setMainRenderer:, nonatomic, retain) PLPhotoEditRenderer *_mainRenderer;
@property (setter=_setNextRenderCompletionBlock:, nonatomic, copy) id /* block */ _nextRenderCompletionBlock;
@property (setter=_setOriginalWorkCIImage:, nonatomic, retain) CIImage *_originalWorkCIImage;
@property (setter=_setOriginalWorkUIImage:, nonatomic, retain) UIImage *_originalWorkUIImage;
@property (getter=_isPenultimateAvailable, setter=_setPenultimateAvailable:, nonatomic) BOOL _penultimateAvailable;
@property (setter=_setPhotoEditIrisModel:, nonatomic, retain) PUPhotoEditIrisModel *_photoEditIrisModel;
@property (setter=_setPhotoEditModel:, nonatomic, retain) PLPhotoEditMutableModel *_photoEditModel;
@property (setter=_setPreviewRenderType:, nonatomic) int _previewRenderType;
@property (setter=_setPreviewingOriginalRenderer:, nonatomic, retain) PLPhotoEditRenderer *_previewingOriginalRenderer;
@property (setter=_setRedEyeController:, nonatomic, retain) PURedeyeToolController *_redEyeController;
@property (setter=_setResourcesAvailability:, nonatomic) int _resourcesAvailability;
@property (setter=_setRevertConfirmationAlert:, nonatomic) UIAlertController *_revertConfirmationAlert;
@property (getter=_isRevertingToOriginal, setter=_setRevertingToOriginal:, nonatomic) BOOL _revertingToOriginal;
@property (setter=_setSaveCompletionDismissalState:, nonatomic) unsigned int _saveCompetionDismissalState;
@property (setter=_setShouldBePreviewingOriginal:, nonatomic) BOOL _shouldBePreviewingOriginal;
@property (setter=_setUneditedPhotoEditModel:, nonatomic, copy) PLPhotoEditModel *_uneditedPhotoEditModel;
@property (setter=_setValuesCalculator:, nonatomic, retain) PUPhotoEditValuesCalculator *_valuesCalculator;
@property (setter=_setWaitingForBaseImageRequest:, nonatomic) BOOL _waitingForBaseImageRequest;
@property (setter=_setWaitingForLivePhotoRequest:, nonatomic) BOOL _waitingForLivePhotoRequest;
@property (setter=_setWaitingForOriginalImageRequest:, nonatomic) BOOL _waitingForOriginalImageRequest;
@property (setter=_setWorkImageVersion:, nonatomic) int _workImageVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int layoutOrientation;
@property (nonatomic, readonly) PHAsset *photo;
@property (nonatomic, readonly) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previewViewFrame;
@property (getter=isPreviewViewHidden, nonatomic) BOOL previewViewHidden;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (double)toggleOriginalLongPressDelay;

- (void).cxx_destruct;
- (id)_aggregateSession;
- (id)_allTools;
- (unsigned int)_assetChangeDismissalState;
- (id)_baseWorkCIImage;
- (id)_baseWorkUIImage;
- (BOOL)_canAnimateNextAutoEnhance;
- (id)_cancelConfirmationAlert;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(id /* block */)arg1;
- (void)_checkPhotoTakenWithoutFlash;
- (void)_configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2;
- (id)_currentResourceLoadRequest;
- (id)_defaultInitialEditingTool;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDidLoadBaseImageWithResult:(id)arg1 info:(id)arg2 startTime:(double)arg3;
- (void)_handleDidLoadLivePhotoContentWithResult:(id)arg1 info:(id)arg2;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleIrisButton:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleTogglePreviewPressGesture:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (BOOL)_hasUnsavedChanges;
- (id)_irisRevertConfirmationAlert;
- (BOOL)_isDownloadingResources;
- (BOOL)_isPenultimateAvailable;
- (BOOL)_isPreviewingOriginal;
- (BOOL)_isReadyToRender;
- (BOOL)_isRevertingToOriginal;
- (BOOL)_isWaitingForAssetChange;
- (BOOL)_isWaitingForSaveCompletion;
- (struct CGSize { float x1; float x2; })_layoutReferenceSize;
- (id)_livePhoto;
- (void)_loadBaseImageIfNecessary;
- (void)_loadLivePhotoContentIfNecessary;
- (void)_loadOriginalImageIfNecessary;
- (void)_loadPhotoEditModelIfNecessary;
- (void)_loadRemoteResourcesIfNecessary;
- (void)_loadToolsIfNeeded;
- (id)_mainRenderer;
- (id)_newToolButtonForTool:(id)arg1;
- (id /* block */)_nextRenderCompletionBlock;
- (void)_notifyDelegateSaveFinishedIfReady;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (id)_originalWorkCIImage;
- (id)_originalWorkUIImage;
- (void)_performDiscardAction;
- (void)_performRevertAction;
- (id)_photoEditIrisModel;
- (id)_photoEditModel;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentWarningForIrisRemovesEditsWithCompletion:(id /* block */)arg1;
- (int)_previewRenderType;
- (id)_previewingOriginalRenderer;
- (id)_redEyeController;
- (void)_reloadMainAndSecondaryToolbarButtonsIfNeeded;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(int)arg1;
- (int)_resourcesAvailability;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_revertConfirmationAlert;
- (id)_revertToOriginalWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)_saveCompetionDismissalState;
- (struct CGSize { float x1; float x2; })_scaleSize:(struct CGSize { float x1; float x2; })arg1 toFitSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_setAggregateSession:(id)arg1;
- (void)_setAssetChangeDismissalState:(unsigned int)arg1;
- (void)_setBaseWorkCIImage:(id)arg1;
- (void)_setBaseWorkUIImage:(id)arg1;
- (void)_setCanAnimateNextAutoEnhance:(BOOL)arg1;
- (void)_setCancelConfirmationAlert:(id)arg1;
- (void)_setCurrentResourceLoadRequest:(id)arg1;
- (void)_setIrisRevertConfirmationAlert:(id)arg1;
- (void)_setLayoutOrientation:(int)arg1;
- (void)_setLayoutOrientation:(int)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setLayoutReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLivePhoto:(id)arg1;
- (void)_setMainRenderer:(id)arg1;
- (void)_setNextRenderCompletionBlock:(id /* block */)arg1;
- (void)_setOriginalWorkCIImage:(id)arg1;
- (void)_setOriginalWorkUIImage:(id)arg1;
- (void)_setPenultimateAvailable:(BOOL)arg1;
- (void)_setPhotoEditIrisModel:(id)arg1;
- (void)_setPhotoEditModel:(id)arg1;
- (void)_setPreviewRenderType:(int)arg1;
- (void)_setPreviewingOriginalRenderer:(id)arg1;
- (void)_setRedEyeController:(id)arg1;
- (void)_setResourcesAvailability:(int)arg1;
- (void)_setRevertConfirmationAlert:(id)arg1;
- (void)_setRevertingToOriginal:(BOOL)arg1;
- (void)_setSaveCompletionDismissalState:(unsigned int)arg1;
- (void)_setShouldBePreviewingOriginal:(BOOL)arg1;
- (void)_setUneditedPhotoEditModel:(id)arg1;
- (void)_setValuesCalculator:(id)arg1;
- (void)_setWaitingForBaseImageRequest:(BOOL)arg1;
- (void)_setWaitingForLivePhotoRequest:(BOOL)arg1;
- (void)_setWaitingForOriginalImageRequest:(BOOL)arg1;
- (void)_setWorkImageVersion:(int)arg1;
- (void)_setupToolsIfNeeded;
- (BOOL)_shouldBePreviewingOriginal;
- (BOOL)_shouldDisplayRedEyeTool;
- (void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)arg1;
- (void)_startWaitingForAssetChange;
- (void)_startWaitingForSaveRequest:(id)arg1;
- (void)_stopWaitingForAssetChangeWithSuccess:(BOOL)arg1;
- (void)_stopWaitingForSaveRequestWithSuccess:(BOOL)arg1;
- (void)_switchToEditingTool:(id)arg1 animated:(BOOL)arg2;
- (id)_uneditedPhotoEditModel;
- (void)_updateAlternateToolbarAnimated:(BOOL)arg1;
- (void)_updateAutoEnhanceButtonAnimated:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateIrisButtonAnimated:(BOOL)arg1;
- (void)_updateLastKnownImageSize;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize { float x1; float x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_updateLivePhotoPlaybackGestureRecognizer;
- (void)_updateLivePhotoView;
- (void)_updateMainActionButtonAnimated:(BOOL)arg1;
- (void)_updateMainRenderer;
- (void)_updateModelDependentControlsAnimated:(BOOL)arg1;
- (void)_updatePenultimateAvailableWithCompletionHandler:(id /* block */)arg1;
- (void)_updatePhoto;
- (void)_updatePhotoEditIrisModel;
- (void)_updatePlaceholderImage;
- (void)_updatePluginButtonAnimated:(BOOL)arg1;
- (void)_updatePluginWorkImageVersion;
- (void)_updatePreviewContainerLayout;
- (void)_updatePreviewingOriginal;
- (void)_updatePreviewingOriginalBadge;
- (void)_updateProgressIndicatorAnimated:(BOOL)arg1;
- (void)_updateRenderedPreviewForceRender:(BOOL)arg1;
- (void)_updateScrollViewCentering;
- (void)_updateScrollViewContentSize;
- (void)_updateScrollViewForProxyZooming;
- (void)_updateSpecDependentUIPieces;
- (void)_updateSubviewsOrdering;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_updateToolbarBackgroundAnimated:(BOOL)arg1;
- (void)_updateToolbarsAnimated:(BOOL)arg1;
- (void)_updateValuesCalculator;
- (id)_valuesCalculator;
- (BOOL)_waitingForBaseImageRequest;
- (BOOL)_waitingForLivePhotoRequest;
- (BOOL)_waitingForOriginalImageRequest;
- (struct CGSize { float x1; float x2; })_workImageSizeForScreen:(id)arg1;
- (int)_workImageVersion;
- (void)dealloc;
- (id)delegate;
- (void)didFinishWithSavedChanges:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned int)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id /* block */)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)editPluginSessionWillBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithPhoto:(id)arg1;
- (BOOL)isPreviewViewHidden;
- (int)layoutOrientation;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(int)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(int)arg2;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (id)photo;
- (id)photoEditSpec;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_cancelEdits;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewViewFrame;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)requestDismissTransitionViewContentsWithCompletion:(id /* block */)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPreviewViewHidden:(BOOL)arg1;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2;
- (id)toolControllerBaseCIImage:(id)arg1;
- (id)toolControllerBaseImage:(id)arg1;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangePreferredRenderMode:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolControllerDidFinish:(id)arg1;
- (id)toolControllerImageScrollView:(id)arg1;
- (id)toolControllerLivePhoto:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (struct CGSize { float x1; float x2; })toolControllerOriginalImageSize:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
