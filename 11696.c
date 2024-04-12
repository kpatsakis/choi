void fun()
{
  char entity_9 = 'D';
  char* entity_7;
  char entity_5[30] = "";
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'd', 30-1);
  entity_5[30-1]='0';
  memcpy(entity_7, entity_5, 30*sizeof(char));
}