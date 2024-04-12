void fun()
{
  int entity_6 = 73;
  int entity_0 = 50;
  char entity_4[4] = "";
  char* entity_9;
  char entity_3 = 'Y';
  memset(entity_4, 'C', 4-1);
  entity_4[4-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, 4*sizeof(char));
}