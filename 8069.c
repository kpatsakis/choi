void fun()
{
  int entity_8 = 95;
  char* entity_0;
  char entity_2[23] = "";
  entity_2 = NULL;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_2, 'W', 23-1);
  entity_2[23-1]='';
  memset(entity_5, 'm', entity_8-1);
  entity_5[entity_8-1]='';
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  entity_5[84] = 'E';
}