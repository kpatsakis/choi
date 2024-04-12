void fun()
{
  int entity_5 = 96;
  char* entity_7;
  char entity_9[69] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_9, 'r', 69-1);
  entity_9[69-1]='';
  strcpy(entity_7, entity_9);
}