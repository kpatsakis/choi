void fun()
{
  int entity_6 = 35;
  char entity_2[8] = "";
  char entity_9[54] = "";
  char* entity_8;
  memset(entity_9, 'V', 54-1);
  entity_9[54-1]='0';
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'u', 8-1);
  entity_2[8-1]='0';
  strcpy(entity_8, entity_2);
}