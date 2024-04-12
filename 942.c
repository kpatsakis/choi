void fun()
{
  char entity_6[88] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_5[17] = "";
  entity_5 = NULL;
  memset(entity_6, 'I', 88-1);
  entity_6[88-1]='';
  memset(entity_5, 'T', 17-1);
  entity_5[17-1]='';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[79-1]='';
  entity_6[71] = 'j';
}