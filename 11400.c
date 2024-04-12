void fun()
{
  int entity_4 = 17;
  char* entity_9;
  char* entity_1;
  char entity_5[2] = "";
  char entity_7 = 'J';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'L', 2-1);
  entity_5[2-1]='0';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 2*sizeof(char));
}