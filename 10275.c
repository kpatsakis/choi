void fun()
{
  char* entity_5;
  char entity_6[57] = "";
  char* entity_2;
  char entity_1[84] = "";
  memset(entity_1, 'z', 84-1);
  entity_1[84-1]='0';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'J', 57-1);
  entity_6[57-1]='0';
  entity_1[69] = 's';
}