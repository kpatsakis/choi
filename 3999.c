void fun()
{
  int entity_0 = 81;
  entity_0 = 37;
  char entity_5[5] = "";
  entity_5 = NULL;
  char entity_9 = 'J';
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_5, 'q', 5-1);
  entity_5[5-1]='';
  strcpy(entity_8, entity_5);
}