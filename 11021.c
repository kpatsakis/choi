void fun()
{
  char* entity_7;
  char entity_1[1] = "";
  char* entity_0;
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'K', 1-1);
  entity_1[1-1]='0';
  memcpy(entity_0, entity_1, 1*sizeof(char));
}