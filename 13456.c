void fun()
{
  int entity_3 = 68;
  int entity_6 = 63;
  char* entity_7;
  char* entity_1;
  char entity_4[7] = "";
  memset(entity_4, 'L', 7-1);
  entity_4[7-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  entity_6 = 59;
  memcpy(entity_7, entity_4, 7*sizeof(char));
}