void fun()
{
  int entity_4 = 39;
  char entity_6 = 'Y';
  char entity_5[10] = "";
  char* entity_2;
  char entity_7 = 'Q';
  memset(entity_5, 'o', 10-1);
  entity_5[10-1]='0';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}