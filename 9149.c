void fun()
{
  int entity_8 = 64;
  char* entity_6;
  char* entity_1;
  char entity_0[39] = "";
  entity_0 = NULL;
  char entity_7[9] = "";
  entity_7 = NULL;
  memset(entity_7, 'Q', 9-1);
  entity_7[9-1]='';
  memset(entity_0, 'P', 39-1);
  entity_0[39-1]='';
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_0, 39*sizeof(char));
}