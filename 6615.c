void fun()
{
  int entity_9 = 78;
  int entity_8 = 88;
  entity_8 = 15;
  char* entity_0;
  char entity_5[95] = "";
  entity_5 = NULL;
  char entity_3 = 'u';
  char entity_6[53] = "";
  entity_6 = NULL;
  memset(entity_6, 'R', 53-1);
  entity_6[53-1]='';
  memset(entity_5, 'N', 95-1);
  entity_5[95-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_6);
}