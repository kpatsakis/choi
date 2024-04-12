void fun()
{
  char* entity_1;
  char entity_6 = 'V';
  char entity_8[26] = "";
  memset(entity_8, 'j', 26-1);
  entity_8[26-1]='0';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_8, 26*sizeof(char));
}