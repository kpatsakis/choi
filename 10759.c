void fun()
{
  char entity_1[29] = "";
  char* entity_2;
  char entity_9[62] = "";
  memset(entity_9, 'Z', 62-1);
  entity_9[62-1]='0';
  memset(entity_1, 'Q', 29-1);
  entity_1[29-1]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  entity_9[12] = 'E';
}