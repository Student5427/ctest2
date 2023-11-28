[![CI/CD GitHub Actions](https://github.com/Student5427/ctest2/actions/workflows/test-action.yml/badge.svg)](https://github.com/Student5427/ctest2/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/DenisTerehin/ctest/badge.svg?branch=main)](https://coveralls.io/github/Student5427/ctest2?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=DenisTerehin_ctest&metric=alert_status)](https://sonarcloud.io/dashboard?id=Student5427_ctest2)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=DenisTerehin_ctest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=Student5427_ctest2)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=DenisTerehin_ctest&metric=code_smells)](https://sonarcloud.io/dashboard?id=Student5427_ctest2)


# План тестирования:


# Аттестационное тестирование
<ol>
   <li>
      <h4> Тест А1 (положительный) </h4>
      <ul>
         <li> Начальное состояние: Открытый терминал </li>
         <li> Действие: Пользователь запускает программу с аргументом 5, потом вводит аргументы 1 17 -18 </li>
         <li> Ожидаемый результат:</li>
         <ul>
         	<li>Фибоначи: 5</li>
         	<li>Вычисление корней квадратного уравнения:</li> 
            <ul>
               <li>1 корень = 1</li>
               <li>2 корень = -18 </li>
            </ul>
         </ul>
      </ul>
   </li> 
   <li>               
      <h4> Тест А2 (негативный) </h4>
      <ul>
         <li> Начальное состояние: Открытый терминал </li>
         <li> Действие: Пользователь вводит букву в кач-ве числа Фибоначчи </li>
         <li> Ожидаемый результат: Invalid input </li>
      </ul>
   </li>           
   <li>                          
     <h4> Тест А3 (положительный) </h4>
     <ul>
       <li> Начальное состояние: Открытый терминал </li>
       <li> Действие: Пользователь запускает программу с аргументом 0, потом вводит аргументы 1 17 -18 </li>
       <li> Ожидаемый результат:</li>
         <ul>
         	<li>Фибоначи: 0</li>
         	<li>Вычисление корней квадратного уравнения:</li> 
            <ul>
               <li>1 корень = 1</li>
               <li>2 корень = -18 </li>
            </ul>
         </ul>
      </ul>
   </li> 
   <li>                             
     <h4> Тест А4 (негативный) </h4>
     <ul>
       <li> Начальное состояние: Открытый терминал </li>
       <li> Действие: Пользователь вводит букву в кач-ве коэфф-а квадр. уравнения </li>
       <li> Ожидаемый результат: Invalid input. </li>
      </ul>
   </li> 
</ol>

# Блочное тестирование (класс my_func)
<ol>
  <li>
    <h3>Метод int fibonachi(int num)</h3>
    <ol>
    	<li>
    	  <h4>Тест Б1.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 4</li>
    	    <li>Ожидаемый результат: 3</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 0</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: -1</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    </ol>
  </li>
    <li>
      <h2>Метод int solveQuadraticEquation(double a, double b, double c, double* roots)</h2>
    <ol>
    	<li>
    	  <h4>Тест Б2.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 -3 2</li>
    	    <li>Ожидаемый результат: 2 1</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 -4 4</li>
    	    <li>Ожидаемый результат: 2 2</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 2 5</li>
    	    <li>
            Ожидаемый результат: 0 0   
          </li>
    	  </ul>
        <h4>Тест Б2.4 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 1 2 3</li>
    	    <li>
            Ожидаемый результат: 0 0   
          </li>
    	  </ul>
    	</li>
    </ol>
  </li>
</ol>

# Интеграционное тестирование
<ol>
  <li>
    <h3>Тест И1</h3>
    <ul>
      <li>Методы: int fibonachi(int num), int solveQuadraticEquation(double a, double b, double c, double* roots)</li>
      <li>Описание: Проверяем, можно ли использовать результат работы функции fibonachi в функции solveQuadraticEquationt</li>
      <li>Входные данные: (fibonachi(6), -22, 14)</li>
      <li>Ожидаемый результат: ROOT1=1.75 ROOT2=1.00</li>
    </ul>	
  </li>
  
</ol>
