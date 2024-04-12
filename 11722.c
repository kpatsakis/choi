void fun()
{
  int entity_7 = 71;
  char* entity_6;
  char entity_5[58] = "";
  char entity_9[47] = "";
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'm', 58-1);
  entity_5[58-1]='0';
  memset(entity_9, 'P', 47-1);
  entity_9[47-1]='0';
  strcpy(entity_6, entity_5);
}