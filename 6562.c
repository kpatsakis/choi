void fun()
{
  char entity_6 = 'l';
  char entity_3[64] = "";
  entity_3 = NULL;
  char entity_0[88] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memset(entity_0, 'Y', 88-1);
  entity_0[88-1]='';
  memset(entity_3, 'F', 64-1);
  entity_3[64-1]='';
  memcpy(entity_4, entity_3, 64*sizeof(char));
}