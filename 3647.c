void fun()
{
  int entity_0 = 24;
  int entity_7 = 84;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_9[89] = "";
  entity_9 = NULL;
  char entity_8[48] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_9, 'n', 89-1);
  entity_9[89-1]='';
  memset(entity_8, 's', 48-1);
  entity_8[48-1]='';
  memset(entity_6, 'm', 10-1);
  entity_6[10-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  entity_7 = 82;
  strcpy(entity_4, entity_8);
}