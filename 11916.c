void fun()
{
  char* entity_5;
  char entity_9[9] = "";
  memset(entity_9, 'B', 9-1);
  entity_9[9-1]='0';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 9*sizeof(char));
}