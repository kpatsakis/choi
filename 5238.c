void fun()
{
  int entity_9 = 75;
  int entity_2 = 35;
  char* entity_0;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  memset(entity_5, 'e', entity_2-1);
  entity_5[entity_2-1]='';
  strcpy(entity_0, entity_5);
}