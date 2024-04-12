void fun()
{
  char entity_0[7] = "";
  char* entity_4;
  char entity_9[43] = "";
  memset(entity_0, 'x', 7-1);
  entity_0[7-1]='0';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'x', 43-1);
  entity_9[43-1]='0';
  memcpy(entity_4, entity_9, 43*sizeof(char));
}