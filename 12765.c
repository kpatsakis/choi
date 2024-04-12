void fun()
{
  int entity_6 = 45;
  char* entity_4;
  char entity_2[24] = "";
  char entity_7[2] = "";
  char* entity_1;
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[0]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'c', 2-1);
  entity_7[2-1]='0';
  memset(entity_2, 'Q', 24-1);
  entity_2[24-1]='0';
  strcpy(entity_1, entity_7);
}