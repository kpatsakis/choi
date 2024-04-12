void fun()
{
  char entity_1[76] = "";
  char* entity_0;
  char* entity_5;
  char entity_9[42] = "";
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'g', 42-1);
  entity_9[42-1]='0';
  memset(entity_1, 'r', 76-1);
  entity_1[76-1]='0';
  strcpy(entity_0, entity_9);
}