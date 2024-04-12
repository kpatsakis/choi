void fun()
{
  char* entity_3;
  char entity_4 = 'A';
  char entity_0[5] = "";
  char entity_7 = 'z';
  char* entity_8;
  memset(entity_0, 'Z', 5-1);
  entity_0[5-1]='0';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_3, entity_0);
}