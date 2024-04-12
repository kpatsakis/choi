void fun()
{
  int entity_9 = 88;
  entity_9 = 8;
  char* entity_4;
  char entity_7[90] = "";
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'a', 90-1);
  entity_7[90-1]='0';
  memcpy(entity_4, entity_7, 90*sizeof(char));
}