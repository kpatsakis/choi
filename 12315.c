void fun()
{
  int entity_4 = 82;
  char entity_3[79] = "";
  char entity_6[91] = "";
  char* entity_9;
  char entity_5[entity_4] = "";
  memset(entity_3, 'W', 79-1);
  entity_3[79-1]='0';
  memset(entity_6, 'm', 91-1);
  entity_6[91-1]='0';
  memset(entity_5, 'P', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}