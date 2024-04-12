void fun()
{
  char entity_0[100] = "";
  char* entity_9;
  memset(entity_0, 'v', 100-1);
  entity_0[100-1]='0';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, 100*sizeof(char));
}