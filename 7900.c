void fun()
{
  int entity_0 = 87;
  char entity_4[97] = "";
  entity_4 = NULL;
  char entity_2[32] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'F', 32-1);
  entity_2[32-1]='';
  memset(entity_4, 'l', 97-1);
  entity_4[97-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  entity_0 = 13;
  entity_2[entity_0] = 'b';
}