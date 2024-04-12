void fun()
{
  int entity_4 = 81;
  char entity_8[51] = "";
  char entity_9 = 'H';
  char* entity_5;
  char* entity_1;
  entity_1 = (char*)malloc(44*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'b', 51-1);
  entity_8[51-1]='0';
  memcpy(entity_1, entity_8, 51*sizeof(char));
}