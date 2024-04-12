void fun()
{
  int entity_6 = 52;
  int entity_0 = 15;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_3 = 'E';
  char entity_4[88] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'm', 88-1);
  entity_4[88-1]='';
  memset(entity_5, 'n', entity_6-1);
  entity_5[entity_6-1]='';
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  entity_6 = 10;
  strcpy(entity_9, entity_5);
}