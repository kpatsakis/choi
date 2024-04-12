void fun()
{
  char entity_7[67] = "";
  char* entity_9;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'n', 67-1);
  entity_7[67-1]='0';
  memcpy(entity_9, entity_7, 67*sizeof(char));
}