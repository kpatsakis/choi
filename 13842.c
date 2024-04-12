void fun()
{
  int entity_0 = 32;
  entity_0 = 38;
  char* entity_7;
  char entity_2[70] = "";
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'i', 70-1);
  entity_2[70-1]='0';
  strcpy(entity_7, entity_2);
}