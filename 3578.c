void fun()
{
  int entity_1 = 48;
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_0[4] = "";
  entity_0 = NULL;
  char entity_5[17] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', 17-1);
  entity_5[17-1]='';
  memset(entity_0, 'Q', 4-1);
  entity_0[4-1]='';
  memset(entity_6, 'Z', 48-1);
  entity_6[48-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memcpy(entity_9, entity_0, 4*sizeof(char));
}