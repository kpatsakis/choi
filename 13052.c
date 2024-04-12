void fun()
{
  int entity_2 = 66;
  entity_2 = 28;
  char entity_4[28] = "";
  char* entity_1;
  memset(entity_4, 'o', 28-1);
  entity_4[28-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_4);
}