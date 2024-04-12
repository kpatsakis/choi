void fun()
{
  int entity_7 = 65;
  char* entity_8;
  char entity_1 = 'v';
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_4[15] = "";
  entity_4 = NULL;
  char entity_9 = 'B';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  memset(entity_4, 'B', 15-1);
  entity_4[15-1]='';
  memset(entity_6, 'F', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_8, entity_6);
}