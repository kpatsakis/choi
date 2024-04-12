void fun()
{
  int entity_7 = 71;
  char entity_1[entity_7] = "";
  char* entity_5;
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'A', entity_7-1);
  entity_1[entity_7-1]='0';
  strcpy(entity_5, entity_1);
}