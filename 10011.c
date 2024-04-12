void fun()
{
  char entity_9[20] = "";
  char* entity_3;
  memset(entity_9, 'H', 20-1);
  entity_9[20-1]='0';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[0]='0';
  entity_9[2] = 'U';
}