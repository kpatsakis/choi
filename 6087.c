void fun()
{
  int entity_9 = 88;
  entity_9 = 44;
  char* entity_6;
  char entity_8 = 'u';
  char entity_1[77] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_1, 'f', 77-1);
  entity_1[77-1]='';
  memcpy(entity_6, entity_1, 77*sizeof(char));
}