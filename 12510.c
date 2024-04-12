void fun()
{
  int entity_6 = 4;
  char* entity_3;
  char entity_5[77] = "";
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'f', 77-1);
  entity_5[77-1]='0';
  strcpy(entity_3, entity_5);
}