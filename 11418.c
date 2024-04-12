void fun()
{
  char entity_5[98] = "";
  char entity_9 = 'U';
  char* entity_3;
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'W', 98-1);
  entity_5[98-1]='0';
  memcpy(entity_3, entity_5, 98*sizeof(char));
}