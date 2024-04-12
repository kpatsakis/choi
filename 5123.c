void fun()
{
  char entity_5[94] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'b', 94-1);
  entity_5[94-1]='';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  memcpy(entity_0, entity_5, 94*sizeof(char));
}