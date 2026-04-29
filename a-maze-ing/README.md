*This project has been created as part of the 42 curriculum by aelsafi, rarayano.*

# A-Maze-ing

## Description
A-Maze-ing is a procedural maze generator and visualizer developed in Python 3.10+. The program reads parameters from a configuration file, generates a structured maze (which can be configured as a "perfect" maze with a single unique path), and outputs a hexadecimal wall representation to a text file. Additionally, it provides a visual rendering of the generated maze. 

To align with custom visual branding, the graphical rendering utilizes a dark-themed aesthetic featuring a cyber purple and dark grey palette, ensuring the mandatory hidden "42" pattern stands out clearly within the generated structure.

---

## Instructions

### Prerequisites
* **Python:** Version 3.10 or later is strictly required.
* **Make:** Required to utilize the provided `Makefile` automation.

### Setup & Execution
1. **Install Dependencies:**
   ```bash
   make install
   ```
   *This command installs required project dependencies using a package manager like pip or uv.*

2. **Run the Generator:**
   ```bash
   python3 a_maze_ing.py config.txt
   ```
   *Note: `a_maze_ing.py` must be the main program file, and it takes exactly one argument: the configuration file.*

### Additional Makefile Rules
* `make run`: Executes the main script.
* `make debug`: Runs the script in debug mode using a built-in debugger (e.g., `pdb`).
* `make clean`: Removes temporary files and caches like `__pycache__` and `.mypy_cache`. 
* `make lint`: Runs `flake8` and `mypy` with specific flags to check for typing and style errors. *(Note: The Makefile has been strictly vetted to ensure no invisible non-breaking spaces cause compilation failures).*

---

## Configuration File Format

The generation parameters are controlled via a text file (e.g., `config.txt`). The file uses a `KEY=VALUE` format, one per line. Lines starting with `#` are ignored as comments.

| Key | Description | Example |
| :--- | :--- | :--- |
| `WIDTH` | Maze width (number of cells) | `WIDTH=20` |
| `HEIGHT` | Maze height | `HEIGHT=15` |
| `ENTRY` | Entry coordinates (x,y) | `ENTRY=0,0` |
| `EXIT` | Exit coordinates (x,y) | `EXIT=19,14` |
| `OUTPUT_FILE`| Output filename | `OUTPUT_FILE=maze.txt` |
| `PERFECT` | Is the maze perfect? (True/False) | `PERFECT=True` |

---

## Maze Generation Algorithm

For this project, we implemented the **Recursive Backtracker** algorithm. 

**Why we chose it:** As noted in the project forewords, the recursive backtracker is a famous algorithm utilized in procedural content generation. It inherently carves out long, winding corridors, which prevents the formation of large open areas—satisfying the rule that corridors cannot be wider than 2 cells. Furthermore, because it essentially traverses a graph to create a spanning tree, it natively guarantees the generation of a perfect maze (where only one unique path exists between the entry and exit) when the `PERFECT` flag is activated.

---

## Code Reusability (`mazegen` module)

The core algorithmic logic for creating the maze has been heavily decoupled from the file parsing and UI components to ensure future reusability.

* **The Module:** The generator is built as a standalone module containing the `MazeGenerator` class. 
* **Installation:** The package is named `mazegen-*` and can be installed via pip using the provided `.whl` or `.tar.gz` build files located at the root of the repository.
* **Usage Example:**
  ```python
  from mazegen import MazeGenerator

  # Instantiate generator with custom parameters (e.g., size, seed)
  generator = MazeGenerator(width=20, height=15, seed=42)
  
  # Access the generated structure
  maze_grid = generator.generate()
  
  # Retrieve a valid solution path
  solution = generator.get_solution(entry=(0,0), exit=(19,14))
  ```

---

## Team and Project Management

### Roles
* **aelsafi:** Focused on the core Python algorithmic logic, pathfinding implementation, and packaging the standalone `mazegen` module. Handled the strict typing rules and variable naming conventions (e.g., utilizing highly specific identifiers like `rave_char` where necessary for clarity).
* **rarayano:** Managed the file parsing logic, validation, hexadecimal output formatting, and the visual representation using the MLX graphical display.

### Planning & Retrospective
We initiated the project by successfully isolating the `mazegen` Python package early on, allowing us to unit-test the spanning tree logic independently of the file parsing. Integrating the forced "42" pattern proved slightly challenging without creating isolated cells, but we resolved this by carving the shape prior to running the backtracker. In the future, we could improve the visualizer by adding animations during the generation phase.

### Tools Used
* Python `unittest` framework for edge-case coverage.
* `flake8` and `mypy` for strict type checking and PEP 257 docstring compliance.

---

## Resources & AI Usage

**AI Usage Declaration:**
AI was utilized strictly to reduce repetitive tasks and brainstorm logic. 
* We used AI to help design regex structures for the configuration file parser. 
* AI image generation tools were used to mock up custom student-themed visual assets for the UI board.
* As per the project guidelines, all AI-generated suggestions were critically assessed, peer-reviewed, and thoroughly tested before being implemented into the codebase. No raw AI code was copy-pasted without full comprehension.

**References:**
* General graph theory and spanning tree literature related to perfect mazes.
* PEP 257 Docstring Conventions.
```