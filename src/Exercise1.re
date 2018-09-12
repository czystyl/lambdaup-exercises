/* Exercise 1 */
Js.log("\n~~");

let name = "ReasonML";

/* Js.log("#1 Welcom " ++ name ++ "!"); */

/* #2 scope trick */
let message = {
  let hello = "Welcome";
  let name = "OCaml";
  hello ++ " " ++ name;
};

/* Js.log("#2 " ++ message); */

/*
 #3 Typing
 */
/*
  let
 */
type carType = string;

/* don't need to type. Type is inferred */
let car: carType = "Ferrari";

/*
 #4 Record
 */

type car = {
  weigh: float,
  serialNumber: string,
  hours: int,
  maxSpeed: float,
  electric: bool,
};

let laFerrari = {
  weigh: 1000.0,
  serialNumber: "F140FE",
  hours: 800,
  maxSpeed: 349.5,
  electric: true,
};

/* Js.log("#4 Serial number: " ++ laFerrari.serialNumber);
   Js.log("#4 Hours power: " ++ string_of_int(laFerrari.hours) ++ " KM");
   Js.log("#4 V-max: " ++ string_of_float(laFerrari.maxSpeed) ++ " km/h"); */

/*
 #5 Array
 */
let names = [|"Luke", "Mat", "Souhe"|];

let numberArr: array(int) = [|1, 2, 3|];

/* ArrayLabels.iteri(
     ~f=
       (index, name) => {
         Js.log("#5 "++string_of_int(index + 1) ++ "Welcome @" ++ name);
         ();
       },
     names,
   ); */

/*
 #5 Tuple
 */

let cityAndStreet = ("Prague", "Kasztanowa", 40);

let (city, street, number) = cityAndStreet;

/* Js.log(
     "#6 You are from: "
     ++ city
     ++ ", "
     ++ street
     ++ " "
     ++ string_of_int(number),
   ); */

/*
 #7 List
 */

let numberList = [1, 2, 3];

let cityList = ["Prague", "Wroclaw", "Paris"];

/* ArrayLabels.iteri(
     ~f=
       (index, name) => {
         Js.log("#7 " ++ string_of_int(index + 1) ++ ". Welcome " ++ name ++ "!");
         ();
       },
     ArrayLabels.of_list(cityList),
   ); */

/*
 Functions
 */

let multiplication = (x, y) => x * y;

/* Js.log("#7 5*5=" ++ string_of_int(multiplication(5, 5))); */

let multiplicationLab = (~x: int, ~y: float) => x * int_of_float(y);

/* Js.log("#8 2*2.0=" ++ string_of_int(multiplicationLab(~x=2, ~y=2.0))); */

/*
 Currying
 */

let multi9 = multiplicationLab(~x=9);
let multi5 = multiplication(5);

/* Js.log("#9 5*2=" ++ string_of_int(multi5(2))); */
/* Js.log("#9 9*2.0=" ++ string_of_int(multi9(~y=2.0))); */

Js.log("~~");