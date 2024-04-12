void fun()
{
  int entity_5 = 24;
  char* entity_7;
  char entity_8 = 'R';
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'D', entity_5-1);
  entity_4[entity_5-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  strcpy(entity_7, entity_4);
}