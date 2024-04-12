void fun()
{
  char* entity_6;
  char entity_9[5] = "";
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'N', 5-1);
  entity_9[5-1]='0';
  entity_9[72] = 'V';
}