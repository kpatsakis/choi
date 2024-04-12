void fun()
{
  int entity_4 = 96;
  char* entity_7;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'L', entity_4-1);
  entity_9[entity_4-1]='';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  strcpy(entity_7, entity_9);
}