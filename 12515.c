void fun()
{
  int entity_1 = 13;
  int entity_4 = 95;
  char entity_6[entity_1] = "";
  char* entity_5;
  char entity_0[26] = "";
  memset(entity_0, 'A', 26-1);
  entity_0[26-1]='0';
  memset(entity_6, 'v', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_6, entity_1*sizeof(char));
}