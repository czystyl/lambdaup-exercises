# Exercises

## TIP

- How to show data inside the console: `Js.log()`

## EX 1

1. Create let binding with simple value like string/int [DOC](https://reasonml.github.io/docs/en/let-binding)
2. Basic type - try to type let binding from the previous step [DOC](https://reasonml.github.io/docs/en/type)
3. Create a record with several different type string/int/float/bool and try to log into the console [DOC](https://reasonml.github.io/docs/en/record)
4. Create an array with string/int elements [DOC](https://reasonml.github.io/docs/en/list-and-array#array)
5. Create a tuple and try to destruct it. Show destructed date inside a console [DOC](https://reasonml.github.io/docs/en/tuple)
6. Create a list with some strings, e.g. names or something else [DOC](https://reasonml.github.io/docs/en/list-and-array#list)
7. Create basic functions that will do multiplication and sum function [DOC](https://reasonml.github.io/docs/en/function)
8. Refactor the previous function and use labeled arguments [DOC](https://reasonml.github.io/docs/en/function#labeled-arguments)
9. Use currying of the prior step [DOC](https://reasonml.github.io/docs/en/function#currying)

## EX 2

1. Create a variant that will contain Yes/No answer type. Try to assign it to the let binding [DOC](https://reasonml.github.io/docs/en/variant)
2. Create a constructor variant. Type should hold a few information about a conference like Name, Duration, and City. Each variant should contain type constructor e.g. the name should hold a string [DOC](https://reasonml.github.io/docs/en/variant#constructor-arguments)
3. Create a parameterized type. e.g. `zone` (x,y, radius) that can hold three values, two of them are of the same type, and the last one are different. Result type should be like: `list(int, int, string)` or `list(float, float, bool)`
4. Create the optional type with `option` and assign to let binding. Use `Some` and `None` [DOC](https://reasonml.github.io/docs/en/null-undefined-option)
5. Pattern Matching! [DOC](https://reasonml.github.io/docs/en/pattern-matching)
   - Create a variant of knowledge level e.g. `Low`, `Medium` and `High`
   - Create a variant of three programming languages that you like
   - Create a function which accepts 2 arguments (knowledge and language) and try to match all cases - if it possible ;)
6. Create a separate module called `Utils` for the `sum` function, try different approaches [DOC](https://reasonml.github.io/docs/en/module)
7. Get list/array and try to display each element in the console [API](https://reasonml.github.io/api/ArrayLabels.html)
8. Refactor previous map/iter and use `pipe` operator and show output in the console [API](https://reasonml.github.io/api/Pervasives.html#6_Compositionoperators)
9. Try to write functions that solve the factorial algorithm (5! = 5\*4\*3\*2\*1 = 120), using recursive and Pattern Matching.

# Scripts

## Exercise 1

```
npm run ex1
```

## Exercise 2

```
npm run ex2
```

## Build

```
npm run build
```

## Build + Watch

```
npm run start
```
