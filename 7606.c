void fun()
{
  int entity_9 = 62;
  entity_9 = 62;
  char* entity_3;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[54-1]='';
  memset(entity_5, 'W', entity_9-1);
  entity_5[entity_9-1]='';
  strcpy(entity_3, entity_5);
}