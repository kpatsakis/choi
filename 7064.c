void fun()
{
  int entity_7 = 61;
  char* entity_3;
  char entity_4 = 'm';
  char entity_6[32] = "";
  entity_6 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', entity_7-1);
  entity_1[entity_7-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  memset(entity_6, 'H', 32-1);
  entity_6[32-1]='';
  strcpy(entity_3, entity_1);
}