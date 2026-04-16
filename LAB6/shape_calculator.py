import geometry_utils

operations = {
    "circle_area": lambda: geometry_utils.circle_area(
        float(input("Enter radius: "))
    ),
    "circle_perimeter": lambda: geometry_utils.circle_perimeter(
        float(input("Enter radius: "))
    ),
    "rectangle_area": lambda: geometry_utils.rectangle_area(
        float(input("Enter width: ")),
        float(input("Enter height: "))
    ),
    "rectangle_perimeter": lambda: geometry_utils.rectangle_perimeter(
        float(input("Enter width: ")),
        float(input("Enter height: "))
    ),
    "triangle_area": lambda: geometry_utils.triangle_area(
        float(input("Enter base: ")),
        float(input("Enter height: "))
    ),
}

print("Available shapes: circle, rectangle, triangle")
print("Available calculations: _area, _perimeter (e.g., circle_area)")

operation = input("Enter the operation you want to perform: ").strip()

if operation not in operations:
    print("Input Error: Invalid operation. Please choose from the available options.")
else:
    try:
        result = operations[operation]()
        print(f"Result: {result}")
    except ValueError as e:
        print(e)
    except Exception:
        print("Input Error: Please enter valid numeric values.")