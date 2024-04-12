void fun()
{
  char entity_6 = 'Q';
  char entity_1[31] = "";
  char* entity_8;
  char entity_5 = 'C';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'g', 31-1);
  entity_1[31-1]='0';
  memcpy(entity_8, entity_1, 31*sizeof(char));
}