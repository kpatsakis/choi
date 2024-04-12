void fun()
{
  int entity_5 = 95;
  int entity_9 = 3;
  char entity_1[55] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_1, 'F', 55-1);
  entity_1[55-1]='';
  strcpy(entity_7, entity_1);
}