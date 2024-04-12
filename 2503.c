void fun()
{
  int entity_1 = 48;
  int entity_7 = 59;
  char entity_0[71] = "";
  entity_0 = NULL;
  char entity_8 = 'H';
  char* entity_5;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  memset(entity_0, 'H', 71-1);
  entity_0[71-1]='';
  memset(entity_9, 'f', entity_1-1);
  entity_9[entity_1-1]='';
  strcpy(entity_5, entity_9);
}