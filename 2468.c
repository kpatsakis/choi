void fun()
{
  int entity_5 = 74;
  entity_5 = 32;
  char* entity_1;
  char* entity_4;
  char entity_2[41] = "";
  entity_2 = NULL;
  char entity_8[86] = "";
  entity_8 = NULL;
  memset(entity_2, 'G', 41-1);
  entity_2[41-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  memset(entity_8, 'R', 86-1);
  entity_8[86-1]='';
  memcpy(entity_1, entity_2, 41*sizeof(char));
}