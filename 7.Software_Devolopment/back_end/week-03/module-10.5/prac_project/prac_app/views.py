from django.shortcuts import render

# Create your views here.
def home(request):
    context={
        'Name':'Naeem',
        'Age':20,
        'Dept':'CSE',
        'Session':'21-22',
    }
    return render(request,'home.html',context)