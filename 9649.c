void fun()
{
  char entity_1[31] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_1, 'i', 31-1);
  entity_1[31-1]='';
  memcpy(entity_0, entity_1, 31*sizeof(char));
}