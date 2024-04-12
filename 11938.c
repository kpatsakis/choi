void fun()
{
  char entity_8[11] = "";
  char* entity_0;
  memset(entity_8, 'a', 11-1);
  entity_8[11-1]='0';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 11*sizeof(char));
}