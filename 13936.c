void fun()
{
  int entity_0 = 98;
  char* entity_7;
  char entity_2[88] = "";
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'M', 88-1);
  entity_2[88-1]='0';
  entity_0 = 53;
  strcpy(entity_7, entity_2);
}