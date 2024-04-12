void fun()
{
  int entity_6 = 26;
  entity_6 = 4;
  char entity_8[70] = "";
  char entity_9[67] = "";
  char entity_0 = 's';
  char entity_7 = 'z';
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'B', 70-1);
  entity_8[70-1]='0';
  memset(entity_9, 'p', 67-1);
  entity_9[67-1]='0';
  strcpy(entity_5, entity_9);
}