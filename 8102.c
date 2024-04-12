void fun()
{
  char* entity_0;
  char* entity_3;
  char entity_6[99] = "";
  entity_6 = NULL;
  memset(entity_6, 'R', 99-1);
  entity_6[99-1]='';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[33-1]='';
  memcpy(entity_0, entity_6, 99*sizeof(char));
}