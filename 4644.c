void fun()
{
  int entity_4 = 2;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'l', 1-1);
  entity_7[1-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_4 = 28;
  strcpy(entity_9, entity_7);
}