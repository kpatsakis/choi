void fun()
{
  char entity_8[81] = "";
  char* entity_2;
  char entity_6 = 'S';
  char entity_3[22] = "";
  memset(entity_8, 'O', 81-1);
  entity_8[81-1]='0';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 's', 22-1);
  entity_3[22-1]='0';
  memcpy(entity_2, entity_3, 22*sizeof(char));
}