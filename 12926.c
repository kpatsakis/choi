void fun()
{
  int entity_0 = 57;
  char entity_7 = 'S';
  char* entity_2;
  char entity_6[53] = "";
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'g', 53-1);
  entity_6[53-1]='0';
  strcpy(entity_2, entity_6);
}