void fun()
{
  char entity_3[10] = "";
  char* entity_8;
  char* entity_0;
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'P', 10-1);
  entity_3[10-1]='0';
  strcpy(entity_0, entity_3);
}