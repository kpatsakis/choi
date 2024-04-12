void fun()
{
  int entity_8 = 10;
  int entity_9 = 95;
  char* entity_6;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'h', entity_8-1);
  entity_0[entity_8-1]='';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  strcpy(entity_6, entity_0);
}