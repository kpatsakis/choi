void fun()
{
  char entity_9[90] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'S', 90-1);
  entity_9[90-1]='';
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  entity_9[69] = 'B';
}