void fun()
{
  int entity_5 = 81;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_4 = 'f';
  char* entity_7;
  char entity_9 = 'B';
  memset(entity_0, 'k', entity_5-1);
  entity_0[entity_5-1]='';
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[1-1]='';
  strcpy(entity_7, entity_0);
}