void fun()
{
  int entity_8 = 99;
  char entity_2[entity_8] = "";
  char entity_5[96] = "";
  char entity_3 = 'Q';
  char* entity_9;
  memset(entity_5, 'w', 96-1);
  entity_5[96-1]='0';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'B', entity_8-1);
  entity_2[entity_8-1]='0';
  strcpy(entity_9, entity_2);
}