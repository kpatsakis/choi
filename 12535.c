void fun()
{
  int entity_6 = 59;
  char* entity_1;
  char entity_2[entity_6] = "";
  char entity_7 = 'P';
  char entity_3[21] = "";
  char* entity_5;
  memset(entity_2, 'S', entity_6-1);
  entity_2[entity_6-1]='0';
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'l', 21-1);
  entity_3[21-1]='0';
  strcpy(entity_5, entity_2);
}