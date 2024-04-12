void fun()
{
  int entity_7 = 89;
  entity_7 = 3;
  char* entity_5;
  char entity_1[17] = "";
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'o', 17-1);
  entity_1[17-1]='0';
  strcpy(entity_5, entity_1);
}