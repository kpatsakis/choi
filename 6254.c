void fun()
{
  int entity_5 = 19;
  int entity_4 = 97;
  char entity_8[37] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_9[26] = "";
  entity_9 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_8, 'q', 37-1);
  entity_8[37-1]='';
  memset(entity_9, 'S', 26-1);
  entity_9[26-1]='';
  memset(entity_0, 'K', entity_4-1);
  entity_0[entity_4-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  strcpy(entity_6, entity_0);
}