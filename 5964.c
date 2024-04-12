void fun()
{
  int entity_1 = 54;
  int entity_8 = 79;
  char entity_9[85] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  memset(entity_9, 'd', 85-1);
  entity_9[85-1]='';
  entity_9[entity_8] = 'f';
}