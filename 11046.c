void fun()
{
  char entity_6[78] = "";
  char entity_3[53] = "";
  char* entity_4;
  char* entity_5;
  memset(entity_3, 'a', 53-1);
  entity_3[53-1]='0';
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'g', 78-1);
  entity_6[78-1]='0';
  strcpy(entity_4, entity_3);
}