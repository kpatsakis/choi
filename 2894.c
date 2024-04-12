void fun()
{
  int entity_8 = 99;
  char* entity_1;
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_0[57] = "";
  entity_0 = NULL;
  char entity_6[6] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_2, 'B', 67-1);
  entity_2[67-1]='';
  memset(entity_0, 'a', 57-1);
  entity_0[57-1]='';
  memset(entity_6, 'C', 6-1);
  entity_6[6-1]='';
  memcpy(entity_1, entity_0, 57*sizeof(char));
}