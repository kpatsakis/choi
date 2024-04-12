void fun()
{
  int entity_7 = 59;
  int entity_6 = 34;
  int entity_5 = 34;
  char entity_1[6] = "";
  char* entity_3;
  char entity_0[82] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'B', 6-1);
  entity_1[6-1]='0';
  memset(entity_0, 'S', 82-1);
  entity_0[82-1]='0';
  strcpy(entity_3, entity_0);
}