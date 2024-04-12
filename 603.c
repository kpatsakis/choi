void fun()
{
  int entity_4 = 24;
  char* entity_0;
  char* entity_3;
  char entity_7[96] = "";
  entity_7 = NULL;
  char entity_5[58] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_5, 'u', 58-1);
  entity_5[58-1]='';
  memset(entity_7, 'W', 96-1);
  entity_7[96-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memcpy(entity_0, entity_7, 96*sizeof(char));
}