void fun()
{
  char entity_1 = 'k';
  char* entity_3;
  char entity_6[76] = "";
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'o', 76-1);
  entity_6[76-1]='0';
  memcpy(entity_3, entity_6, 76*sizeof(char));
}