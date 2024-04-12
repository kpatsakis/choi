void fun()
{
  char* entity_5;
  char entity_9[34] = "";
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'J', 34-1);
  entity_9[34-1]='0';
  memcpy(entity_5, entity_9, 34*sizeof(char));
}