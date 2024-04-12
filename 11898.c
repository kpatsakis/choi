void fun()
{
  char entity_8[8] = "";
  char entity_9[12] = "";
  char* entity_3;
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'R', 12-1);
  entity_9[12-1]='0';
  memset(entity_8, 'p', 8-1);
  entity_8[8-1]='0';
  memcpy(entity_3, entity_9, 12*sizeof(char));
}