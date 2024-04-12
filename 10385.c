void fun()
{
  char entity_5[75] = "";
  char* entity_6;
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'X', 75-1);
  entity_5[75-1]='0';
  entity_5[68] = 'u';
}