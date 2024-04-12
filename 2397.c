void fun()
{
  int entity_1 = 18;
  char entity_8 = 'A';
  char* entity_7;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_3 = 'G';
  memset(entity_9, 'k', entity_1-1);
  entity_9[entity_1-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  entity_1 = 24;
  memcpy(entity_7, entity_9, entity_1*sizeof(char));
}