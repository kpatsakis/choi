void fun()
{
  char entity_0[10] = "";
  char* entity_9;
  char* entity_7;
  memset(entity_0, 'f', 10-1);
  entity_0[10-1]='0';
  entity_9 = (char*)malloc(91*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 10*sizeof(char));
}