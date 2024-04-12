void fun()
{
  int entity_2 = 16;
  char* entity_3;
  char entity_6[25] = "";
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'i', 25-1);
  entity_6[25-1]='0';
  strcpy(entity_3, entity_6);
}