void fun()
{
  int entity_7 = 44;
  char entity_5[21] = "";
  char* entity_4;
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'g', 21-1);
  entity_5[21-1]='0';
  strcpy(entity_4, entity_5);
}