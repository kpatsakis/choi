void fun()
{
  int entity_8 = 63;
  char entity_3 = 'G';
  char entity_4[67] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_0 = 'G';
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  memset(entity_4, 'V', 67-1);
  entity_4[67-1]='';
  memset(entity_1, 'P', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_6, entity_1);
}