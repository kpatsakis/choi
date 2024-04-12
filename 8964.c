void fun()
{
  int entity_2 = 3;
  entity_2 = 31;
  char* entity_3;
  char entity_8[17] = "";
  entity_8 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  memset(entity_8, 'x', 17-1);
  entity_8[17-1]='';
  memset(entity_6, 'K', entity_2-1);
  entity_6[entity_2-1]='';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  memcpy(entity_0, entity_6, entity_2*sizeof(char));
}