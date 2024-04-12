void fun()
{
  int entity_7 = 45;
  char entity_2 = 'J';
  char entity_9[96] = "";
  char* entity_0;
  char entity_5[45] = "";
  memset(entity_9, 't', 96-1);
  entity_9[96-1]='0';
  memset(entity_5, 'k', 45-1);
  entity_5[45-1]='0';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  entity_7 = 67;
  memcpy(entity_0, entity_5, 45*sizeof(char));
}