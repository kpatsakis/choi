void fun()
{
  char* entity_7;
  char* entity_4;
  char entity_1[9] = "";
  memset(entity_1, 'K', 9-1);
  entity_1[9-1]='0';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[0]='0';
  entity_1[77] = 'e';
}