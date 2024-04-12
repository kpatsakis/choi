void fun()
{
  int entity_8 = 32;
  char* entity_5;
  char entity_0[52] = "";
  entity_0 = NULL;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  memset(entity_3, 'T', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_0, 'y', 52-1);
  entity_0[52-1]='';
  memcpy(entity_5, entity_3, entity_8*sizeof(char));
}