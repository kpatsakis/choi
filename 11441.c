void fun()
{
  char* entity_4;
  char* entity_3;
  char entity_9[53] = "";
  char* entity_2;
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'v', 53-1);
  entity_9[53-1]='0';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[0]='0';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_4, entity_9, 53*sizeof(char));
}