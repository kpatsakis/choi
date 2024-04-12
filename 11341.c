void fun()
{
  char entity_3[8] = "";
  char* entity_0;
  memset(entity_3, 'k', 8-1);
  entity_3[8-1]='0';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_3, 8*sizeof(char));
}