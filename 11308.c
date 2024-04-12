void fun()
{
  char entity_9[83] = "";
  char* entity_1;
  char* entity_0;
  memset(entity_9, 'Z', 83-1);
  entity_9[83-1]='0';
  entity_1 = (char*)malloc(45*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 83*sizeof(char));
}