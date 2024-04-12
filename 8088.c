void fun()
{
  int entity_6 = 84;
  entity_6 = 84;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_5[37] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_9, 'F', entity_6-1);
  entity_9[entity_6-1]='';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  memset(entity_5, 'e', 37-1);
  entity_5[37-1]='';
  strcpy(entity_1, entity_9);
}