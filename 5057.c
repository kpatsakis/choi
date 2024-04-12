void fun()
{
  int entity_4 = 22;
  int entity_3 = 45;
  char* entity_2;
  char entity_0[26] = "";
  entity_0 = NULL;
  char entity_1[19] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', 19-1);
  entity_1[19-1]='';
  memset(entity_0, 'Q', 26-1);
  entity_0[26-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_0, 26*sizeof(char));
}