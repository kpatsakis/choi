void fun()
{
  int entity_0 = 3;
  char entity_7[1] = "";
  char* entity_5;
  char* entity_9;
  memset(entity_7, 'x', 1-1);
  entity_7[1-1]='0';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[0]='0';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_5, entity_7, 1*sizeof(char));
}