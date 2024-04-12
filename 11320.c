void fun()
{
  char entity_0 = 'C';
  char entity_9[53] = "";
  char* entity_1;
  char entity_7[56] = "";
  memset(entity_7, 'I', 56-1);
  entity_7[56-1]='0';
  memset(entity_9, 'R', 53-1);
  entity_9[53-1]='0';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_7);
}