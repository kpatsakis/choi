void fun()
{
  int entity_2 = 72;
  char entity_1[entity_2] = "";
  char entity_7[13] = "";
  char* entity_8;
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'p', 13-1);
  entity_7[13-1]='0';
  memset(entity_1, 'P', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_2 = 73;
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}