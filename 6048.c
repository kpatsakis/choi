void fun()
{
  int entity_1 = 35;
  char* entity_9;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_6[60] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'q', 60-1);
  entity_6[60-1]='';
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[77-1]='';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  memset(entity_5, 'D', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 86;
  memcpy(entity_4, entity_5, entity_1*sizeof(char));
}