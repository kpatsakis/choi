void fun()
{
  int entity_4 = 30;
  char entity_3[74] = "";
  char entity_5[67] = "";
  char* entity_9;
  memset(entity_3, 't', 74-1);
  entity_3[74-1]='0';
  memset(entity_5, 'x', 67-1);
  entity_5[67-1]='0';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_5);
}