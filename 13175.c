void fun()
{
  int entity_1 = 78;
  char entity_2[97] = "";
  char entity_0[entity_1] = "";
  char* entity_5;
  memset(entity_0, 'K', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'N', 97-1);
  entity_2[97-1]='0';
  entity_1 = 33;
  memcpy(entity_5, entity_0, entity_1*sizeof(char));
}