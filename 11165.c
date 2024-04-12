void fun()
{
  int entity_1 = 95;
  char* entity_3;
  char entity_8[82] = "";
  char* entity_9;
  char entity_6[57] = "";
  memset(entity_6, 'n', 57-1);
  entity_6[57-1]='0';
  memset(entity_8, 'k', 82-1);
  entity_8[82-1]='0';
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[0]='0';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_3, entity_6);
}