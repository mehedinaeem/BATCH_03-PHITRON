
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.home),
    path('main/', views.main, name='main'),
    path('navigation/',include('navigation.urls')),
    # path('context_data/',views.context_data),
]
