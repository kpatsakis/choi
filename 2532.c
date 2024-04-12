void fun()
{
  int entity_5 = 41;
  char entity_3[15] = "";
  entity_3 = NULL;
  char entity_1[31] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'G', 31-1);
  entity_1[31-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_3, 'n', 15-1);
  entity_3[15-1]='';
  memcpy(entity_2, entity_3, 15*sizeof(char));
}