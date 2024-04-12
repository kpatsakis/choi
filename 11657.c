void fun()
{
  int entity_9 = 89;
  char entity_4[56] = "";
  char* entity_5;
  char entity_7[6] = "";
  memset(entity_4, 'T', 56-1);
  entity_4[56-1]='0';
  memset(entity_7, 'Y', 6-1);
  entity_7[6-1]='0';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 56*sizeof(char));
}