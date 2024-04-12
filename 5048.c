void fun()
{
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'V', 96-1);
  entity_7[96-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  memcpy(entity_0, entity_7, 96*sizeof(char));
}