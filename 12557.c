void fun()
{
  int entity_0 = 76;
  char entity_6[entity_0] = "";
  char entity_9[73] = "";
  char* entity_7;
  memset(entity_6, 'R', entity_0-1);
  entity_6[entity_0-1]='0';
  memset(entity_9, 'R', 73-1);
  entity_9[73-1]='0';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_6);
}