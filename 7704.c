void fun()
{
  int entity_9 = 36;
  entity_9 = 7;
  char entity_4[35] = "";
  entity_4 = NULL;
  char entity_5[37] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_4, 'b', 35-1);
  entity_4[35-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_5, 'P', 37-1);
  entity_5[37-1]='';
  strcpy(entity_6, entity_4);
}