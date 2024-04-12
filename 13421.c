void fun()
{
  int entity_0 = 19;
  char entity_6 = 'x';
  char* entity_8;
  char* entity_2;
  char entity_5[18] = "";
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[0]='0';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'p', 18-1);
  entity_5[18-1]='0';
  entity_0 = 72;
  strcpy(entity_2, entity_5);
}