void fun()
{
  int entity_7 = 92;
  char entity_4[6] = "";
  char entity_5[73] = "";
  char* entity_2;
  char* entity_3;
  memset(entity_4, 'O', 6-1);
  entity_4[6-1]='0';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'T', 73-1);
  entity_5[73-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 6*sizeof(char));
}