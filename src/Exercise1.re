/* Exercise 1 */
Js.log("\n~~");

let name = "ReasonML";

/* Js.log("#1 Welcom " ++ name ++ "!"); */

/* Js.log("#2 " ++ message); */

/*
 #2 Typing
 */
/*
  let
 */
type carType = string;

/* don't need to type. Type is inferred */
let car: carType = "Ferrari";

/*
 #3 Record
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

/* Js.log("#3 Serial number: " ++ laFerrari.serialNumber);
   Js.log("#3 Hours power: " ++ string_of_int(laFerrari.hours) ++ " KM");
   Js.log("#3 V-max: " ++ string_of_float(laFerrari.maxSpeed) ++ " km/h"); */

/*
 #4 Array
 */
let names = [|"Luke", "Mat", "Souhe"|];

let numberArr: array(int) = [|1, 2, 3|];

/*
 #5 Tuple
 */

let cityAndStreet = ("Prague", "Kasztanowa", 40);

let (city, street, number) = cityAndStreet;

/* Js.log(
     "#5 You are from: "
     ++ city
     ++ ", "
     ++ street
     ++ " "
     ++ string_of_int(number),
   ); */

/*
 #6 List
 */

let numberList = [1, 2, 3];

let cityList = ["Prague", "Wroclaw", "Paris"];

/*
 #7 Functions
 */

let multiplication = (x, y) => x * y;

/* Js.log("#7 5*5=" ++ string_of_int(multiplication(5, 5))); */

/*
 #8 Functions - labeled arguments
 */

let multiplicationLab = (~x: int, ~y: float) => x * int_of_float(y);

/* Js.log("#7 2*2.0=" ++ string_of_int(multiplicationLab(~x=2, ~y=2.0))); */

/*
 #9 Currying
 */

let multi9 = multiplicationLab(~x=9);
let multi5 = multiplication(5);

/* Js.log("#9 5*2=" ++ string_of_int(multi5(2))); */
/* Js.log("#9 9*2.0=" ++ string_of_int(multi9(~y=2.0))); */

Js.log("~~");