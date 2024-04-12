void fun()
{
  char entity_4 = 'U';
  char entity_3[78] = "";
  char* entity_1;
  memset(entity_3, 'M', 78-1);
  entity_3[78-1]='0';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[0]='0';
  entity_3[17] = 't';
}