
#include "pt.h"
#include "timer.h"

// The current variable keeps track of the song to be played.
// Currently, as there are 4 tracks in the repertoire, the range of the current variable is from 0 to 3.
// Track 0: Joy to the World
// Track 1: We Wish you a Merry Christmas
// Track 2: Rudolf the Red Nosed Reindeer
// Track 3: Jingle Bells

int current = 0;

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 11;

// Define the protothreads, and also the flags that terminate the respective protothread
// Could be abstracted into an array/stack
boolean enablePtJoyToTheWorld = true;
static struct pt ptJoyToTheWorld;
boolean enablePtWeWishYouAMerry = true;
static struct pt ptWeWishYouAMerry;
boolean enablePtRudolfTheRedNosed = true;
static struct pt ptRudolfTheRedNosed;
boolean enablePtJingleBells = true;
static struct pt ptJingleBells;

// Controller's controller is the function that changes the currently playing tone
static struct pt ptControllerController;
static struct pt ptFlashLights;

void setup() {
  // Setup the Protothread Variables
  PT_INIT(&ptJoyToTheWorld);
  PT_INIT(&ptWeWishYouAMerry);
  PT_INIT(&ptRudolfTheRedNosed);
  PT_INIT(&ptJingleBells);
  PT_INIT(&ptControllerController);

  // Add a little bit of Christmas Festive Flare
  PT_INIT(&ptFlashLights);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}


/*************************************************
 ************* START MUSIC FUNCTIONS *************
 *************************************************/

// Sounds spectacularly similar to another infamous tune...
static PT_THREAD(protothreadJoyToTheWorld(struct pt *pt)) {
  static struct timer tJoyToTheWorld;
  PT_BEGIN(pt);
  while (enablePtJoyToTheWorld) {
    tone(tonePin, 587, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 554, 337.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 375.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 675.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 750.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 293, 675.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 750.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 670.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 744.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 554, 670.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 744.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 554, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 670.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 744.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 554, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 337.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 375.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 554, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 337.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 375.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 675.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 750.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 220.3125);
    ledlights();
    timer_set(&tJoyToTheWorld, 244.791666667); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    ledlights();
    timer_set(&tJoyToTheWorld, 5.20833333333); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 675.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 750.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 293, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 587, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 493, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 440, 337.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 375.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 112.5);
    ledlights();
    timer_set(&tJoyToTheWorld, 125.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 391, 225.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 250.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 369, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));
    tone(tonePin, 329, 450.0);
    ledlights();
    timer_set(&tJoyToTheWorld, 500.0); PT_WAIT_UNTIL(pt, timer_expired(&tJoyToTheWorld));

    //    incrementSong();
  }
  PT_END(pt);
  startNextSong();
}

static PT_THREAD(protothreadWeWishYouAMerry(struct pt *pt)) {
  static struct timer tWeWishYouAMerry;
  PT_BEGIN(pt);
  while (enablePtWeWishYouAMerry) {
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 523, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 523, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 523, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 554, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 523, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 546.874125);
    ledlights();
    timer_set(&tWeWishYouAMerry, 607.637916667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 624.999);
    ledlights();
    timer_set(&tWeWishYouAMerry, 694.443333333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 546.874125);
    ledlights();
    timer_set(&tWeWishYouAMerry, 607.637916667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 523, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 622, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 312.4995);
    ledlights();
    timer_set(&tWeWishYouAMerry, 347.221666667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 311, 156.24975);
    ledlights();
    timer_set(&tWeWishYouAMerry, 173.610833333); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 349, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 466, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 391, 234.374625);
    ledlights();
    timer_set(&tWeWishYouAMerry, 260.41625); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    ledlights();
    timer_set(&tWeWishYouAMerry, 86.8054166667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    tone(tonePin, 415, 546.874125);
    ledlights();
    timer_set(&tWeWishYouAMerry, 607.637916667); PT_WAIT_UNTIL(pt, timer_expired(&tWeWishYouAMerry));
    //    incrementSong();
  }
  PT_END(pt);
  startNextSong();
}
static PT_THREAD(protothreadRudolfTheRedNosed(struct pt *pt)) {
  static struct timer tRudolfTheRedNosed;
  PT_BEGIN(pt);
  while (enablePtRudolfTheRedNosed) {
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 293, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 293, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 587, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 320.368203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 355.964670139); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 647.481);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 719.423333333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 293, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 320.368203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 355.964670139); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 320.368203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 355.964670139); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 647.481);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 719.423333333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 320.368203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 355.964670139); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 293, 809.35125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 899.279166667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 329, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 1294.962);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1438.84666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 349, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 293, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 493, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 967.849203125);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 1075.38800347); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    ledlights();
    timer_set(&tRudolfTheRedNosed, 3.74699652778); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 440, 161.87025);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 179.855833333); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 391, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 587, 323.7405);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    tone(tonePin, 523, 971.2215);
    ledlights();
    timer_set(&tRudolfTheRedNosed, 359.711666667); PT_WAIT_UNTIL(pt, timer_expired(&tRudolfTheRedNosed));
    //    incrementSong();
  }
  PT_END(pt);
  startNextSong();
}
static PT_THREAD(protothreadJingleBells(struct pt *pt)) {
  static struct timer tJingleBells;
  PT_BEGIN(pt);
  while (enablePtJingleBells) {
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 391, 312.499125);
    ledlights();
    timer_set(&tJingleBells, 347.22125); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 833.331);
    ledlights();
    timer_set(&tJingleBells, 925.923333333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 312.499125);
    ledlights();
    timer_set(&tJingleBells, 347.22125); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 416.6655);
    ledlights();
    timer_set(&tJingleBells, 462.961666667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 391, 312.499125);
    ledlights();
    timer_set(&tJingleBells, 347.22125); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 833.331);
    ledlights();
    timer_set(&tJingleBells, 925.923333333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 312.499125);
    ledlights();
    timer_set(&tJingleBells, 347.22125); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 493, 104.166375);
    ledlights();
    timer_set(&tJingleBells, 115.740416667); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 523, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 440, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 391, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 587, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    tone(tonePin, 783, 208.33275);
    ledlights();
    timer_set(&tJingleBells, 231.480833333); PT_WAIT_UNTIL(pt, timer_expired(&tJingleBells));
    //    incrementSong();
  }
  PT_END(pt);
  startNextSong();
}
/*************************************************
 ************** END MUSIC FUNCTIONS **************
 *************************************************/

