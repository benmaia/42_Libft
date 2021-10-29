# 42_Libft

![42] (<img src="data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0b3I6IEFkb2JlIElsbHVzdHJhdG9yIDE5LjAuMCwgU1ZHIEV4cG9ydCBQbHVnLUluIC4gU1ZHIFZlcnNpb246IDYuMDAgQnVpbGQgMCkgIC0tPgo8c3ZnIHZlcnNpb249IjEuMSIgaWQ9IkxheWVyXzEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHg9IjBweCIgeT0iMHB4IgoJIHZpZXdCb3g9Ii00MjAgMjU3IDExOCA0OCIgc3R5bGU9ImVuYWJsZS1iYWNrZ3JvdW5kOm5ldyAtNDIwIDI1NyAxMTggNDg7IiB4bWw6c3BhY2U9InByZXNlcnZlIj4KPHN0eWxlIHR5cGU9InRleHQvY3NzIj4KCS5zdDB7ZmlsbDojRkZGRkZGO30KPC9zdHlsZT4KPGc+Cgk8cG9seWdvbiBjbGFzcz0ic3QwIiBwb2ludHM9Ii0zODIuNiwyNTcuOSAtMzk0LjksMjU3LjkgLTQxOS41LDI4Mi41IC00MTkuNSwyOTIuNCAtMzk0LjksMjkyLjQgLTM5NC45LDMwNC43IC0zODIuNiwzMDQuNyAKCQktMzgyLjYsMjgyLjUgLTQwNy4yLDI4Mi41IAkiLz4KCTxwb2x5Z29uIGNsYXNzPSJzdDAiIHBvaW50cz0iLTM3Ny4zLDI3MC4yIC0zNjUsMjU3LjkgLTM3Ny4zLDI1Ny45IAkiLz4KCTxwb2x5Z29uIGNsYXNzPSJzdDAiIHBvaW50cz0iLTM1Mi43LDI3MC4yIC0zNTIuNywyNTcuOSAtMzY1LDI1Ny45IC0zNjUsMjcwLjIgLTM3Ny4zLDI4Mi41IC0zNzcuMywyOTQuNyAtMzY1LDI5NC43IC0zNjUsMjgyLjUgCQoJCSIvPgoJPHBvbHlnb24gY2xhc3M9InN0MCIgcG9pbnRzPSItMzUyLjcsMjgyLjUgLTM2NSwyOTQuNyAtMzUyLjcsMjk0LjcgCSIvPgoJPHJlY3QgeD0iLTM0MC4zIiB5PSIyODIuNSIgY2xhc3M9InN0MCIgd2lkdGg9IjEiIGhlaWdodD0iMTIuMiIvPgoJPHBvbHlnb24gY2xhc3M9InN0MCIgcG9pbnRzPSItMzMzLjUsMjg1IC0zMzIuMSwyODUgLTMzMi45LDI5MC41IC0zMzAuNiwyOTAuNSAtMzMwLjcsMjkxLjcgLTMzNC40LDI5MS43IAkiLz4KCTxwb2x5Z29uIGNsYXNzPSJzdDAiIHBvaW50cz0iLTMyOSwyODUgLTMyNy42LDI4NSAtMzI4LjUsMjkxLjcgLTMyOS44LDI5MS43IAkiLz4KCTxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0tMzI1LjMsMjkwLjdjMC42LDAsMC45LTAuMywwLjktMC45YzAtMC40LTAuMi0wLjctMC42LTAuOWMtMC41LTAuMy0xLTAuNS0xLjMtMC45Yy0wLjMtMC4zLTAuNC0wLjctMC40LTEuMgoJCWMwLTEuMSwwLjktMiwyLjItMmMwLjgsMCwxLjMsMC4zLDEuOCwwLjhsLTAuNywwLjljLTAuMi0wLjQtMC42LTAuNy0xLTAuN2MtMC41LDAtMC45LDAuMy0wLjksMC44czAuNCwwLjcsMS4xLDEuMQoJCWMwLjksMC41LDEuMywxLDEuMywyYzAsMS4yLTAuOSwyLjEtMi4zLDIuMWMtMC44LDAtMS41LTAuMy0yLTFsMC44LTAuOUMtMzI2LjMsMjkwLjQtMzI1LjksMjkwLjctMzI1LjMsMjkwLjciLz4KCTxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0tMzIxLjQsMjg1aDEuNGMwLjgsMCwxLjUsMCwxLjksMC40YzAuNCwwLjMsMC42LDAuNywwLjYsMS4yYzAsMC45LTAuNSwxLjUtMS40LDEuNmMwLjksMC4xLDEuNCwwLjcsMS40LDEuNQoJCWMwLDAuNy0wLjMsMS4zLTAuOCwxLjZjLTAuNSwwLjQtMS4zLDAuNC0yLjMsMC40aC0xLjVMLTMyMS40LDI4NXogTS0zMjAuNCwyOTAuNmMxLDAsMS41LTAuMiwxLjUtMC45YzAtMC43LTAuNS0wLjgtMS4zLTAuOGgtMC4zCgkJbC0wLjIsMS44aDAuM1YyOTAuNnogTS0zMjAuMywyODcuN0wtMzIwLjMsMjg3LjdjMSwwLDEuNS0wLjIsMS41LTAuOWMwLTAuNi0wLjQtMC43LTEuMi0wLjdoLTAuMUwtMzIwLjMsMjg3Ljd6Ii8+Cgk8cGF0aCBjbGFzcz0ic3QwIiBkPSJNLTMxNi43LDI4OC42YzAtMC45LDAuNC0xLjksMS0yLjZjMC43LTAuOCwxLjctMS4yLDIuOC0xLjJjMiwwLDMuMywxLjMsMy4zLDMuMWMwLDEtMC4zLDEuOS0wLjksMi41CgkJYy0wLjcsMC44LTEuNywxLjMtMi45LDEuM0MtMzE1LjQsMjkxLjgtMzE2LjcsMjkwLjYtMzE2LjcsMjg4LjYgTS0zMTUuMywyODguNmMwLDEuMywwLjgsMiwxLjksMmMxLjMsMCwyLjMtMS4xLDIuMy0yLjYKCQljMC0xLjItMC44LTItMS45LTJDLTMxNC4zLDI4Ni4xLTMxNS4zLDI4Ny4xLTMxNS4zLDI4OC42Ii8+Cgk8cGF0aCBjbGFzcz0ic3QwIiBkPSJNLTMwNi4zLDI4NWgxLjVsMS42LDYuNmgtMS41bC0wLjMtMS40aC0yLjVsLTAuNywxLjRoLTEuNkwtMzA2LjMsMjg1eiBNLTMwNS41LDI4Ny42CgkJYy0wLjEtMC4zLTAuMS0wLjgtMC4xLTEuNGMtMC4xLDAuNS0wLjMsMC45LTAuNSwxLjNsLTAuOCwxLjdoMS43TC0zMDUuNSwyODcuNnoiLz4KPC9nPgo8L3N2Zz4K" alt="">) )
<\br>
> *"Your very first own Library!"*
<\br>
<\br>
<p> The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.
</br>
<p> It is forbidden to use global variables. If subfuctions are needed, they must be "static". The library must be compiled with ar command (libtool is forbidden).
<\br>
<p> C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project gives you the opportunity to re-write those functions, understand them, and learn to use them. This library will help you for all your future C projects. Through this project, we also give you the opportunity to expand the list of functions with your own. Take the time to expand your libft throughout the year.
</br></p>
</br>
<p> LIBFT 1st PART OK ✔️ LIBFT 2nd PART OK ✔️ LIBFT BONUS OK ✔️</p>
<p> MAKEFILE OK ✔️ HEADER OK ✔️</p>
</br>
<p> Grade: 125% </p>

