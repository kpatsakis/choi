void fun()
{
  int entity_9 = 80;
  char entity_2[39] = "";
  char* entity_1;
  char* entity_5;
  char entity_3[28] = "";
  memset(entity_3, 'G', 28-1);
  entity_3[28-1]='0';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'A', 39-1);
  entity_2[39-1]='0';
  strcpy(entity_5, entity_2);
}