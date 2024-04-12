void fun()
{
  int entity_1 = 93;
  entity_1 = 7;
  char entity_2[55] = "";
  char entity_3 = 'U';
  char entity_0[entity_1] = "";
  char* entity_7;
  memset(entity_2, 'X', 55-1);
  entity_2[55-1]='0';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'j', entity_1-1);
  entity_0[entity_1-1]='0';
  memcpy(entity_7, entity_0, entity_1*sizeof(char));
}