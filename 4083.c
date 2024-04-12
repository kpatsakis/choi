void fun()
{
  int entity_3 = 99;
  char* entity_5;
  char entity_9[25] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_9, 'z', 25-1);
  entity_9[25-1]='';
  memcpy(entity_5, entity_9, 25*sizeof(char));
}