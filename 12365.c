void fun()
{
  int entity_6 = 52;
  char entity_0[entity_6] = "";
  char* entity_5;
  char* entity_9;
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'd', entity_6-1);
  entity_0[entity_6-1]='0';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_9, entity_0);
}