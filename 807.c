void fun()
{
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  memset(entity_0, 'k', 94-1);
  entity_0[94-1]='';
  memcpy(entity_1, entity_0, 94*sizeof(char));
}