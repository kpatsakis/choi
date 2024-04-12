void fun()
{
  int entity_8 = 16;
  int entity_3 = 88;
  char entity_5 = 'C';
  char entity_6[entity_3] = "";
  char* entity_7;
  char entity_0[12] = "";
  memset(entity_0, 's', 12-1);
  entity_0[12-1]='0';
  memset(entity_6, 'p', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_6, entity_3*sizeof(char));
}