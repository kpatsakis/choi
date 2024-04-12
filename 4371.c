void fun()
{
  int entity_8 = 80;
  int entity_6 = 38;
  int entity_3 = 95;
  char entity_0[27] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memset(entity_0, 'i', 27-1);
  entity_0[27-1]='';
  memset(entity_9, 'q', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 77;
  strcpy(entity_7, entity_9);
}