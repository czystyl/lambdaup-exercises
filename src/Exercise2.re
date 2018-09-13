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
  #2 Constructor variant
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
  #4 Optional type
 */

type option('a) =
  | None
  | Some('a);

let youKnowReasonML: option('a) = Some("Yes, I know!");

let youDontKnowReasonML: option('a) = None;

/*
  #5 Pattern Matching!
 */

type knowledgeLevel =
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
 #7 Array / List
 */

/* ArrayLabels.mapi(
     ~f=
       (index, name) => {
         Js.log("#4 " ++ string_of_int(index + 1) ++ ". Welcome @" ++ name);
         ();
       },
     Exercise1.names,
   );

   ListLabels.mapi(
     ~f=
       (index, name) => {
         Js.log(
           "#6 " ++ string_of_int(index + 1) ++ ". Welcome " ++ name ++ "!",
         );
         ();
       },
     Exercise1.cityList,
   ); */

/*
  #8 Pipe operator
 */

/* Exercise1.names
   |> ArrayLabels.mapi(~f=(index, name) =>
        string_of_int(index + 1) ++ ". Welcome " ++ name ++ "!"
      )
   |> Js.log;

   Exercise1.cityList
   |> ArrayLabels.of_list
   |> ArrayLabels.mapi(~f=(index, name) =>
        string_of_int(index + 1) ++ ". Welcome " ++ name ++ "!"
      )
   |> Js.log; */

/*
  #9 Recursive Functions - FACTORIAL
 */
open Utils;

let factorial = num => {
  let rec calculate = (i, acc) =>
    switch (num) {
    | num when i > num => acc
    | _ => calculate(sum(i, 1), Math.multi(acc, i))
    };

  calculate(1, 1);
};

/* Js.log(factorial(5)); */