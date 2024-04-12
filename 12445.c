void fun()
{
  int entity_0 = 91;
  int entity_3 = 96;
  char* entity_6;
  char entity_7 = 'v';
  char entity_9[entity_3] = "";
  memset(entity_9, 'E', entity_3-1);
  entity_9[entity_3-1]='0';
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_9);
}