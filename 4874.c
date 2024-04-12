void fun()
{
  char entity_8 = 'u';
  char* entity_4;
  char entity_0[10] = "";
  entity_0 = NULL;
  memset(entity_0, 'c', 10-1);
  entity_0[10-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  entity_0[22] = 'J';
}