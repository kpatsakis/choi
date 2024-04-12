void fun()
{
  int entity_2 = 98;
  char entity_1[97] = "";
  char* entity_7;
  char entity_9[17] = "";
  memset(entity_9, 'B', 17-1);
  entity_9[17-1]='0';
  memset(entity_1, 'w', 97-1);
  entity_1[97-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  entity_2 = 35;
  memcpy(entity_7, entity_1, 97*sizeof(char));
}