void fun()
{
  int entity_3 = 93;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_8[17] = "";
  entity_8 = NULL;
  memset(entity_6, 'u', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  memset(entity_8, 'N', 17-1);
  entity_8[17-1]='';
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}