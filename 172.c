void fun()
{
  int entity_3 = 94;
  char entity_5[14] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'h', entity_3-1);
  entity_6[entity_3-1]='';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memset(entity_5, 'p', 14-1);
  entity_5[14-1]='';
  strcpy(entity_8, entity_6);
}