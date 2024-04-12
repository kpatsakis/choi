void fun()
{
  int entity_2 = 52;
  int entity_8 = 45;
  char* entity_7;
  char entity_5[98] = "";
  char entity_1 = 'Q';
  memset(entity_5, 'H', 98-1);
  entity_5[98-1]='0';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_5, 98*sizeof(char));
}