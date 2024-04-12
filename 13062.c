void fun()
{
  int entity_1 = 14;
  entity_1 = 31;
  char* entity_0;
  char entity_3[23] = "";
  char entity_9 = 'y';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 's', 23-1);
  entity_3[23-1]='0';
  memcpy(entity_0, entity_3, 23*sizeof(char));
}