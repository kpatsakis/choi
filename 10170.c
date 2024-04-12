void fun()
{
  char* entity_4;
  char entity_7[16] = "";
  memset(entity_7, 'S', 16-1);
  entity_7[16-1]='0';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[0]='0';
  entity_7[72] = 'h';
}