void fun()
{
  int entity_3 = 82;
  char* entity_1;
  char entity_7[77] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', 77-1);
  entity_7[77-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memcpy(entity_1, entity_7, 77*sizeof(char));
}