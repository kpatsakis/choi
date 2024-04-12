void fun()
{
  int entity_5 = 93;
  char entity_3 = 's';
  char* entity_9;
  char* entity_7;
  char entity_6[28] = "";
  entity_6 = NULL;
  memset(entity_6, 'd', 28-1);
  entity_6[28-1]='';
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  entity_5 = 71;
  strcpy(entity_7, entity_6);
}