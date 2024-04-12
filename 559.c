void fun()
{
  int entity_3 = 38;
  int entity_0 = 40;
  char entity_7[77] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'b', 77-1);
  entity_7[77-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_7, 77*sizeof(char));
}