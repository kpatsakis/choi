void fun()
{
  int entity_9 = 91;
  char* entity_0;
  char entity_1[77] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'J', 77-1);
  entity_1[77-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memcpy(entity_8, entity_1, 77*sizeof(char));
}