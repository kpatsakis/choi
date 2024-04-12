void fun()
{
  int entity_1 = 72;
  int entity_9 = 88;
  entity_9 = 88;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'I', entity_9-1);
  entity_3[entity_9-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  strcpy(entity_5, entity_3);
}