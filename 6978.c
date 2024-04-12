void fun()
{
  int entity_0 = 54;
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_6[28] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_8[70] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_6, 'C', 28-1);
  entity_6[28-1]='';
  memset(entity_8, 'v', 70-1);
  entity_8[70-1]='';
  memset(entity_3, 'M', 13-1);
  entity_3[13-1]='';
  memcpy(entity_9, entity_8, 70*sizeof(char));
}