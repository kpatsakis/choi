void fun()
{
  int entity_8 = 32;
  int entity_9 = 66;
  entity_9 = 66;
  char* entity_4;
  char* entity_5;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'S', entity_9-1);
  entity_3[entity_9-1]='';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  entity_5 = (char*)malloc(94*sizeof(char));
  entity_5[94-1]='';
  strcpy(entity_4, entity_3);
}