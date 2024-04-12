void fun()
{
  int entity_9 = 80;
  int entity_5 = 74;
  entity_5 = 74;
  char entity_4[entity_5] = "";
  char* entity_3;
  char entity_8[16] = "";
  memset(entity_4, 'H', entity_5-1);
  entity_4[entity_5-1]='0';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'k', 16-1);
  entity_8[16-1]='0';
  strcpy(entity_3, entity_4);
}