Module["getCurrentAudioContext"] = function() {
    return AL.currentCtx && AL.currentCtx.audioCtx;
};
  
Module["getCurrentAudioSource"] = function() {
    return AL.currentCtx.gain;
};