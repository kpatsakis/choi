void fun()
{
  char* entity_5;
  char entity_9[36] = "";
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'F', 36-1);
  entity_9[36-1]='0';
  memcpy(entity_5, entity_9, 36*sizeof(char));
}