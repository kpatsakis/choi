void fun()
{
  char entity_4[86] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'L', 86-1);
  entity_4[86-1]='';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[10-1]='';
  memcpy(entity_2, entity_4, 86*sizeof(char));
}