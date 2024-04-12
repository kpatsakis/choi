void fun()
{
  int entity_3 = 82;
  char entity_2[41] = "";
  char* entity_4;
  memset(entity_2, 'G', 41-1);
  entity_2[41-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  entity_3 = 78;
  strcpy(entity_4, entity_2);
}