void fun()
{
  char entity_3[82] = "";
  char* entity_1;
  char entity_6[23] = "";
  memset(entity_6, 'D', 23-1);
  entity_6[23-1]='0';
  memset(entity_3, 'J', 82-1);
  entity_3[82-1]='0';
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_3, 82*sizeof(char));
}