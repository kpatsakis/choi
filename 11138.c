void fun()
{
  char entity_6 = 'J';
  char entity_9[14] = "";
  char* entity_4;
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'a', 14-1);
  entity_9[14-1]='0';
  memcpy(entity_4, entity_9, 14*sizeof(char));
}