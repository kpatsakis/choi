void fun()
{
  int entity_2 = 21;
  entity_2 = 64;
  char entity_5[81] = "";
  char* entity_0;
  char entity_4[entity_2] = "";
  memset(entity_5, 'r', 81-1);
  entity_5[81-1]='0';
  memset(entity_4, 'S', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, entity_2*sizeof(char));
}