void fun()
{
  int entity_2 = 14;
  entity_2 = 10;
  char entity_6[48] = "";
  entity_6 = NULL;
  char entity_0[48] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_6, 'd', 48-1);
  entity_6[48-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memset(entity_0, 'x', 48-1);
  entity_0[48-1]='';
  entity_6[entity_2] = 'T';
}