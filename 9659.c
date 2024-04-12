void fun()
{
  int entity_9 = 99;
  char entity_8[72] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_3[39] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memset(entity_8, 'H', 72-1);
  entity_8[72-1]='';
  memset(entity_3, 't', 39-1);
  entity_3[39-1]='';
  entity_8[27] = 'u';
}