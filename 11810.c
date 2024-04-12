void fun()
{
  char entity_5[21] = "";
  char* entity_1;
  memset(entity_5, 'v', 21-1);
  entity_5[21-1]='0';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_5, 21*sizeof(char));
}