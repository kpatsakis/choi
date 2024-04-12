void fun()
{
  int entity_2 = 96;
  int entity_9 = 72;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_0[96] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_1 = 'P';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  memset(entity_6, 'q', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_0, 'H', 96-1);
  entity_0[96-1]='';
  entity_2 = 37;
  strcpy(entity_5, entity_6);
}