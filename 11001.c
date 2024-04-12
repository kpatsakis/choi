void fun()
{
  char entity_2[25] = "";
  char* entity_3;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'u', 25-1);
  entity_2[25-1]='0';
  memcpy(entity_3, entity_2, 25*sizeof(char));
}