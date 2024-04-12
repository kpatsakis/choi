void fun()
{
  char entity_7[80] = "";
  char entity_9[3] = "";
  char* entity_2;
  char entity_3 = 'c';
  memset(entity_9, 'Q', 3-1);
  entity_9[3-1]='0';
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 't', 80-1);
  entity_7[80-1]='0';
  memcpy(entity_2, entity_9, 3*sizeof(char));
}