void fun()
{
  int entity_6 = 26;
  char* entity_2;
  char entity_1 = 'm';
  char* entity_0;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  memset(entity_5, 'k', entity_6-1);
  entity_5[entity_6-1]='';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[77-1]='';
  memcpy(entity_2, entity_5, entity_6*sizeof(char));
}