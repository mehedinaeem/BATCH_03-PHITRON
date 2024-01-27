
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('home/',views.home),
    # declare app url
    path('app_04/',include('app_04.urls')),
    path('index',views.index),
]
