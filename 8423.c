void fun()
{
  int entity_3 = 50;
  int entity_2 = 22;
  entity_3 = 18;
  char entity_9[76] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'i', 76-1);
  entity_9[76-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_9, 76*sizeof(char));
}