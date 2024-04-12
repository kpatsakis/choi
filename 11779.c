void fun()
{
  int entity_8 = 94;
  char* entity_5;
  char entity_9[86] = "";
  char* entity_7;
  char* entity_2;
  memset(entity_9, 'd', 86-1);
  entity_9[86-1]='0';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_7, entity_9, 86*sizeof(char));
}