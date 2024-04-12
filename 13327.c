void fun()
{
  int entity_5 = 63;
  int entity_1 = 62;
  char entity_2[entity_1] = "";
  char* entity_8;
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'c', entity_1-1);
  entity_2[entity_1-1]='0';
  entity_1 = 81;
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}