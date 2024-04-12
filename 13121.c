void fun()
{
  int entity_3 = 3;
  char entity_1[70] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'M', 70-1);
  entity_1[70-1]='0';
  entity_3 = 57;
  strcpy(entity_8, entity_1);
}