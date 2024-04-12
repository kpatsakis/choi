void fun()
{
  int entity_2 = 24;
  char entity_6[entity_2] = "";
  char* entity_5;
  char entity_1[44] = "";
  memset(entity_1, 'H', 44-1);
  entity_1[44-1]='0';
  memset(entity_6, 'C', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}