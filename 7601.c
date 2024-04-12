void fun()
{
  int entity_6 = 62;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_9 = 'N';
  char* entity_5;
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  memset(entity_7, 'r', entity_6-1);
  entity_7[entity_6-1]='';
  strcpy(entity_5, entity_7);
}