void fun()
{
  int entity_6 = 50;
  int entity_5 = 92;
  int entity_4 = 8;
  entity_6 = 28;
  char* entity_9;
  char entity_3[98] = "";
  memset(entity_3, 'w', 98-1);
  entity_3[98-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 98*sizeof(char));
}