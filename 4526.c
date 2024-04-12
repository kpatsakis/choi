void fun()
{
  char entity_4[81] = "";
  entity_4 = NULL;
  char entity_6[36] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[27-1]='';
  memset(entity_6, 'G', 36-1);
  entity_6[36-1]='';
  memset(entity_4, 'P', 81-1);
  entity_4[81-1]='';
  entity_4[38] = 'B';
}