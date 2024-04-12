void fun()
{
  char entity_6[28] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'N', 28-1);
  entity_6[28-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memcpy(entity_8, entity_6, 28*sizeof(char));
}