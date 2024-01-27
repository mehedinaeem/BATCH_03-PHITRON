from django.shortcuts import render

# Create your views here.


def home(request):
    return render(request, 'navigation/home.html')


def about(request):
    return render(request, 'navigation/about.html')


def contact(request):
    return render(request, 'navigation/contact.html')


def context(request):
    d = {'author': 'Naeem', 'age': 5}
    return render(request, 'navigation/context.html', d)


def context2(request):
    e = {'author': 'Rahim', 'age': 5, '1st': ['pythpn', 'is', 'best'], 'courses':
         [{
             'id': 1,
             'name': 'Python',
             'fee': 5000
         },
        {
             'id': 2,
            'name': 'Django',
            'fee': 10000
         },
        {
             'id': 3,
            'name': 'Database',
            'fee': 2000
         },
        {
             'id': 4,
            'name': 'DSA',
            'fee': 20000
         }]

         }
    return render(request,'navigation/context2.html',e)
