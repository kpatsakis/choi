void fun()
{
  int entity_2 = 69;
  char* entity_5;
  char entity_3[36] = "";
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'L', 36-1);
  entity_3[36-1]='0';
  entity_2 = 93;
  strcpy(entity_5, entity_3);
}