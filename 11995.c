void fun()
{
  char entity_5[10] = "";
  char* entity_0;
  memset(entity_5, 'w', 10-1);
  entity_5[10-1]='0';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}