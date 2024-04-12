void fun()
{
  char entity_9[99] = "";
  char* entity_2;
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'W', 99-1);
  entity_9[99-1]='0';
  memcpy(entity_2, entity_9, 99*sizeof(char));
}