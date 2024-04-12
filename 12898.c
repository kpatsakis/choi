void fun()
{
  int entity_2 = 28;
  int entity_5 = 45;
  char entity_3[98] = "";
  char entity_0 = 'E';
  char entity_9[73] = "";
  char* entity_8;
  memset(entity_3, 'u', 98-1);
  entity_3[98-1]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'b', 73-1);
  entity_9[73-1]='0';
  memcpy(entity_8, entity_9, 73*sizeof(char));
}