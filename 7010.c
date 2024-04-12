void fun()
{
  int entity_7 = 24;
  char* entity_6;
  char entity_8[10] = "";
  entity_8 = NULL;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_8, 'N', 10-1);
  entity_8[10-1]='';
  memset(entity_5, 'v', entity_7-1);
  entity_5[entity_7-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  strcpy(entity_6, entity_5);
}