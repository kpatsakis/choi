void fun()
{
  int entity_2 = 26;
  char entity_1 = 'D';
  char entity_3[33] = "";
  char* entity_5;
  char entity_9[43] = "";
  memset(entity_9, 'j', 43-1);
  entity_9[43-1]='0';
  memset(entity_3, 'U', 33-1);
  entity_3[33-1]='0';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 43*sizeof(char));
}