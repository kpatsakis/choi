void fun()
{
  int entity_0 = 33;
  char* entity_8;
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_2[2] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 2-1);
  entity_2[2-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_7, 'i', 77-1);
  entity_7[77-1]='';
  memcpy(entity_8, entity_7, 77*sizeof(char));
}