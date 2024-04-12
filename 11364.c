void fun()
{
  char entity_3[28] = "";
  char* entity_1;
  char entity_7 = 'D';
  memset(entity_3, 'L', 28-1);
  entity_3[28-1]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_3, 28*sizeof(char));
}