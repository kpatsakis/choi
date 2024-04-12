void fun()
{
  char entity_2[14] = "";
  char entity_8 = 'x';
  char* entity_3;
  memset(entity_2, 'I', 14-1);
  entity_2[14-1]='0';
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[0]='0';
  entity_2[68] = 'u';
}