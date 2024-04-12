void fun()
{
  int entity_2 = 66;
  char entity_3[96] = "";
  entity_3 = NULL;
  char entity_4[99] = "";
  entity_4 = NULL;
  char entity_0[80] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memset(entity_0, 'a', 80-1);
  entity_0[80-1]='';
  memset(entity_3, 'm', 96-1);
  entity_3[96-1]='';
  memset(entity_4, 'Z', 99-1);
  entity_4[99-1]='';
  entity_0[entity_2] = 'd';
}