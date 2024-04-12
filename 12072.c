void fun()
{
  int entity_5 = 98;
  char entity_9[87] = "";
  char entity_2[81] = "";
  char* entity_0;
  memset(entity_9, 'o', 87-1);
  entity_9[87-1]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'x', 81-1);
  entity_2[81-1]='0';
  memcpy(entity_0, entity_2, 81*sizeof(char));
}