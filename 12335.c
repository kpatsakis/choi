void fun()
{
  int entity_5 = 75;
  char* entity_9;
  char entity_2 = 'w';
  char entity_3[entity_5] = "";
  char entity_8[20] = "";
  char entity_6 = 'k';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'b', 20-1);
  entity_8[20-1]='0';
  memset(entity_3, 'H', entity_5-1);
  entity_3[entity_5-1]='0';
  strcpy(entity_9, entity_3);
}