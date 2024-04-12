void fun()
{
  int entity_2 = 32;
  char* entity_7;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[8-1]='';
  memset(entity_9, 'x', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 31;
  strcpy(entity_7, entity_9);
}