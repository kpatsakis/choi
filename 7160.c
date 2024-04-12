void fun()
{
  char* entity_6;
  char entity_8[90] = "";
  entity_8 = NULL;
  memset(entity_8, 'h', 90-1);
  entity_8[90-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  entity_8[97] = 'b';
}