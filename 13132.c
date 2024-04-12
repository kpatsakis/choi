void fun()
{
  int entity_3 = 44;
  char* entity_6;
  char entity_8[10] = "";
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'J', 10-1);
  entity_8[10-1]='0';
  entity_3 = 97;
  strcpy(entity_6, entity_8);
}