void fun()
{
  int entity_1 = 13;
  char* entity_7;
  char entity_0[77] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_0, 'g', 77-1);
  entity_0[77-1]='';
  entity_1 = 70;
  memcpy(entity_7, entity_0, 77*sizeof(char));
}