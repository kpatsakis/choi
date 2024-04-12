void fun()
{
  int entity_1 = 6;
  char entity_3[50] = "";
  char* entity_8;
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'u', 50-1);
  entity_3[50-1]='0';
  entity_3[30] = 'n';
}