void fun()
{
  int entity_6 = 24;
  int entity_0 = 46;
  char* entity_3;
  char* entity_8;
  char entity_2[88] = "";
  entity_2 = NULL;
  char entity_4[63] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  memset(entity_2, 'i', 88-1);
  entity_2[88-1]='';
  memset(entity_4, 'l', 63-1);
  entity_4[63-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  strcpy(entity_8, entity_2);
}