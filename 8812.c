void fun()
{
  int entity_2 = 17;
  entity_2 = 17;
  char* entity_9;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_4;
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memset(entity_3, 'k', entity_2-1);
  entity_3[entity_2-1]='';
  entity_9 = (char*)malloc(93*sizeof(char));
  entity_9[93-1]='';
  strcpy(entity_4, entity_3);
}