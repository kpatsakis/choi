void fun()
{
  int entity_6 = 95;
  entity_6 = 26;
  char* entity_4;
  char entity_0[33] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  memset(entity_0, 'u', 33-1);
  entity_0[33-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_0, 33*sizeof(char));
}