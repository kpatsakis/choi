void fun()
{
  int entity_2 = 77;
  int entity_9 = 71;
  int entity_7 = 22;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'I', entity_2-1);
  entity_0[entity_2-1]='';
  entity_6 = (char*)malloc(52*sizeof(char));
  entity_6[52-1]='';
  entity_2 = 96;
  strcpy(entity_6, entity_0);
}