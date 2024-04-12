void fun()
{
  int entity_4 = 87;
  char entity_0[12] = "";
  entity_0 = NULL;
  char entity_1[23] = "";
  entity_1 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char entity_8 = 'v';
  char* entity_9;
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memset(entity_1, 'B', 23-1);
  entity_1[23-1]='';
  memset(entity_0, 'h', 12-1);
  entity_0[12-1]='';
  memset(entity_7, 'D', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 30;
  strcpy(entity_9, entity_7);
}