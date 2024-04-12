void fun()
{
  char entity_5[64] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_5, 'k', 64-1);
  entity_5[64-1]='';
  memcpy(entity_3, entity_5, 64*sizeof(char));
}