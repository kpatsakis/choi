void fun()
{
  int entity_3 = 27;
  char entity_6[47] = "";
  char* entity_1;
  memset(entity_6, 'L', 47-1);
  entity_6[47-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  entity_3 = 93;
  strcpy(entity_1, entity_6);
}