void fun()
{
  int entity_2 = 93;
  char entity_0[77] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_7 = 'A';
  char entity_9[88] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 88-1);
  entity_9[88-1]='';
  memset(entity_0, 'A', 77-1);
  entity_0[77-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  entity_2 = 47;
  memcpy(entity_4, entity_0, 77*sizeof(char));
}