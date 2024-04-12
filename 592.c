void fun()
{
  int entity_1 = 61;
  entity_1 = 67;
  char* entity_9;
  char entity_0[77] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_6 = 'Q';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_0, 'L', 77-1);
  entity_0[77-1]='';
  memcpy(entity_5, entity_0, 77*sizeof(char));
}