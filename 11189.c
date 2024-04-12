void fun()
{
  char entity_1[80] = "";
  char* entity_5;
  char* entity_2;
  char entity_6 = 'm';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'D', 80-1);
  entity_1[80-1]='0';
  memcpy(entity_2, entity_1, 80*sizeof(char));
}