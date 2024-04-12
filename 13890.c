void fun()
{
  int entity_4 = 99;
  char entity_9[entity_4] = "";
  char entity_6[26] = "";
  char* entity_0;
  char* entity_2;
  memset(entity_9, 'R', entity_4-1);
  entity_9[entity_4-1]='0';
  memset(entity_6, 'l', 26-1);
  entity_6[26-1]='0';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[0]='0';
  entity_4 = 55;
  strcpy(entity_2, entity_9);
}