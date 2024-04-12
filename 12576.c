void fun()
{
  int entity_0 = 52;
  int entity_8 = 56;
  char entity_6 = 'S';
  char entity_3[78] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'V', 78-1);
  entity_3[78-1]='0';
  strcpy(entity_7, entity_3);
}