void fun()
{
  int entity_2 = 46;
  char* entity_7;
  char entity_5[entity_2] = "";
  char entity_6 = 'T';
  char* entity_1;
  memset(entity_5, 's', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_1, entity_5, entity_2*sizeof(char));
}