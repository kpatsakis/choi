void fun()
{
  char* entity_0;
  char entity_5[98] = "";
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'G', 98-1);
  entity_5[98-1]='0';
  memcpy(entity_0, entity_5, 98*sizeof(char));
}