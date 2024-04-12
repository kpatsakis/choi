void fun()
{
  int entity_3 = 17;
  entity_3 = 63;
  char entity_2[69] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_8[81] = "";
  entity_8 = NULL;
  memset(entity_1, 't', entity_3-1);
  entity_1[entity_3-1]='';
  memset(entity_2, 'U', 69-1);
  entity_2[69-1]='';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[85-1]='';
  memset(entity_8, 'S', 81-1);
  entity_8[81-1]='';
  memcpy(entity_0, entity_1, entity_3*sizeof(char));
}