void fun()
{
  char entity_9[12] = "";
  char* entity_0;
  char entity_1[81] = "";
  char entity_2[26] = "";
  memset(entity_1, 'P', 81-1);
  entity_1[81-1]='0';
  memset(entity_9, 'O', 12-1);
  entity_9[12-1]='0';
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'e', 26-1);
  entity_2[26-1]='0';
  memcpy(entity_0, entity_2, 26*sizeof(char));
}