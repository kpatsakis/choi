void fun()
{
  int entity_5 = 16;
  char entity_0[9] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_9 = 'J';
  char entity_1 = 'h';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_0, 'p', 9-1);
  entity_0[9-1]='';
  strcpy(entity_3, entity_0);
}