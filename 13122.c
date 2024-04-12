void fun()
{
  int entity_5 = 97;
  entity_5 = 74;
  char entity_3 = 'k';
  char entity_8[80] = "";
  char* entity_1;
  char entity_0[entity_5] = "";
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'p', entity_5-1);
  entity_0[entity_5-1]='0';
  memset(entity_8, 'K', 80-1);
  entity_8[80-1]='0';
  memcpy(entity_1, entity_0, entity_5*sizeof(char));
}