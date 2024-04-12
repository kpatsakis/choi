void fun()
{
  char entity_9[10] = "";
  char entity_2[27] = "";
  char* entity_6;
  memset(entity_2, 'W', 27-1);
  entity_2[27-1]='0';
  memset(entity_9, 'U', 10-1);
  entity_9[10-1]='0';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, 27*sizeof(char));
}