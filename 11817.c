void fun()
{
  char* entity_6;
  char entity_2 = 'R';
  char entity_4[82] = "";
  char entity_1[70] = "";
  memset(entity_1, 'U', 70-1);
  entity_1[70-1]='0';
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'N', 82-1);
  entity_4[82-1]='0';
  memcpy(entity_6, entity_4, 82*sizeof(char));
}