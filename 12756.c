void fun()
{
  int entity_5 = 13;
  char entity_8[entity_5] = "";
  char* entity_6;
  memset(entity_8, 'B', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}