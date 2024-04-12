void fun()
{
  char entity_7[58] = "";
  char* entity_9;
  memset(entity_7, 'q', 58-1);
  entity_7[58-1]='0';
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[0]='0';
  entity_7[33] = 'l';
}