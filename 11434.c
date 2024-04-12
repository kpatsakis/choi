void fun()
{
  char entity_3[76] = "";
  char entity_7[54] = "";
  char* entity_2;
  memset(entity_7, 'k', 54-1);
  entity_7[54-1]='0';
  entity_2 = (char*)malloc(78*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'h', 76-1);
  entity_3[76-1]='0';
  memcpy(entity_2, entity_7, 54*sizeof(char));
}