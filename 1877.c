void fun()
{
  int entity_3 = 62;
  entity_3 = 39;
  char entity_1 = 'X';
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_6, 'I', 26-1);
  entity_6[26-1]='';
  memcpy(entity_0, entity_6, 26*sizeof(char));
}