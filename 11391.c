void fun()
{
  char* entity_9;
  char entity_5[9] = "";
  memset(entity_5, 'V', 9-1);
  entity_5[9-1]='0';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 9*sizeof(char));
}