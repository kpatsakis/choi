void fun()
{
  char* entity_6;
  char entity_0[41] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', 41-1);
  entity_0[41-1]='';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memcpy(entity_6, entity_0, 41*sizeof(char));
}