void fun()
{
  char entity_3[28] = "";
  char* entity_0;
  memset(entity_3, 'm', 28-1);
  entity_3[28-1]='0';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_3);
}