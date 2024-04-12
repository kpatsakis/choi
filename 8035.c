void fun()
{
  int entity_5 = 20;
  char entity_9[21] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_4[65] = "";
  entity_4 = NULL;
  char entity_8[33] = "";
  entity_8 = NULL;
  memset(entity_9, 'N', 21-1);
  entity_9[21-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_4, 'Y', 65-1);
  entity_4[65-1]='';
  memset(entity_8, 'X', 33-1);
  entity_8[33-1]='';
  entity_5 = 51;
  memcpy(entity_0, entity_4, 65*sizeof(char));
}