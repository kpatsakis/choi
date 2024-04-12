void fun()
{
  char* entity_0;
  char entity_4[78] = "";
  char entity_8 = 'N';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'z', 78-1);
  entity_4[78-1]='0';
  strcpy(entity_0, entity_4);
}