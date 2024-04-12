void fun()
{
  int entity_5 = 52;
  entity_5 = 8;
  char* entity_0;
  char* entity_9;
  char entity_1[76] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_1, 'X', 76-1);
  entity_1[76-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  strcpy(entity_0, entity_1);
}