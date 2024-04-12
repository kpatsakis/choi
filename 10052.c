void fun()
{
  char entity_1[41] = "";
  char* entity_4;
  memset(entity_1, 'd', 41-1);
  entity_1[41-1]='0';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[0]='0';
  entity_1[9] = 'g';
}