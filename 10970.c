void fun()
{
  char entity_8[73] = "";
  char* entity_9;
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'V', 73-1);
  entity_8[73-1]='0';
  entity_8[37] = 'n';
}