void fun()
{
  int entity_9 = 49;
  char* entity_7;
  char entity_5[89] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', 89-1);
  entity_5[89-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 69;
  strcpy(entity_7, entity_5);
}