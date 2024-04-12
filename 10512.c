void fun()
{
  int entity_3 = 73;
  char entity_4[11] = "";
  char* entity_8;
  memset(entity_4, 'B', 11-1);
  entity_4[11-1]='0';
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  entity_4[92] = 'b';
}