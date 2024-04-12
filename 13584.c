void fun()
{
  int entity_0 = 61;
  entity_0 = 61;
  char* entity_6;
  char entity_9[entity_0] = "";
  char entity_7 = 'g';
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'a', entity_0-1);
  entity_9[entity_0-1]='0';
  strcpy(entity_6, entity_9);
}