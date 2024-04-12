void fun()
{
  char* entity_0;
  char* entity_3;
  char entity_6[86] = "";
  memset(entity_6, 'z', 86-1);
  entity_6[86-1]='0';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_3, entity_6, 86*sizeof(char));
}