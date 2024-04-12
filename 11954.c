void fun()
{
  char* entity_4;
  char entity_9[88] = "";
  char entity_2[36] = "";
  char entity_7 = 'I';
  memset(entity_9, 'l', 88-1);
  entity_9[88-1]='0';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'c', 36-1);
  entity_2[36-1]='0';
  strcpy(entity_4, entity_2);
}