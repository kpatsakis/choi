void fun()
{
  char entity_6[79] = "";
  char entity_8 = 'A';
  char* entity_1;
  char entity_3[89] = "";
  memset(entity_3, 'f', 89-1);
  entity_3[89-1]='0';
  memset(entity_6, 'N', 79-1);
  entity_6[79-1]='0';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_3);
}