void fun()
{
  int entity_5 = 48;
  entity_5 = 26;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_0[46] = "";
  entity_0 = NULL;
  memset(entity_0, 'f', 46-1);
  entity_0[46-1]='';
  memset(entity_2, 'C', entity_5-1);
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  entity_2[80] = 'i';
}