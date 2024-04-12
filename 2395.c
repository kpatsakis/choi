void fun()
{
  int entity_3 = 35;
  int entity_2 = 46;
  entity_2 = 46;
  char entity_4[77] = "";
  entity_4 = NULL;
  char entity_5[20] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_7 = 'Y';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_4, 'K', 77-1);
  entity_4[77-1]='';
  memset(entity_5, 'x', 20-1);
  entity_5[20-1]='';
  memcpy(entity_6, entity_4, 77*sizeof(char));
}