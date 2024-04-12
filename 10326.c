void fun()
{
  char* entity_2;
  char entity_8[36] = "";
  char entity_6 = 'K';
  memset(entity_8, 'X', 36-1);
  entity_8[36-1]='0';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[0]='0';
  entity_8[47] = 'n';
}