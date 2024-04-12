void fun()
{
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'L', 33-1);
  entity_4[33-1]='';
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[35-1]='';
  memcpy(entity_6, entity_4, 33*sizeof(char));
}