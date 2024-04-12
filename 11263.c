void fun()
{
  char entity_8[11] = "";
  char* entity_1;
  memset(entity_8, 'm', 11-1);
  entity_8[11-1]='0';
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}