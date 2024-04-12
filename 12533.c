void fun()
{
  int entity_6 = 98;
  char* entity_1;
  char entity_4[entity_6] = "";
  char entity_0[4] = "";
  memset(entity_4, 'A', entity_6-1);
  entity_4[entity_6-1]='0';
  memset(entity_0, 'Y', 4-1);
  entity_0[4-1]='0';
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_4, entity_6*sizeof(char));
}