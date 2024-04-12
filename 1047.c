void fun()
{
  int entity_0 = 58;
  char entity_9[15] = "";
  entity_9 = NULL;
  char entity_4[77] = "";
  entity_4 = NULL;
  char entity_2[28] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_9, 'v', 15-1);
  entity_9[15-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_4, 'o', 77-1);
  entity_4[77-1]='';
  memset(entity_2, 'f', 28-1);
  entity_2[28-1]='';
  entity_0 = 14;
  memcpy(entity_6, entity_9, 15*sizeof(char));
}