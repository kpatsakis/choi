void fun()
{
  char entity_5[69] = "";
  entity_5 = NULL;
  char entity_9 = 'H';
  char* entity_0;
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  memset(entity_5, 'G', 69-1);
  entity_5[69-1]='';
  memcpy(entity_0, entity_5, 69*sizeof(char));
}