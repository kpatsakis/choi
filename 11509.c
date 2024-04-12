void fun()
{
  char* entity_2;
  char* entity_8;
  char entity_1[75] = "";
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[0]='0';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'l', 75-1);
  entity_1[75-1]='0';
  memcpy(entity_2, entity_1, 75*sizeof(char));
}