void fun()
{
  int entity_0 = 66;
  char entity_5[entity_0] = "";
  char* entity_9;
  memset(entity_5, 'n', entity_0-1);
  entity_5[entity_0-1]='0';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}