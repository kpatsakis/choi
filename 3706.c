void fun()
{
  int entity_2 = 13;
  char entity_6[86] = "";
  entity_6 = NULL;
  char entity_8 = 'y';
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'd', entity_2-1);
  entity_0[entity_2-1]='';
  memset(entity_6, 'K', 86-1);
  entity_6[86-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  memcpy(entity_1, entity_0, entity_2*sizeof(char));
}