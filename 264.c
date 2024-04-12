void fun()
{
  int entity_8 = 88;
  char* entity_5;
  char entity_2[64] = "";
  entity_2 = NULL;
  char entity_1[14] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', 14-1);
  entity_1[14-1]='';
  memset(entity_2, 'x', 64-1);
  entity_2[64-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memcpy(entity_5, entity_1, 14*sizeof(char));
}