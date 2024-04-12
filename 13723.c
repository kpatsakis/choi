void fun()
{
  int entity_1 = 89;
  char* entity_4;
  char entity_2[44] = "";
  memset(entity_2, 'p', 44-1);
  entity_2[44-1]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  entity_1 = 30;
  strcpy(entity_4, entity_2);
}