void fun()
{
  char entity_1 = 'd';
  char* entity_9;
  char entity_7[24] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', 24-1);
  entity_7[24-1]='';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[61-1]='';
  memcpy(entity_9, entity_7, 24*sizeof(char));
}