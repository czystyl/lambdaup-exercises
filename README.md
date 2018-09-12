# Exercises

## EX 1

1. Create let binding with simple value like string/int [DOC](https://reasonml.github.io/docs/en/let-binding)
2. Basic type - try to type let binding that was create in the previous step [DOC](https://reasonml.github.io/docs/en/type)
3. Create a record with several different type string/int/float/bool and try to log into console [DOC](https://reasonml.github.io/docs/en/record)
4. Create an array with string/int elements and try to show each element into the console [DOC](https://reasonml.github.io/docs/en/list-and-array#array)
5. Create a tuple and try to destruct it. Show destructed date inside a console [DOC](https://reasonml.github.io/docs/en/tuple)
6. Create a list try to show each element in the console [DOC](https://reasonml.github.io/docs/en/list-and-array#list)
7. Create basic functions that will be do multiplication and sum function. [DOC](https://reasonml.github.io/docs/en/function) Use labeled arguments [labeled-arguments](https://reasonml.github.io/docs/en/function#labeled-arguments)
8. Use currying from the previous step [DOC](https://reasonml.github.io/docs/en/function#currying)

## EX 2

1. Create a variant that will contain Yes/No answer type. Try to assign it to let binding [DOC](https://reasonml.github.io/docs/en/variant)
2. Create a constructor variant. Type should hold a few information about conference like Name, Duration and City. Each of variant should contain type constructor e.g. the name should hold a string [DOC](https://reasonml.github.io/docs/en/variant#constructor-arguments)
3. Create a parameterized type. e.g. zone that can hold three values and two of them are the same. Result this type should be a list(int, int, string) or list(float, float, string)
4. Create optional type with `option` and assign to let binding [DOC](https://reasonml.github.io/docs/en/null-undefined-option)
5. Pattern Matching! [DOC](https://reasonml.github.io/docs/en/pattern-matching)
   - Create a variant of knowledge level e.g. `Low`, `Medium` and `High`
   - Create a variant of three prgrammming languages that you like
   - Create a functiona which accepts 2 parameters (knowledge and language) and try to match all possieble cases ;)
6. Create separate modules called Utils for the `sum` function, try diffrent approache. [DOC](https://reasonml.github.io/docs/en/module)
7. Get list/array and try to dispaly each elemetn in the console [API](https://reasonml.github.io/api/ArrayLabels.html)
8. Refactor previous map/iter and use `pipe` operator [API](https://reasonml.github.io/api/Pervasives.html#6_Compositionoperators)
9. Try to write functions that solve the factorial algorithm (5! = 5\*4\*3\*2\*1 = 120), using recursive and Patter Matching.

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
