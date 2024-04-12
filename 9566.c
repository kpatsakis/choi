void fun()
{
  int entity_8 = 72;
  char entity_5[28] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char entity_9 = 'w';
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  memset(entity_5, 'K', 28-1);
  entity_5[28-1]='';
  memset(entity_3, 'M', entity_8-1);
  entity_3[entity_8-1]='';
  entity_8 = 23;
  strcpy(entity_4, entity_3);
}