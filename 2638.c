void fun()
{
  char* entity_0;
  char entity_3[23] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', 23-1);
  entity_3[23-1]='';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memcpy(entity_0, entity_3, 23*sizeof(char));
}