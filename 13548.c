void fun()
{
  int entity_3 = 2;
  char* entity_4;
  char entity_7[20] = "";
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'g', 20-1);
  entity_7[20-1]='0';
  entity_3 = 15;
  strcpy(entity_4, entity_7);
}