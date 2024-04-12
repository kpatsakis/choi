void fun()
{
  char* entity_9;
  char entity_6[18] = "";
  char entity_3[79] = "";
  memset(entity_6, 'c', 18-1);
  entity_6[18-1]='0';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'v', 79-1);
  entity_3[79-1]='0';
  strcpy(entity_9, entity_6);
}