/*
  *
  Bindngs let
  *
 */
Js.log("\n__START__");
/* #1 */
let hello = "Helo!";

let name = "ReasonML";

let combine = hello ++ " " ++ name;

/* Js.log("\n#1 " ++ combine); */

/* #2 scope trick */
let message = {
  let hello = "Welcome";
  let name = "OCaml";
  hello ++ " " ++ name;
};

/* Js.log("\n#2 " ++ message); */

/*
 Typing
 */
/*
  let
 */
type carType = string;

/* don't need to type. Type is inferred */
let car: carType = "Ferrari";

/*
 Record
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

/* Js.log("\n#3 Serial number: " ++ laFerrari.serialNumber);
   Js.log("#4 Hours power: " ++ string_of_int(laFerrari.hours) ++ " KM");
   Js.log("#5 V-max: " ++ string_of_float(laFerrari.maxSpeed) ++ " km/h"); */

/*
 Array
 */
let names = [|"Luke", "Mat", "Souhe"|];

let numberArr: array(int) = [|1, 2, 3|];

/* ArrayLabels.iteri(
     ~f=
       (index, name) => {
         Js.log("" ++ string_of_int(index + 1) ++ "_Welcome " ++ name ++ "!");
         ();
       },
     names,
   ); */

/*
 Tuple
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
 List
 */

let numberList = [1, 2, 3];

let cityList = ["Prague", "Wroclaw", "Paris"];

/* ArrayLabels.iteri(
     ~f=
       (index, name) => {
         Js.log("" ++ string_of_int(index + 1) ++ "_Welcome " ++ name ++ "!");
         ();
       },
     ArrayLabels.of_list(cityList),
   ); */

/*
 Functions
 */

let add = (a: int, b: int, c: int) => a + b + c;

/* Js.log("#7 5+5+5=" ++ string_of_int(add(5, 5, 5))); */

let addLabel = (~a: int, ~b: int, ~c: float) => a + b + int_of_float(c);

/* Js.log("\n#7 2+2+1.0=" ++ string_of_int(addLabel(~b=2, ~a=2, ~c=1.0))); */

/*
 Currying
 */

let sub = (a, b) => a - b;

let sub5 = sub(50);

/* Js.log("\n#8 50-10=" ++ string_of_int(sub5(10))); */