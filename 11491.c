void fun()
{
  char entity_8 = 'S';
  char entity_5[43] = "";
  char* entity_9;
  memset(entity_5, 'I', 43-1);
  entity_5[43-1]='0';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 43*sizeof(char));
}