void fun()
{
  int entity_9 = 77;
  char entity_1[100] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_1, 'N', 100-1);
  entity_1[100-1]='';
  entity_9 = 71;
  strcpy(entity_7, entity_1);
}