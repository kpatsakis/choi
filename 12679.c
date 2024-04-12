void fun()
{
  int entity_1 = 82;
  char* entity_6;
  char entity_4[34] = "";
  char entity_8 = 'M';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 's', 34-1);
  entity_4[34-1]='0';
  strcpy(entity_6, entity_4);
}