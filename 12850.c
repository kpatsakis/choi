void fun()
{
  int entity_5 = 67;
  char* entity_1;
  char entity_7[86] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'R', 86-1);
  entity_7[86-1]='0';
  memcpy(entity_1, entity_7, 86*sizeof(char));
}