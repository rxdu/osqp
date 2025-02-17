OSQP solver documentation
==========================

`Visit our GitHub Discussions page <https://github.com/orgs/osqp/discussions>`_
for any questions related to the solver!

The OSQP (Operator Splitting Quadratic Program) solver is a numerical
optimization package for solving convex quadratic programs in the form

.. math::
  \begin{array}{ll}
    \mbox{minimize} & \frac{1}{2} x^T P x + q^T x \\
    \mbox{subject to} & l \le A x \le u
  \end{array}

where :math:`x \in \mathbf{R}^n` is the optimization variable and
:math:`P \in \mathbf{S}^{n}_{+}` a positive semidefinite matrix.

**Code available on** `GitHub <https://github.com/osqp/osqp>`_.

.. rubric:: Citing OSQP

If you are using OSQP for your work, we encourage you to

* :ref:`Cite the related papers <citing>`
* Put a star on GitHub |github-star|


.. |github-star| image:: https://img.shields.io/github/stars/osqp/osqp.svg?style=social&label=Star
  :target: https://github.com/osqp/osqp


**We are looking forward to hearing your success stories with OSQP!** Please `share them with us <bartolomeo.stellato@gmail.com>`_.

.. rubric:: Features


.. glossary::

    Efficient
        It uses a custom ADMM-based first-order method requiring only a single matrix factorization in the setup phase. All the other operations are extremely cheap. It also implements custom sparse linear algebra routines exploiting structures in the problem data.

    Robust
        The algorithm is absolutely division free after the setup and it requires no assumptions on problem data (the problem only needs to be convex). It just works!

    Detects primal / dual infeasible problems
        When the problem is primal or dual infeasible, OSQP detects it. It is the first available QP solver based on first-order methods able to do so.

    Embeddable
        It has an easy interface to generate customized embeddable C code with no memory manager required.

    Library-free
        It requires no external library to run.

    Efficiently warm started
        It can be easily warm-started and the matrix factorization can be cached to solve parametrized problems extremely efficiently.

    Interfaces
        It provides interfaces to C, C++, Fortran, Julia, Matlab, Python, R, Ruby, and Rust.



.. rubric:: License

OSQP is distributed under the `Apache 2.0 License <https://www.apache.org/licenses/LICENSE-2.0>`_



.. rubric:: Credits

Please credit the OSQP Developer Team when using OSQP.

Interfaces development

* `Nick Gould <http://www.numerical.rl.ac.uk/people/nimg/nimg.html>`_ (Rutherford Appleton Laboratory): Fortran and CUTEst interfaces
* `Ed Barnard <eabarnard@gmail.com>`_ (University of Oxford): Rust interface


.. rubric:: Bug reports and support

Please report any issues via the `Github issue tracker <https://github.com/osqp/osqp/issues>`_. All types of issues are welcome including bug reports, documentation typos, feature requests and so on.


.. rubric:: Numerical benchmarks

Numerical benchmarks against other solvers are available `here <https://github.com/osqp/osqp_benchmarks>`_.


.. toctree::
   :hidden:
   :maxdepth: 2
   :caption: User Documentation

   solver/index
   get_started/index
   interfaces/index
   parsers/index
   codegen/index
   examples/index
   advanced/index
   contributing/index
   citing/index
