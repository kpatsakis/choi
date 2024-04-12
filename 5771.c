void fun()
{
  int entity_8 = 95;
  int entity_0 = 54;
  char entity_9[79] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'M', 79-1);
  entity_9[79-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  entity_0 = 1;
  strcpy(entity_5, entity_9);
}