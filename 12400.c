void fun()
{
  int entity_3 = 34;
  int entity_5 = 78;
  char* entity_4;
  char entity_8[81] = "";
  char entity_9 = 'w';
  char entity_2[entity_5] = "";
  memset(entity_8, 'x', 81-1);
  entity_8[81-1]='0';
  memset(entity_2, 'F', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}