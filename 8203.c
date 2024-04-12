void fun()
{
  int entity_0 = 41;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_5[28] = "";
  entity_5 = NULL;
  memset(entity_4, 'g', 71-1);
  entity_4[71-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_5, 'k', 28-1);
  entity_5[28-1]='';
  memset(entity_7, 'p', 53-1);
  entity_7[53-1]='';
  memcpy(entity_3, entity_5, 28*sizeof(char));
}