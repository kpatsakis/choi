void fun()
{
  char entity_8[28] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  memset(entity_8, 'u', 28-1);
  entity_8[28-1]='';
  memcpy(entity_4, entity_8, 28*sizeof(char));
}