void fun()
{
  int entity_9 = 94;
  char* entity_7;
  char entity_6 = 'q';
  char entity_1[94] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_1, 'B', 94-1);
  entity_1[94-1]='';
  strcpy(entity_7, entity_1);
}