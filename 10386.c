void fun()
{
  char* entity_0;
  char entity_2[87] = "";
  char entity_9[29] = "";
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'H', 29-1);
  entity_9[29-1]='0';
  memset(entity_2, 'v', 87-1);
  entity_2[87-1]='0';
  entity_2[43] = 'w';
}