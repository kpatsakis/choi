void fun()
{
  int entity_5 = 59;
  char entity_7[85] = "";
  char entity_0 = 'Y';
  char* entity_2;
  char entity_6[entity_5] = "";
  memset(entity_6, 'p', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'x', 85-1);
  entity_7[85-1]='0';
  strcpy(entity_2, entity_6);
}