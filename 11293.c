void fun()
{
  char entity_0 = 'A';
  char entity_2[13] = "";
  char* entity_9;
  memset(entity_2, 'K', 13-1);
  entity_2[13-1]='0';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_2);
}