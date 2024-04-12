void fun()
{
  char* entity_5;
  char entity_3[36] = "";
  entity_3 = NULL;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 59-1);
  entity_4[59-1]='';
  entity_5 = (char*)malloc(72*sizeof(char));
  entity_5[72-1]='';
  memset(entity_3, 'W', 36-1);
  entity_3[36-1]='';
  entity_3[41] = 'U';
}