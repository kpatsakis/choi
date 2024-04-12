void fun()
{
  int entity_1 = 65;
  char entity_9[86] = "";
  char* entity_4;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'e', 86-1);
  entity_9[86-1]='0';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_8, entity_9, 86*sizeof(char));
}