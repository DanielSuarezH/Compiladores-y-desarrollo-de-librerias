program matriz
    implicit none
    real :: a(3,3)
    integer:: i,j
    a=0

    open(1,file="C:\Fortran\Hola mundo\Matriz.txt")
    do i=1,3
        do j=1,3
            read(1,*) a(i,j)
        end do
    end do

    a = matmul(a,a)

    do i=1,3
        write(*,*)a(i,:)
    end do

    close(1)
    stop
end program
