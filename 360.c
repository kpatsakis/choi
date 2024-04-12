void fun()
{
  int entity_2 = 6;
  char entity_1[29] = "";
  entity_1 = NULL;
  char entity_9[64] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_0[0] = "";
  entity_0 = NULL;
  memset(entity_1, 'G', 29-1);
  entity_1[29-1]='';
  memset(entity_9, 'o', 64-1);
  entity_9[64-1]='';
  memset(entity_0, 'x', 0-1);
  entity_0[0-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memcpy(entity_6, entity_9, 64*sizeof(char));
}