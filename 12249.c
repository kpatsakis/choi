void fun()
{
  int entity_9 = 39;
  char entity_7 = 'c';
  char entity_5[23] = "";
  char entity_0[13] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'F', 23-1);
  entity_5[23-1]='0';
  memset(entity_0, 'c', 13-1);
  entity_0[13-1]='0';
  memcpy(entity_6, entity_0, 13*sizeof(char));
}