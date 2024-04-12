void fun()
{
  char* entity_1;
  char entity_5[18] = "";
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'x', 18-1);
  entity_5[18-1]='0';
  memcpy(entity_1, entity_5, 18*sizeof(char));
}