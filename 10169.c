void fun()
{
  char* entity_7;
  char entity_8[19] = "";
  char entity_2[25] = "";
  memset(entity_8, 'J', 19-1);
  entity_8[19-1]='0';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'w', 25-1);
  entity_2[25-1]='0';
  entity_2[19] = 'w';
}