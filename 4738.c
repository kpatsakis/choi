void fun()
{
  int entity_5 = 14;
  int entity_9 = 93;
  char entity_3 = 'V';
  char* entity_0;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  memset(entity_7, 'N', entity_9-1);
  entity_7[entity_9-1]='';
  strcpy(entity_0, entity_7);
}