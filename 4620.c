void fun()
{
  char entity_4[32] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'd', 32-1);
  entity_4[32-1]='';
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[37-1]='';
  memcpy(entity_6, entity_4, 32*sizeof(char));
}