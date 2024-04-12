void fun()
{
  int entity_1 = 68;
  entity_1 = 5;
  char entity_5[77] = "";
  entity_5 = NULL;
  char entity_4[39] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'o', 39-1);
  entity_4[39-1]='';
  memset(entity_5, 'p', 77-1);
  entity_5[77-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_5);
}