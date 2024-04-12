void fun()
{
  char* entity_5;
  char entity_8[22] = "";
  char entity_1 = 'D';
  char entity_0 = 'D';
  memset(entity_8, 'p', 22-1);
  entity_8[22-1]='0';
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, 22*sizeof(char));
}