void fun()
{
  int entity_1 = 48;
  char entity_3 = 'x';
  char* entity_7;
  char entity_2[71] = "";
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'T', 71-1);
  entity_2[71-1]='0';
  memcpy(entity_7, entity_2, 71*sizeof(char));
}