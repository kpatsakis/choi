void fun()
{
  char entity_8[85] = "";
  char entity_4[68] = "";
  char* entity_0;
  memset(entity_8, 'd', 85-1);
  entity_8[85-1]='0';
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'S', 68-1);
  entity_4[68-1]='0';
  strcpy(entity_0, entity_8);
}