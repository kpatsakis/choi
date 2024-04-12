void fun()
{
  char entity_1[90] = "";
  char entity_9[61] = "";
  char* entity_3;
  memset(entity_9, 'x', 61-1);
  entity_9[61-1]='0';
  memset(entity_1, 'x', 90-1);
  entity_1[90-1]='0';
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 90*sizeof(char));
}