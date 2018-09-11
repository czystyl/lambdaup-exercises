/* Exercise 2 */
Js.log("\n~~");

/*
  #1 Variants
 */

type answer =
  | Yes
  | No;

let yourAnswer = Yes;

/* Js.log2(yourAnswer == Yes, No == yourAnswer); */

/*
  #2 Variant constructor
 */

type conference =
  | Name(string)
  | Duration(int)
  | City(string);

let conferenceName = Name("LambdaUp");

let conferenceDuration = Duration(20);

/*
  #3 Parameterized type
 */

type zone('a, 'b) = ('a, 'a, 'b);

let venue: zone(int, float) = (10, 40, 2.2);

let tropical: zone(float, int) = (23.6, 18.7, 1);

/* Js.log(venue);
   Js.log(tropical); */

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

type level =
  | Low
  | Medium
  | High;

type language =
  | OCaml
  | ReasonML
  | Nothing;

let checkKnowledge = (knowledge, lang) =>
  switch (knowledge, lang) {
  | (Low, Nothing) => "nobody"
  | (Low, OCaml | ReasonML) => "Junior +"
  | (Medium, OCaml | ReasonML) => "Medium knowledge"
  | (High, OCaml) => "Wizard OCaml"
  | (High, _) => "Wizard"
  | _ => "Not matched"
  };

/* Js.log(checkKnowledge(Low, Nothing));
   Js.log(checkKnowledge(Low, OCaml));
   Js.log(checkKnowledge(High, OCaml));
   Js.log(checkKnowledge(Medium, Nothing)); */

/*
  #6 Recursive Functions - FACTORIAL
 */

exception BelowZero;

open Exercise1;

let factorial = num => {
  let rec calculate = (i, acc) =>
    switch (num) {
    | num when i > num => acc
    | _ => calculate(Utils.(sum(i, 1)), multiplication(acc, i))
    };

  calculate(1, 1);
};

Js.log(factorial(5));