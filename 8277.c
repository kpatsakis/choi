void fun()
{
  char entity_6 = 'U';
  char* entity_3;
  char entity_4[83] = "";
  entity_4 = NULL;
  char entity_7 = 'G';
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  memset(entity_4, 'x', 83-1);
  entity_4[83-1]='';
  strcpy(entity_3, entity_4);
}