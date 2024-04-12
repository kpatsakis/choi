void fun()
{
  char* entity_0;
  char entity_4[53] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', 53-1);
  entity_4[53-1]='';
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  memcpy(entity_0, entity_4, 53*sizeof(char));
}