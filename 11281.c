void fun()
{
  char entity_9[14] = "";
  char* entity_8;
  char entity_5[22] = "";
  char entity_7[68] = "";
  memset(entity_7, 'J', 68-1);
  entity_7[68-1]='0';
  memset(entity_5, 'r', 22-1);
  entity_5[22-1]='0';
  memset(entity_9, 'g', 14-1);
  entity_9[14-1]='0';
  entity_8 = (char*)malloc(82*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}