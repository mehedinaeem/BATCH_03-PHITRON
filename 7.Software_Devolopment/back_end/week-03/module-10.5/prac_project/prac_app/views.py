from django.shortcuts import render
from datetime import datetime

# Create your views here.


def home(request):
    context = {
        'Name': 'naeem',
        'Age': 20,
        'Dept': 'CSE',
        'Session': '21-22',
        'date': datetime.now().date(),
        'string':'hey this is naeem. I am from mymensingh.Me studyiny on computer science & engineering'
    }
    return render(request, 'home.html', context)
