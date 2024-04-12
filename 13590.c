void fun()
{
  int entity_4 = 67;
  char* entity_1;
  char* entity_2;
  char* entity_7;
  char entity_8[entity_4] = "";
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(90*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'L', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_4 = 24;
  memcpy(entity_1, entity_8, entity_4*sizeof(char));
}