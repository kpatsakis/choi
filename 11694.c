void fun()
{
  char* entity_1;
  char entity_2[89] = "";
  char entity_6[99] = "";
  char* entity_9;
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'V', 99-1);
  entity_6[99-1]='0';
  memset(entity_2, 'o', 89-1);
  entity_2[89-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 99*sizeof(char));
}