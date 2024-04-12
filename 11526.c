void fun()
{
  char* entity_9;
  char entity_4[46] = "";
  char entity_7 = 'q';
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'e', 46-1);
  entity_4[46-1]='0';
  memcpy(entity_9, entity_4, 46*sizeof(char));
}