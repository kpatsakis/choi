void fun()
{
  int entity_4 = 85;
  int entity_8 = 62;
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_0[18] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_0, 'C', 18-1);
  entity_0[18-1]='';
  memset(entity_2, 'I', 97-1);
  entity_2[97-1]='';
  entity_8 = 47;
  memcpy(entity_1, entity_2, 97*sizeof(char));
}