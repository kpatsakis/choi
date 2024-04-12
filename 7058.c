void fun()
{
  int entity_3 = 76;
  char entity_0[77] = "";
  entity_0 = NULL;
  char* entity_9;
  char* entity_5;
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[36-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_0, 'A', 77-1);
  entity_0[77-1]='';
  entity_3 = 24;
  memcpy(entity_9, entity_0, 77*sizeof(char));
}