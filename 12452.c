void fun()
{
  int entity_2 = 71;
  int entity_5 = 92;
  char* entity_7;
  char* entity_8;
  char entity_9[97] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'T', 97-1);
  entity_9[97-1]='0';
  memcpy(entity_8, entity_9, 97*sizeof(char));
}