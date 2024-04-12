void fun()
{
  int entity_3 = 4;
  char entity_9[30] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'k', 30-1);
  entity_9[30-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_9, 30*sizeof(char));
}