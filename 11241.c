void fun()
{
  char entity_9[22] = "";
  char* entity_4;
  char entity_1[87] = "";
  memset(entity_1, 'h', 87-1);
  entity_1[87-1]='0';
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'C', 22-1);
  entity_9[22-1]='0';
  memcpy(entity_4, entity_1, 87*sizeof(char));
}