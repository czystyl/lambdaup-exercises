/*
  *
  Exercise 2
  *
 */
Js.log("\n__Exercise 2__");
/*
  #1 Variants
 */

type variants =
  | Yes
  | No;

let yourAnswer = Yes;

/* Js.log2(yourAnswer == Yes, No == yourAnswer); */

/*
  #2 Variant constructor
 */

type time =
  | Days(int)
  | Weeks(int)
  | Months(int);

let conferenceDuration = Days(1);

/*
  #3 Parameterized type
 */

type points('a) = ('a, 'a, string);

let xyFloat: points(float) = (1.2, 1.2, "my custom string");

let xyInt: points(int) = (2, 1, "end");

/* Js.log(xyFloat); */
/* Js.log(xyInt); */

/*
  #4 Optional type!
 */

type option('a) =
  | None
  | Some('a);

let youKnowReasonML = Some("Yes, I know!");

/*
  #5 Pattern Matching!
 */

type answer =
  | Yes
  | No;

let question = ans =>
  switch (ans) {
  | Yes => "Yes, of course!"
  | No => "No way!"
  };

/* Js.log("#5 Your answer is: " ++ question(Yes)); */
/* Js.log("#4 Your answer is: " ++ question(No)); */

type prize =
  | Gold(int)
  | Cash(float);

let checkPrize = p =>
  switch (p) {
  | Gold(count) => string_of_int(count) ++ " gold coin"
  /* | Cash(count) => string_of_float(count) ++ " $$$" */
  | _ => "???"
  };

Js.log("#6 First win: " ++ checkPrize(Cash(123.2)));
Js.log("#7 Second win: " ++ checkPrize(Gold(123)));

let whatDoYouDo = (~name: string, ~profession=?, ()) =>
  "Welcome "
  ++ name
  ++ (
    switch (profession) {
    | Some(a) => " I'm a " ++ a
    | None => ""
    }
  );

Js.log("#8 " ++ whatDoYouDo(~name="ReasonML", ~profession="programmer", ()));
Js.log("#9 " ++ whatDoYouDo(~name="oCaml", ()));

/*
 type howFarWeAreFromHome =
   | Coordinates(float, float)
   | Distance(float)
   | SpacePoint(float, float, int);

 let calculate = (howFar: howFarWeAreFromHome, home: option(string)) =>
   switch (howFar, home) {
   | home => "we have home"
   | _ => "elo"
   };

 Js.log(calculate(Distance(15.0))); */