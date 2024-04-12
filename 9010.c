void fun()
{
  int entity_8 = 15;
  char entity_4[77] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_4, 'U', 77-1);
  entity_4[77-1]='';
  memset(entity_6, 'W', entity_8-1);
  entity_6[entity_8-1]='';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  strcpy(entity_5, entity_6);
}