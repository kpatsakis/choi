void fun()
{
  int entity_9 = 76;
  char* entity_8;
  char entity_7[90] = "";
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'r', 90-1);
  entity_7[90-1]='0';
  strcpy(entity_8, entity_7);
}