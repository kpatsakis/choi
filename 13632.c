void fun()
{
  int entity_6 = 70;
  char entity_2[25] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'V', 25-1);
  entity_2[25-1]='0';
  entity_6 = 66;
  strcpy(entity_8, entity_2);
}