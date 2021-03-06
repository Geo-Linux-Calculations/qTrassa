### qTrassa - Программа для расчета геометрических элементов трассы при проходке тоннелей закрытым способом и расчета отклонений тоннельной обделки кругового сечения (маркшейдерам, метростроителям).
#### Author: Oleg  M.Kosorukov  
#### Версия 0.52

#### Используемая литература: Инструкция ВСН 160/69.

#### Основное:
* расчет пикета и смещения от разбивочной оси / оси пути / оси тоннеля (переходные кривые)
* предрасчет координат x, y, h используя пикет и смещение от разбивочной оси / оси пути / оси тоннеля (переходные кривые)
Дополнительно:
* разбивка всей трассы или ее участка, через заданное расстояние и по заданной оси (с учетом переходных кривых). Условный пикетаж фиксирован длинной стандартного пикета из первой вкладки ввода/редактирования трассы. Возможно сохранить в виде схемы dxf.
* вычисляет эллиптичность (по четырем радиусам), отклонение положения центра кольца в плане и профиле от проектной оси тоннеля
* генерирует протокол отклонения кольца, сводную ведомость и схема dxf.
аналог http://www.geoprogram.ru/kolca и vmt https://vmt-gmbh.de/

#### Описание, ввод данных в табличной форме:
* начало трассы, задается начальный пикет координаты x, y и длину стандартного пикета 
* в таблице "элементы трассы в плане" - вводятся конец участка прямого/кривого элемента 
* в таблице "переходные кривые" - вводятся данные по ходу пикетажа! Начала переходной кривой 1 ее длинна и параметр, далее q, z (z можно рассчитать автоматически по 
* параметрам переходной кривой 1, а для расчета “q” встроен калькулятор активируется по правой кнопке мыши) 
* в таблице "продольный профиль" - вводится начальный пикет участка, если это прямой участок, то радиус должен равен нулю. Если требуется ввести вертикальную кривую (далее ВК), то вводится: 
  а. пикет начала ВК и ее отметка
  б. пикет вершины, отметка и радиус ВК (радиус со знаком "-" выгнутая кривая, со знаком + вогнутая) в. пикет конца ВК и ее отметка, если отметка на начале ВК или ее конце будет равна нулю, то она будет вычислена автоматически при предрасчете.

В программу встроен пример ввода трассы с геометрической схемы с продольным профилем и с переходными кривыми, а так-же пример расчета 2х колец с выводом в формат "XML-документ Word 2003" протокола кольца.

#### Форум: 
http://geodesist.ru/forum/threads/qtrassa-0-5-demo.53673/

#### Видео по работе с  программой:
https://www.youtube.com/playlist?list=PLWquGNueWJXZRTKFcMbZWZIQnlJfCvmnV


#### TO-DO 
- Преобразовать шаблон протокола колец из "xml" в ".docx" формат. Работа с zip файлами. 
- Переписать систему создания/вычисления протокола колец! Отделить вычисления от заполнения шаблона данными.
- Создать шаблон ".xlsx" для сводной таблицы. Привести к виду аналогичному ведомости укладки ж/б колец от АО "УСК МОСТ".
- Продумать сохранение данных по кольцам как отдельный проект.
- Создать дополнительный вид отображения колец в аналогично ведомости укладки. Формат: 1 строка 1 кольцо 
