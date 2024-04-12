void fun()
{
  char* entity_4;
  char entity_8 = 'A';
  char entity_9[64] = "";
  char* entity_5;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'H', 64-1);
  entity_9[64-1]='0';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_4, entity_9, 64*sizeof(char));
}