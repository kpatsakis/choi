void fun()
{
  char entity_2[32] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'T', 32-1);
  entity_2[32-1]='';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  memcpy(entity_5, entity_2, 32*sizeof(char));
}