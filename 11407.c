void fun()
{
  char* entity_1;
  char entity_8[10] = "";
  memset(entity_8, 'X', 10-1);
  entity_8[10-1]='0';
  entity_1 = (char*)malloc(100*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_8, 10*sizeof(char));
}