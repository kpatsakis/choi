void fun()
{
  char* entity_7;
  char entity_0[44] = "";
  char* entity_4;
  char* entity_2;
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(23*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'i', 44-1);
  entity_0[44-1]='0';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_4, entity_0, 44*sizeof(char));
}