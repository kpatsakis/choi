void fun()
{
  int entity_7 = 28;
  int entity_0 = 67;
  char entity_9[73] = "";
  char* entity_2;
  char entity_4[41] = "";
  memset(entity_4, 'w', 41-1);
  entity_4[41-1]='0';
  memset(entity_9, 'X', 73-1);
  entity_9[73-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_9, 73*sizeof(char));
}