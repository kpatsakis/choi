void fun()
{
  char entity_0[24] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  memset(entity_0, 'U', 24-1);
  entity_0[24-1]='';
  memcpy(entity_5, entity_0, 24*sizeof(char));
}