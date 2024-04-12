void fun()
{
  char* entity_0;
  char* entity_1;
  char entity_9[10] = "";
  char entity_4 = 'H';
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'I', 10-1);
  entity_9[10-1]='0';
  memcpy(entity_1, entity_9, 10*sizeof(char));
}