void fun()
{
  int entity_0 = 34;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_9[65] = "";
  entity_9 = NULL;
  char entity_5 = 'W';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  memset(entity_2, 'B', entity_0-1);
  entity_2[entity_0-1]='';
  memset(entity_9, 'Z', 65-1);
  entity_9[65-1]='';
  strcpy(entity_1, entity_2);
}