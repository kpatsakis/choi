void fun()
{
  int entity_5 = 23;
  char entity_7[14] = "";
  char entity_2 = 'r';
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'j', 14-1);
  entity_7[14-1]='0';
  strcpy(entity_6, entity_7);
}