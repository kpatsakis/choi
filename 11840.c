void fun()
{
  char entity_2[93] = "";
  char* entity_8;
  char entity_5[30] = "";
  memset(entity_5, 'I', 30-1);
  entity_5[30-1]='0';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'c', 93-1);
  entity_2[93-1]='0';
  memcpy(entity_8, entity_5, 30*sizeof(char));
}