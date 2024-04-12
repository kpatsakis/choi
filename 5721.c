void fun()
{
  char entity_1[98] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 't', 98-1);
  entity_1[98-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  memcpy(entity_0, entity_1, 98*sizeof(char));
}