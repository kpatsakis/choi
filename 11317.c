void fun()
{
  char entity_9[85] = "";
  char entity_4 = 'p';
  char* entity_0;
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'R', 85-1);
  entity_9[85-1]='0';
  memcpy(entity_0, entity_9, 85*sizeof(char));
}