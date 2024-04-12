void fun()
{
  int entity_0 = 68;
  char entity_5[75] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'u', 75-1);
  entity_5[75-1]='0';
  entity_0 = 23;
  strcpy(entity_1, entity_5);
}