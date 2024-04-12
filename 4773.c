void fun()
{
  int entity_2 = 4;
  char entity_5[91] = "";
  entity_5 = NULL;
  char entity_3[64] = "";
  entity_3 = NULL;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'G', 1-1);
  entity_1[1-1]='';
  memset(entity_3, 'g', 64-1);
  entity_3[64-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_5, 'i', 91-1);
  entity_5[91-1]='';
  memcpy(entity_0, entity_5, 91*sizeof(char));
}