/*************************************************
 ************* START UTILE FUNCTIONS *************
 *************************************************/
// The Controller checks the "current" variable and updates the protothread that should be ran as expected
// The Controller also terminates any active Protothread Functions (asides from the Controller's Controller - "protothreadControllerController")
void controller() {
  if (current != 0) {
    enablePtJoyToTheWorld = false;
  } else {
    enablePtJoyToTheWorld = true;
  }
  if (current != 1) {
    enablePtWeWishYouAMerry = false;
  } else {
    enablePtWeWishYouAMerry = true;
  }
  if (current != 2) {
    enablePtRudolfTheRedNosed = false;
  } else {
    enablePtRudolfTheRedNosed = true;
  }
  if (current != 3) {
    enablePtJingleBells = false;
  } else {
    enablePtJingleBells = true;
  }
}

// Start Next Song doesn't play the song in a blocking fashion. It continuously recalls the protothread song function.
void startNextSong() {
  controller();
  switch (current) {
    case 0:
      protothreadJoyToTheWorld(&ptJoyToTheWorld); // Schedule the protothread
      break;
    case 1:
      protothreadWeWishYouAMerry(&ptWeWishYouAMerry); // Schedule the protothread
      break;
    case 2:
      protothreadRudolfTheRedNosed(&ptRudolfTheRedNosed); // Schedule the protothread
      break;
    case 3:
      protothreadJingleBells(&ptJingleBells); // Schedule the protothread
      break;
  }
}

// Increment Song changes the currently playing song
void incrementSong() {
  current = (current + 1) % 4;
  controller();
}


static PT_THREAD(protothreadControllerController(struct pt *pt)) {
  static struct timer tControllerController;
  PT_BEGIN(pt);

  // The controller should always check to see if the currently playing song should be incremented
  while (1) {

    // Analog Pin 0 is where our button is situated
    // When it is pressed, the desired outcome is for the currently playing song to change
    PT_WAIT_UNTIL(pt, analogRead(A0) > 1000);
    incrementSong();

    delay(1000);
    PT_INIT(&ptJoyToTheWorld);
    PT_INIT(&ptWeWishYouAMerry);
    PT_INIT(&ptRudolfTheRedNosed);
    PT_INIT(&ptJingleBells);
  }
  PT_END(pt);
}


int x = 0;
void ledlights() {
  x++;
  if (x > 3) {
    x = 1;
  }
  if (x == 1) {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
  if (x == 2) {
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  }
  if (x == 3) {
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
}
/*************************************************
 ************** END UTILE FUNCTIONS **************
 *************************************************/

// This is the loop that controls how time flows for the Arduino
// Nowhere in this code should the old-fashioned delay should be run, unless the entire Arduino is meant to be stopped entirely

boolean initalPress = false;
void loop() {
  if (analogRead(A0) > 1000 || initalPress) {
    initalPress = true;
    protothreadControllerController(&ptControllerController); // schedule the controller
    startNextSong();
    //    protothreadFlashLights(&ptFlashLights); // schedule the alternatingly flashing lights
  }
}
