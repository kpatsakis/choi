void fun()
{
  int entity_9 = 50;
  char entity_2[65] = "";
  entity_2 = NULL;
  char entity_0[5] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_4[77] = "";
  entity_4 = NULL;
  memset(entity_2, 'I', 65-1);
  entity_2[65-1]='';
  memset(entity_0, 'L', 5-1);
  entity_0[5-1]='';
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[4-1]='';
  memset(entity_4, 'q', 77-1);
  entity_4[77-1]='';
  entity_4[entity_9] = 'd';
}