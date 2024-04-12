void fun()
{
  char entity_0[42] = "";
  char* entity_8;
  char entity_7[62] = "";
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'd', 42-1);
  entity_0[42-1]='0';
  memset(entity_7, 'Z', 62-1);
  entity_7[62-1]='0';
  strcpy(entity_8, entity_0);
}