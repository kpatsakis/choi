void fun()
{
  char entity_2 = 'U';
  char entity_8[31] = "";
  entity_8 = NULL;
  char entity_0[97] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_8, 'Y', 31-1);
  entity_8[31-1]='';
  memset(entity_0, 'C', 97-1);
  entity_0[97-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  memcpy(entity_1, entity_0, 97*sizeof(char));
}