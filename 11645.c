void fun()
{
  char entity_9[8] = "";
  char* entity_3;
  memset(entity_9, 'J', 8-1);
  entity_9[8-1]='0';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 8*sizeof(char));
}