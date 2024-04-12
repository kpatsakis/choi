void fun()
{
  char entity_7[92] = "";
  char entity_6[17] = "";
  char* entity_1;
  char entity_5[95] = "";
  memset(entity_5, 'y', 95-1);
  entity_5[95-1]='0';
  memset(entity_7, 'O', 92-1);
  entity_7[92-1]='0';
  memset(entity_6, 'N', 17-1);
  entity_6[17-1]='0';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}