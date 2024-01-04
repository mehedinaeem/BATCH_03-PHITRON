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
    }
    return render(request, 'home.html', context)
