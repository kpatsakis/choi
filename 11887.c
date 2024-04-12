void fun()
{
  char* entity_0;
  char entity_3[63] = "";
  memset(entity_3, 'B', 63-1);
  entity_3[63-1]='0';
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_3);
}