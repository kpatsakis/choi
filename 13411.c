void fun()
{
  int entity_1 = 61;
  char* entity_8;
  char* entity_7;
  char entity_2[entity_1] = "";
  char* entity_4;
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[0]='0';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'N', entity_1-1);
  entity_2[entity_1-1]='0';
  entity_1 = 50;
  strcpy(entity_4, entity_2);
}