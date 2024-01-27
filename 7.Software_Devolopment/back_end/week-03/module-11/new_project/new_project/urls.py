
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('image/',views.image),
    path('',views.home),
    path('my_app/',include('my_app.urls')),
]
