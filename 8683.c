void fun()
{
  int entity_6 = 88;
  char* entity_4;
  char entity_5[57] = "";
  entity_5 = NULL;
  char entity_8[15] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_8, 'd', 15-1);
  entity_8[15-1]='';
  memset(entity_5, 'P', 57-1);
  entity_5[57-1]='';
  entity_6 = 43;
  strcpy(entity_4, entity_8);
}