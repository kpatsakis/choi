void fun()
{
  int entity_9 = 70;
  char entity_5[46] = "";
  char* entity_1;
  char* entity_3;
  memset(entity_5, 'V', 46-1);
  entity_5[46-1]='0';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}