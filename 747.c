void fun()
{
  int entity_3 = 8;
  char entity_0[37] = "";
  entity_0 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'M', entity_3-1);
  entity_4[entity_3-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_0, 'K', 37-1);
  entity_0[37-1]='';
  memcpy(entity_7, entity_4, entity_3*sizeof(char));
}