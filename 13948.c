void fun()
{
  int entity_7 = 89;
  int entity_4 = 86;
  entity_7 = 86;
  char entity_2[entity_7] = "";
  char entity_6[4] = "";
  char* entity_8;
  char entity_3 = 'j';
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'q', entity_7-1);
  entity_2[entity_7-1]='0';
  memset(entity_6, 'x', 4-1);
  entity_6[4-1]='0';
  memcpy(entity_8, entity_2, entity_7*sizeof(char));
}