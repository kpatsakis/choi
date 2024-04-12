void fun()
{
  int entity_7 = 53;
  int entity_8 = 89;
  char* entity_6;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_5[7] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', 7-1);
  entity_5[7-1]='';
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  memset(entity_4, 'T', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 19;
  strcpy(entity_6, entity_4);
}