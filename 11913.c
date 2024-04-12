void fun()
{
  char entity_5[83] = "";
  char entity_7[70] = "";
  char* entity_1;
  char entity_4 = 'S';
  memset(entity_5, 'c', 83-1);
  entity_5[83-1]='0';
  memset(entity_7, 'n', 70-1);
  entity_7[70-1]='0';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_5, 83*sizeof(char));
}