void fun()
{
  char* entity_8;
  char entity_4[86] = "";
  entity_4 = NULL;
  memset(entity_4, 'e', 86-1);
  entity_4[86-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memcpy(entity_8, entity_4, 86*sizeof(char));
}