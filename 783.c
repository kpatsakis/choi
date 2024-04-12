void fun()
{
  int entity_3 = 46;
  int entity_4 = 100;
  char entity_9 = 'V';
  char entity_8[15] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memset(entity_1, 'K', entity_4-1);
  entity_1[entity_4-1]='';
  memset(entity_8, 'l', 15-1);
  entity_8[15-1]='';
  strcpy(entity_5, entity_1);
}