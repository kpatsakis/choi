void fun()
{
  int entity_4 = 80;
  int entity_0 = 23;
  char* entity_1;
  char entity_9[entity_0] = "";
  char entity_7[73] = "";
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'A', entity_0-1);
  entity_9[entity_0-1]='0';
  memset(entity_7, 'Y', 73-1);
  entity_7[73-1]='0';
  entity_0 = 70;
  strcpy(entity_1, entity_9);
}