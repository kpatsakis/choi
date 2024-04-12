void fun()
{
  char* entity_0;
  char entity_1[19] = "";
  memset(entity_1, 'k', 19-1);
  entity_1[19-1]='0';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_1, 19*sizeof(char));
}