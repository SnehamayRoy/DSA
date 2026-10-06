-- Tables available (already created and filled for you):
--
--   CREATE TABLE employees (
--       id INTEGER PRIMARY KEY,
--       name TEXT NOT NULL,
--       manager_id INTEGER
--   )
--
-- Run (Ctrl/Cmd+Enter) executes your query; Submit checks it against the tests.

-- TODO: Return each employee's name as employee and their manager's name as manager. Skip employees who have no manager.
select e1.name as employee, e2.name as manager from employees e1 join employees e2 on e2.id=e1.manager_id;
