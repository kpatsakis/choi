void fun()
{
  int entity_1 = 12;
  char entity_5[32] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_4[81] = "";
  entity_4 = NULL;
  char entity_3 = 'P';
  memset(entity_5, 'V', 32-1);
  entity_5[32-1]='';
  memset(entity_4, 'v', 81-1);
  entity_4[81-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  entity_1 = 12;
  memcpy(entity_2, entity_5, 32*sizeof(char));
}