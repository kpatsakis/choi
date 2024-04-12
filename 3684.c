void fun()
{
  int entity_8 = 38;
  int entity_6 = 77;
  entity_6 = 5;
  char entity_4[4] = "";
  entity_4 = NULL;
  char entity_1 = 'W';
  char* entity_9;
  memset(entity_4, 'h', 4-1);
  entity_4[4-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  strcpy(entity_9, entity_4);
}