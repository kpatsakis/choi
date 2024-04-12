void fun()
{
  char entity_1 = 'f';
  char* entity_4;
  char entity_9 = 'f';
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', 55-1);
  entity_0[55-1]='';
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  entity_0[24] = 'n';
}