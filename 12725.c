void fun()
{
  int entity_4 = 80;
  char entity_6[17] = "";
  char* entity_3;
  memset(entity_6, 'g', 17-1);
  entity_6[17-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}