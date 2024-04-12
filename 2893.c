void fun()
{
  char entity_0[24] = "";
  entity_0 = NULL;
  char entity_5[91] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'B', 91-1);
  entity_5[91-1]='';
  memset(entity_0, 't', 24-1);
  entity_0[24-1]='';
  entity_7 = (char*)malloc(77*sizeof(char));
  entity_7[77-1]='';
  entity_0[6] = 'Q';
}