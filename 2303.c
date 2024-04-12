void fun()
{
  int entity_1 = 90;
  int entity_8 = 61;
  entity_8 = 91;
  char entity_0 = 'p';
  char* entity_5;
  char entity_9[71] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', 71-1);
  entity_9[71-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_9);
}