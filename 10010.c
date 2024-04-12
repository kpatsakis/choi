void fun()
{
  char entity_4[21] = "";
  char* entity_9;
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'I', 21-1);
  entity_4[21-1]='0';
  entity_4[76] = 'a';
}