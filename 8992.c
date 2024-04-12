void fun()
{
  int entity_8 = 5;
  int entity_2 = 71;
  int entity_9 = 5;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'v', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[71-1]='';
  strcpy(entity_1, entity_5);
}