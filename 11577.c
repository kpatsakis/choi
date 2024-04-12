void fun()
{
  char entity_5[75] = "";
  char* entity_1;
  entity_1 = (char*)malloc(100*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'A', 75-1);
  entity_5[75-1]='0';
  memcpy(entity_1, entity_5, 75*sizeof(char));
}