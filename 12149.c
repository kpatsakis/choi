void fun()
{
  int entity_5 = 22;
  char entity_0[entity_5] = "";
  char* entity_7;
  char entity_2 = 'v';
  memset(entity_0, 'C', entity_5-1);
  entity_0[entity_5-1]='0';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}