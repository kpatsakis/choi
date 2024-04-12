void fun()
{
  int entity_9 = 59;
  char entity_3[23] = "";
  char* entity_7;
  memset(entity_3, 'J', 23-1);
  entity_3[23-1]='0';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  entity_9 = 13;
  memcpy(entity_7, entity_3, 23*sizeof(char));
}