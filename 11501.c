void fun()
{
  char entity_4 = 'i';
  char* entity_9;
  char entity_7[21] = "";
  char entity_5 = 'z';
  memset(entity_7, 'z', 21-1);
  entity_7[21-1]='0';
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 21*sizeof(char));
}