void fun()
{
  char* entity_9;
  char entity_0[99] = "";
  char* entity_1;
  char entity_7[43] = "";
  memset(entity_0, 'u', 99-1);
  entity_0[99-1]='0';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'D', 43-1);
  entity_7[43-1]='0';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}