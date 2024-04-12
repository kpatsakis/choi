void fun()
{
  char entity_0[60] = "";
  char* entity_2;
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'v', 60-1);
  entity_0[60-1]='0';
  strcpy(entity_2, entity_0);
}