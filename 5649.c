void fun()
{
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_7[55] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memset(entity_0, 'Y', 73-1);
  entity_0[73-1]='';
  memset(entity_7, 'C', 55-1);
  entity_7[55-1]='';
  memcpy(entity_4, entity_0, 73*sizeof(char));
}