void fun()
{
  char entity_5[96] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'j', 96-1);
  entity_5[96-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  memcpy(entity_0, entity_5, 96*sizeof(char));
}